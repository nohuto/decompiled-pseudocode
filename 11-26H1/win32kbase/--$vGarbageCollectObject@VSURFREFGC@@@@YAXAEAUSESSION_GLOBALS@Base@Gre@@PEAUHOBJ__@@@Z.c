/*
 * XREFs of ??$vGarbageCollectObject@VSURFREFGC@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F22AC
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x140023CB8 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140024D14 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1SURFREFGC@@QEAA@XZ @ 0x140054690 (--1SURFREFGC@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<SURFREFGC>(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // [rsp+20h] [rbp-50h] BYREF
  int v8; // [rsp+28h] [rbp-48h]
  char v9; // [rsp+2Dh] [rbp-43h]
  _BYTE v10[32]; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v11; // [rsp+58h] [rbp-18h]
  HSEMAPHORE v12; // [rsp+60h] [rbp-10h] BYREF

  v3 = a2;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)v10, a2);
  v11 = 0LL;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v12);
  v4 = HmgShareLock(a1, v3, 5, 1);
  v11 = (__int64 *)v4;
  if ( v4 && *(_DWORD *)(v4 + 8) <= 1u )
  {
    HANDLELOCK::HANDLELOCK(&v7, (unsigned int *)a1, v3, 1);
    if ( v8 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
      if ( (unsigned int)SURFACE::bDeleteSurface(v11, a1, 1, 0) )
      {
        v11 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 1844));
      }
    }
    else
    {
      v9 = 1;
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v7);
  }
  SURFREFGC::~SURFREFGC((SURFREFGC *)v10, v5, v6);
}
