/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x140A4C1F8
 * Callers:
 *     CmInitServerSiloState @ 0x14085AEF4 (CmInitServerSiloState.c)
 *     CmInitSiloNamespace @ 0x140A4B958 (CmInitSiloNamespace.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     CmpCreateKeyBody @ 0x14092BC40 (CmpCreateKeyBody.c)
 *     CmpInitializeParseContext @ 0x14093E5E0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14093E860 (CmpCleanupParseContext.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rbx
  int v7; // esi
  struct _PRIVILEGE_SET *v8; // rdi
  struct _LIST_ENTRY *Flink; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  __int16 v14; // r14
  __int16 v15; // di
  __int64 v16; // rsi
  __int64 *v17; // rbx
  __int64 *v18; // rcx
  __int64 v19; // rcx
  __int16 v20; // r15
  __int16 v21; // si
  __int64 v22; // r14
  ULONG_PTR *v23; // rbx
  ULONG_PTR *v24; // rcx
  signed __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // [rsp+48h] [rbp-C0h] BYREF
  void *v28; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v30; // [rsp+68h] [rbp-A0h]
  _BYTE v31[464]; // [rsp+78h] [rbp-90h] BYREF

  memset_0(v31, 0, sizeof(v31));
  *(_OWORD *)v29 = 0LL;
  WORD1(v29[0]) = -1;
  LOBYTE(v27) = 0;
  v30 = 0LL;
  CmpInitializeParseContext((__int64)v31);
  v6 = 0LL;
  v28 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
  {
    v7 = 0;
LABEL_3:
    v8 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v30 + 1);
    goto LABEL_4;
  }
  CmpLockRegistry(v3, v2, v4, v5);
  Flink = PspSiloMonitorLock.Header.WaitListHead.Flink;
  CmpStartKcbStackForTopLayerKcb((__int64)v29, (__int64)PspSiloMonitorLock.Header.WaitListHead.Flink->Blink);
  v14 = WORD1(v29[0]);
  v15 = 0;
  if ( (v29[0] & 0x80000000LL) == 0 )
  {
    v16 = *((_QWORD *)&v30 + 1) - (_QWORD)&v29[1];
    v17 = &v29[1];
    do
    {
      if ( v15 >= 2 )
        v18 = (__int64 *)((char *)v17 + v16 - 16);
      else
        v18 = v17;
      CmpLockKcbExclusive(*v18, v11, v12, v13);
      ++v15;
      ++v17;
    }
    while ( v15 <= v14 );
  }
  v7 = CmpCreateKeyBody(
         (volatile signed __int64 *)Flink->Blink,
         0,
         (__int64)v31,
         0LL,
         3,
         (__int64)v29,
         &v28,
         (__int64)&v27);
  if ( v7 < 0 )
  {
    CmpUnlockKcbStack((__int64)v29);
    CmpUnlockRegistry(v26);
    v6 = v28;
    goto LABEL_3;
  }
  v20 = WORD1(v29[0]);
  v21 = 0;
  v8 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v30 + 1);
  if ( (v29[0] & 0x80000000LL) == 0 )
  {
    v22 = *((_QWORD *)&v30 + 1) - (_QWORD)&v29[1];
    v23 = (ULONG_PTR *)&v29[1];
    do
    {
      if ( v21 >= 2 )
        v24 = (ULONG_PTR *)((char *)v23 + v22 - 16);
      else
        v24 = v23;
      CmpUnlockKcb(*v24);
      ++v21;
      ++v23;
    }
    while ( v21 <= v20 );
  }
  CmpUnlockRegistry(v19);
  v25 = (signed __int64)v28;
  v7 = 0;
  v6 = (void *)(v25 & -(__int64)(_InterlockedCompareExchange64(
                                   (volatile signed __int64 *)(a1 + 32),
                                   (signed __int64)v28,
                                   0LL) != 0));
LABEL_4:
  if ( v8 )
    CmSiFreeMemory(v8);
  CmpCleanupParseContext((__int64)v31, 0LL, v4, v5);
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
