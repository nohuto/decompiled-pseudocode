/*
 * XREFs of VfSuspectDriversGetVerifierInformation @ 0x140B8A8B4
 * Callers:
 *     VfGetVerifierInformation @ 0x1406087F4 (VfGetVerifierInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049CD28 (VfAvlInitializeLockContext.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     VfAvlEnumerateNodes @ 0x140B73C44 (VfAvlEnumerateNodes.c)
 *     VfDriverLock @ 0x140B7A4D4 (VfDriverLock.c)
 *     VfTargetDriversGetZeroCounters @ 0x140B7B430 (VfTargetDriversGetZeroCounters.c)
 */

__int64 __fastcall VfSuspectDriversGetVerifierInformation(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        int a5)
{
  __int64 v6; // rdi
  unsigned int v7; // ebp
  int v8; // r14d
  __int64 *v9; // r15
  __int64 *v10; // r8
  size_t v11; // rbx
  __int64 *v12; // rcx
  __int64 v13; // r9
  char v14; // cl
  int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int16 v18; // r10
  void *v19; // rcx
  __int128 v21; // [rsp+38h] [rbp-60h] BYREF
  __int64 v22; // [rsp+48h] [rbp-50h]
  __int64 *v25; // [rsp+B0h] [rbp+18h]

  v6 = a1;
  *a3 = 0;
  v7 = 0;
  v8 = 0;
  VfDriverLock();
  v9 = (__int64 *)VfSuspectDriversList;
  while ( v9 != &VfSuspectDriversList )
  {
    v10 = v9;
    v6 += v7;
    v25 = v9;
    v9 = (__int64 *)*v9;
    v11 = *((unsigned __int16 *)v10 + 20);
    v7 = (v11 + (a5 != 0 ? 281 : 153)) & 0xFFFFFFF8;
    *a3 += v7;
    if ( *a3 > a2 )
    {
      v8 = -1073741820;
      break;
    }
    *(_DWORD *)v6 = v7;
    v12 = &VfRuleClasses;
    *(_DWORD *)(v6 + 4) = MmVerifierData;
    v13 = 2LL;
    do
    {
      *(_DWORD *)((char *)v12 + v6 - (_QWORD)&VfRuleClasses + 8) = *(_DWORD *)v12;
      v12 = (__int64 *)((char *)v12 + 4);
      --v13;
    }
    while ( v13 );
    v14 = VfClearanceFlag;
    *(_DWORD *)(v6 + 16) = VfTriageContext;
    *(_DWORD *)(v6 + 20) = ViVerifyAllDrivers & 1 | *(_DWORD *)(v6 + 20) & 0xFFFFFFFC | (2 * (v14 & 1));
    *(_DWORD *)(v6 + 40) = dword_140F03A84;
    *(_DWORD *)(v6 + 44) = dword_140F03A88;
    *(_DWORD *)(v6 + 92) = dword_140F03ABC;
    *(_DWORD *)(v6 + 48) = dword_140F03A8C;
    *(_DWORD *)(v6 + 52) = dword_140F03A90;
    *(_DWORD *)(v6 + 56) = dword_140F03A94;
    *(_DWORD *)(v6 + 60) = dword_140F03A98;
    *(_DWORD *)(v6 + 64) = dword_140F03A9C;
    *(_DWORD *)(v6 + 68) = dword_140F03AA0;
    *(_DWORD *)(v6 + 72) = dword_140F03AA4;
    *(_DWORD *)(v6 + 76) = dword_140F03AA8;
    *(_DWORD *)(v6 + 80) = dword_140F03AAC;
    *(_DWORD *)(v6 + 84) = *((_DWORD *)v10 + 4);
    *(_DWORD *)(v6 + 88) = *((_DWORD *)v10 + 5);
    if ( *((_DWORD *)v10 + 4) <= *((_DWORD *)v10 + 5) )
    {
      VfTargetDriversGetZeroCounters((_QWORD *)v6, a5);
    }
    else
    {
      v21 = 0LL;
      v22 = 0LL;
      VfTargetDriversGetZeroCounters((_QWORD *)v6, a5);
      VfAvlInitializeLockContext((__int64)&v21, v15 + 1);
      VfAvlEnumerateNodes(v16, (__int64)&v21);
      VfAvlCleanupLockContext((__int64)&v21, v17);
      v18 = 2;
    }
    *(_WORD *)(v6 + 24) = v11;
    *(_WORD *)(v6 + 26) = v18 + v11;
    v19 = (void *)(v6 + (a5 != 0 ? 272 : 144));
    *(_QWORD *)(v6 + 32) = v19;
    memmove(v19, (const void *)v25[6], v11);
    *(_WORD *)(*(_QWORD *)(v6 + 32) + 2 * (v11 >> 1)) = 0;
    *(_QWORD *)(v6 + 32) += a4 - a1;
  }
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v8 >= 0 )
    *(_DWORD *)v6 = 0;
  return (unsigned int)v8;
}
