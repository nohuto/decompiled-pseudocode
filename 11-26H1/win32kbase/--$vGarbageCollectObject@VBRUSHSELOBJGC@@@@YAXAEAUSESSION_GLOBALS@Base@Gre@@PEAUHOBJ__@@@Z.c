/*
 * XREFs of ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F1ED4
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x140023CB8 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1400C9BF0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401ECDBC (-bGarbageCollect@BRUSHSELOBJGC@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall vGarbageCollectObject<BRUSHSELOBJGC>(struct Gre::Base::SESSION_GLOBALS *a1, unsigned int a2)
{
  unsigned int *v4; // rax
  unsigned int *v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]
  char v9; // [rsp+3Dh] [rbp-1Bh]

  v6 = 0;
  v4 = (unsigned int *)HmgShareLock((__int64)a1, a2, 16, 1);
  v5 = v4;
  if ( v4 && v4[2] <= 1 )
  {
    HANDLELOCK::HANDLELOCK(&v7, (unsigned int *)a1, a2, 1);
    if ( v8 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
      if ( BRUSHSELOBJGC::bGarbageCollect((struct HOBJ__ ***)&v5, a1) )
        _InterlockedDecrement((volatile signed __int32 *)a1 + 461);
    }
    else
    {
      v9 = 1;
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v7);
  }
  EPALOBJ::~EPALOBJ(&v5);
}
