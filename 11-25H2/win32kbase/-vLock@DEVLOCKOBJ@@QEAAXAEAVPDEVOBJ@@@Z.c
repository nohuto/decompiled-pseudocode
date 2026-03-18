/*
 * XREFs of ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x140086CF8
 * Callers:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14014ED30 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B6B0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x140086D90 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKOBJ::vLock(DEVLOCKOBJ *this, struct PDEVOBJ *a2)
{
  __int64 v4; // rcx
  struct _ERESOURCE **v5; // r8
  struct _ERESOURCE *v6; // rdx
  __int64 v7; // rcx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  DEVLOCKOBJ::bPrepareTrgDco(this, 0LL);
  *((_DWORD *)this + 6) = 1;
  v4 = *(unsigned int *)(*(_QWORD *)a2 + 40LL);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(struct _ERESOURCE ***)(W32GetSessionState(v4) + 88);
    v6 = *(struct _ERESOURCE **)(*(_QWORD *)a2 + 48LL);
    *(_QWORD *)this = v6;
    v7 = *(_QWORD *)a2;
    *((_QWORD *)this + 2) = *(_QWORD *)a2;
    if ( v6 == &(*v5)[11] )
    {
      *((_DWORD *)this + 6) |= 0x100000u;
      GreAcquireSemaphore<2,>(v5);
    }
    else
    {
      GreAcquireSemaphore<8,PDEVOBJ>(v7);
    }
  }
}
