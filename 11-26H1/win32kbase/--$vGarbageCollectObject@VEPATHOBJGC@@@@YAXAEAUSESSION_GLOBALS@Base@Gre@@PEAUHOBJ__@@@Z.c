/*
 * XREFs of ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2174
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x140023CB8 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPEAK@Z @ 0x1400358D0 (-HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPE.c)
 *     ?vFreeBlocks@PATH_CORE@@QEAAXXZ @ 0x140045470 (-vFreeBlocks@PATH_CORE@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400B7864 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??1EPATHOBJGC@@QEAA@XZ @ 0x1401F2428 (--1EPATHOBJGC@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<EPATHOBJGC>(__int64 a1, unsigned int a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  bool v6; // cc
  __int64 v7; // [rsp+48h] [rbp-19h] BYREF
  int v8; // [rsp+50h] [rbp-11h]
  char v9; // [rsp+55h] [rbp-Ch]
  _DWORD v10[2]; // [rsp+68h] [rbp+7h] BYREF
  _DWORD *v11; // [rsp+70h] [rbp+Fh]
  __int128 v12; // [rsp+78h] [rbp+17h]
  __int128 v13; // [rsp+88h] [rbp+27h]
  __int64 v14; // [rsp+98h] [rbp+37h]
  __int64 v15; // [rsp+A0h] [rbp+3Fh]
  __int64 v16; // [rsp+A8h] [rbp+47h]
  __int64 v17; // [rsp+B0h] [rbp+4Fh]

  v17 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  v4 = (_DWORD *)HmgShareLock(a1, a2, 7, 1);
  v11 = v4;
  v5 = v4;
  if ( v4 )
  {
    v6 = v4[2] <= 1u;
    v10[1] = v4[24];
    v10[0] = v4[23];
    if ( v6 )
    {
      HANDLELOCK::HANDLELOCK(&v7, (unsigned int *)a1, a2, 1);
      if ( v8 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
        if ( (v5[22] & 1) == 0 && HmgRemoveObjectImpl((unsigned int *)a1, *(_QWORD *)v5, 0, 1, 1, 7, 0LL) )
        {
          PATH_CORE::vFreeBlocks((PATH_CORE *)(v5 + 6));
          FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(v5);
          _InterlockedDecrement((volatile signed __int32 *)(a1 + 1844));
          v11 = 0LL;
        }
      }
      else
      {
        v9 = 1;
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v7);
    }
  }
  EPATHOBJGC::~EPATHOBJGC((EPATHOBJGC *)v10);
}
