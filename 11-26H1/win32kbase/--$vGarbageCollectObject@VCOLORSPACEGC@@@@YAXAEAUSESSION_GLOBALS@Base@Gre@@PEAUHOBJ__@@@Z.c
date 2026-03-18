/*
 * XREFs of ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F1F78
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x140023CB8 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     PushThreadGuardedObject @ 0x140030350 (PushThreadGuardedObject.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteColorSpace@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401F260C (-bDeleteColorSpace@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall vGarbageCollectObject<COLORSPACEGC>(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  int v6; // [rsp+28h] [rbp-38h]
  char v7; // [rsp+2Dh] [rbp-33h]
  _OWORD v8[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp-8h]

  memset(v8, 0, sizeof(v8));
  PushThreadGuardedObject(
    v8,
    (__int64)v8,
    (__int64)UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic);
  v9 = 0LL;
  v4 = HmgShareLock(a1, a2, 9, 1);
  v9 = (_QWORD *)v4;
  if ( v4 && *(_DWORD *)(v4 + 8) <= 1u )
  {
    HANDLELOCK::HANDLELOCK(&v5, (unsigned int *)a1, a2, 1);
    if ( v6 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
      if ( (unsigned int)bDeleteColorSpace(a1, *v9, 1LL) )
      {
        v9 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 1844));
      }
    }
    else
    {
      v7 = 1;
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v5);
  }
  SURFREF::~SURFREF((unsigned int **)v8);
}
