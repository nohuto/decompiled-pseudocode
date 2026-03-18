/*
 * XREFs of ??$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2058
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x140023CB8 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140035B80 (-HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x14003BEB4 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x14003FFF0 (--0XDCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400C4FD4 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1400FE4E4 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140137514 (--0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vAltUnlock@DCOBJA@@QEAAXXZ @ 0x14016D160 (-vAltUnlock@DCOBJA@@QEAAXXZ.c)
 */

void __fastcall vGarbageCollectObject<DCOBJA>(struct Gre::Base::SESSION_GLOBALS *a1, unsigned int a2)
{
  unsigned int *v4; // rax
  char v5; // di
  __int64 v6; // [rsp+20h] [rbp-49h] BYREF
  int v7; // [rsp+28h] [rbp-41h]
  char v8; // [rsp+2Dh] [rbp-3Ch]
  unsigned int *v9[4]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v10[32]; // [rsp+60h] [rbp-9h] BYREF
  DC *v11[8]; // [rsp+80h] [rbp+17h] BYREF

  XDCOBJ::XDCOBJ((XDCOBJ *)v9);
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>((__int64)v10);
  v9[0] = 0LL;
  v4 = (unsigned int *)HmgShareLock((__int64)a1, a2, 1, 1);
  v9[0] = v4;
  if ( v4 && v4[2] <= 1 )
  {
    HANDLELOCK::HANDLELOCK(&v6, (unsigned int *)a1, a2, 1);
    if ( v7 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
      DCOBJ::DCOBJ((DCOBJ *)v11, a1);
      v11[0] = (DC *)HmgLock((__int64)v11[2], *(_QWORD *)v9[0], 1, 1);
      if ( v11[0] )
      {
        DCOBJA::vAltUnlock(v9);
        v5 = XDCOBJ::bDelete(v11, 0x4000000);
      }
      else
      {
        v5 = 0;
      }
      DCOBJ::~DCOBJ((DCOBJ *)v11);
      if ( v5 )
        _InterlockedDecrement((volatile signed __int32 *)a1 + 461);
    }
    else
    {
      v8 = 1;
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v6);
  }
  DCOBJA::~DCOBJA(v9);
}
