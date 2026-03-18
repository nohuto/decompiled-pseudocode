/*
 * XREFs of ?vSynchronizeDriver@@YAXK@Z @ 0x14007C15C
 * Callers:
 *     GreFlush @ 0x14007C140 (GreFlush.c)
 *     ?GreSynchronizeTimer@@YAXPEAXI_K_J@Z @ 0x140332970 (-GreSynchronizeTimer@@YAXPEAXI_K_J@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007AAA0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14007BCFC (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007BD64 (--$GreReleaseSemaphoreExclusive@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x14007D7D0 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14007E530 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x14007E5CC (--$GrepAcquireLockValidate@$00@@YAXXZ.c)
 */

void __fastcall vSynchronizeDriver(int a1)
{
  Gre::Base *v2; // rcx
  __int64 v3; // rsi
  __int64 *v4; // r14
  HSEMAPHORE v5; // rbp
  __int64 i; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // r9d
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState() + 96);
  if ( a1 == 64 )
  {
    if ( *(_DWORD *)(v3 + 4712) == -1 )
      return;
  }
  else if ( a1 != 128 || *(_QWORD *)(v3 + 4720) == -1LL )
  {
    return;
  }
  v4 = (__int64 *)Gre::Base::Globals(v2);
  v5 = (HSEMAPHORE)(*v4 + 624);
  GreAcquireSemaphoreSharedInternal(v5);
  GrepAcquireLockValidate<1>();
  for ( i = 0LL; ; i = v8 )
  {
    v7 = hdevEnumerateDisplayOnly(i);
    v8 = v7;
    if ( !v7 )
      break;
    v10 = v7;
    if ( (a1 & *(_DWORD *)(v7 + 2112)) != 0 )
    {
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10) )
      {
        GreAcquireSemaphore<2,>(v4);
        GreAcquireSemaphore<8,PDEVOBJ>(v10);
      }
      if ( (a1 & *(_DWORD *)(v10 + 2112)) != 0 && (*(_DWORD *)(v10 + 40) & 0x400) == 0 )
      {
        v9 = 0;
        if ( a1 == 64 )
        {
          if ( *(_DWORD *)(v3 + 4712) != -1 )
            v9 = 2;
        }
        else
        {
          v9 = *(_QWORD *)(v3 + 4720) != -1LL;
        }
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v10,
          (struct _SURFOBJ *)((*(_QWORD *)(v10 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v10 + 2544) != 0LL)),
          0LL,
          v9);
      }
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10) )
      {
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v10);
        GreReleaseSemaphoreExclusive<2,>(v4);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", v5);
  GrepReleaseLockValidate<1>();
  GreReleaseSemaphoreSharedInternal(v5);
}
