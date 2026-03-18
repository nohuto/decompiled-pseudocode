/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x140A31298
 * Callers:
 *     CmInitServerSiloState @ 0x140854BE4 (CmInitServerSiloState.c)
 *     CmInitSiloNamespace @ 0x140A309F8 (CmInitSiloNamespace.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbExclusive @ 0x1408CEB50 (CmpLockKcbExclusive.c)
 *     CmpCreateKeyBody @ 0x1408FBCB0 (CmpCreateKeyBody.c)
 *     CmpInitializeParseContext @ 0x14097C5D0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14097C850 (CmpCleanupParseContext.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rbx
  int v4; // esi
  struct _PRIVILEGE_SET *v5; // rdi
  struct _LIST_ENTRY *Flink; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int16 v11; // r14
  __int16 v12; // di
  __int64 v13; // rsi
  __int64 *v14; // rbx
  __int64 *v15; // rcx
  __int64 v16; // rcx
  __int16 v17; // r15
  __int16 v18; // si
  __int64 v19; // r14
  ULONG_PTR *v20; // rbx
  ULONG_PTR *v21; // rcx
  signed __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  void *v25; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+68h] [rbp-A0h]
  _BYTE v28[464]; // [rsp+78h] [rbp-90h] BYREF

  memset_0(v28, 0, sizeof(v28));
  *(_OWORD *)v26 = 0LL;
  WORD1(v26[0]) = -1;
  LOBYTE(v24) = 0;
  v27 = 0LL;
  CmpInitializeParseContext((__int64)v28);
  v3 = 0LL;
  v25 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
  {
    v4 = 0;
LABEL_3:
    v5 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v27 + 1);
    goto LABEL_4;
  }
  CmpLockRegistry(v2);
  Flink = PspSiloMonitorLock.Header.WaitListHead.Flink;
  CmpStartKcbStackForTopLayerKcb((__int64)v26, (__int64)PspSiloMonitorLock.Header.WaitListHead.Flink->Blink);
  v11 = WORD1(v26[0]);
  v12 = 0;
  if ( (v26[0] & 0x80000000LL) == 0 )
  {
    v13 = *((_QWORD *)&v27 + 1) - (_QWORD)&v26[1];
    v14 = &v26[1];
    do
    {
      if ( v12 >= 2 )
        v15 = (__int64 *)((char *)v14 + v13 - 16);
      else
        v15 = v14;
      CmpLockKcbExclusive(*v15, v8, v9, v10);
      ++v12;
      ++v14;
    }
    while ( v12 <= v11 );
  }
  v4 = CmpCreateKeyBody(
         (volatile signed __int64 *)Flink->Blink,
         0,
         (__int64)v28,
         0LL,
         3,
         (__int64)v26,
         &v25,
         (__int64)&v24);
  if ( v4 < 0 )
  {
    CmpUnlockKcbStack((__int64)v26);
    CmpUnlockRegistry(v23);
    v3 = v25;
    goto LABEL_3;
  }
  v17 = WORD1(v26[0]);
  v18 = 0;
  v5 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v27 + 1);
  if ( (v26[0] & 0x80000000LL) == 0 )
  {
    v19 = *((_QWORD *)&v27 + 1) - (_QWORD)&v26[1];
    v20 = (ULONG_PTR *)&v26[1];
    do
    {
      if ( v18 >= 2 )
        v21 = (ULONG_PTR *)((char *)v20 + v19 - 16);
      else
        v21 = v20;
      CmpUnlockKcb(*v21);
      ++v18;
      ++v20;
    }
    while ( v18 <= v17 );
  }
  CmpUnlockRegistry(v16);
  v22 = (signed __int64)v25;
  v4 = 0;
  v3 = (void *)(v22 & -(__int64)(_InterlockedCompareExchange64(
                                   (volatile signed __int64 *)(a1 + 32),
                                   (signed __int64)v25,
                                   0LL) != 0));
LABEL_4:
  if ( v5 )
    CmSiFreeMemory(v5);
  CmpCleanupParseContext((__int64)v28, 0);
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v4;
}
