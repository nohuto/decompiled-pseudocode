/*
 * XREFs of ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x14006AA44
 * Callers:
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1401D78A0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x14006BD7C (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E588 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall DEVLOCKOBJ::vLock(DEVLOCKOBJ *this, struct PDEVOBJ *a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  HSEMAPHORE v7; // rbx

  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) != 0 )
  {
    v4 = Gre::Base::Globals(this);
    v5 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    *(_QWORD *)this = v5;
    v6 = *(_QWORD *)a2;
    *((_QWORD *)this + 2) = *(_QWORD *)a2;
    if ( v5 == *(_QWORD *)v4 + 1144LL )
    {
      *((_DWORD *)this + 6) |= 0x100000u;
      GreAcquireSemaphore<2,>(v4);
    }
    else
    {
      v7 = *(HSEMAPHORE *)(v6 + 48);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"DevLock", v7, 0LL);
      GreAcquireSemaphoreInternal(v7);
      GrepAcquireLockValidate<8>();
    }
  }
}
