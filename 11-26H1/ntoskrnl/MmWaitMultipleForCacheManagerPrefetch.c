/*
 * XREFs of MmWaitMultipleForCacheManagerPrefetch @ 0x14039867C
 * Callers:
 *     CcAsyncReadWorker @ 0x14038A130 (CcAsyncReadWorker.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1403A1408 (MmWaitForCacheManagerPrefetch.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmWaitMultipleForCacheManagerPrefetch(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v5; // esi
  __int64 v7; // r9
  __int64 PoolMm; // rax
  _OWORD *v9; // rdi
  struct _KWAIT_BLOCK *WaitBlockArray; // r14
  __int64 v11; // rbx
  __int64 *v12; // rcx
  __int64 *v13; // r9
  __int64 **v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v18; // r10
  __int64 ***v19; // rax
  _OWORD P[2]; // [rsp+40h] [rbp-118h] BYREF
  struct _KWAIT_BLOCK v21; // [rsp+60h] [rbp-F8h] BYREF

  v3 = a2 + 1;
  if ( !a3 )
    v3 = a2;
  v5 = a2;
  memset(P, 0, sizeof(P));
  if ( a2 > 3 )
  {
    v7 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
    LODWORD(v7) = v7 | 0x80000000;
    PoolMm = ExAllocatePoolMm(64LL, 56LL * (unsigned int)v3, 1633118541LL, v7);
    v9 = (_OWORD *)PoolMm;
    if ( PoolMm )
    {
      WaitBlockArray = (struct _KWAIT_BLOCK *)(PoolMm + 8 * v3);
      goto LABEL_7;
    }
    v5 = 3;
  }
  WaitBlockArray = &v21;
  v9 = P;
LABEL_7:
  while ( 1 )
  {
    v11 = 0LL;
LABEL_8:
    if ( (unsigned int)v11 < v5 )
      break;
    if ( a3 )
    {
      *((_QWORD *)v9 + v11) = a3;
      LODWORD(v11) = v11 + 1;
    }
    if ( KeWaitForMultipleObjects(v11, (PVOID *)v9, WaitAny, WrVirtualMemory, 0, 0, 0LL, WaitBlockArray) == (_DWORD)v11 - 1
      && a3 )
    {
      if ( v9 != P )
        ExFreePoolWithTag(v9, 0);
      return (unsigned int)(v3 - 1);
    }
  }
  v12 = *(__int64 **)(a1 + 8 * v11);
  do
  {
    v13 = (__int64 *)*v12;
    while ( *((_DWORD *)v12 + 54) != *((_DWORD *)v12 + 53) )
    {
      v14 = (__int64 **)(v12 + 28);
      v15 = v12[28];
      if ( !*(_DWORD *)(v15 + 36) )
      {
        v16 = v15 + 32;
        if ( v16 )
        {
          *((_QWORD *)v9 + v11) = v16;
          v11 = (unsigned int)(v11 + 1);
          goto LABEL_8;
        }
        break;
      }
      v18 = **v14;
      if ( (__int64 **)(*v14)[1] != v14
        || *(__int64 **)(v18 + 8) != *v14
        || (*v14 = (__int64 *)v18, *(_QWORD *)(v18 + 8) = v14, v19 = (__int64 ***)v12[29], *v19 != v14) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v15 = v14;
      *(_QWORD *)(v15 + 8) = v19;
      *v19 = (__int64 **)v15;
      v12[29] = v15;
      ++*((_DWORD *)v12 + 54);
    }
    v12 = v13;
  }
  while ( v13 );
  MmWaitForCacheManagerPrefetch(*(PVOID *)(a1 + 8 * v11));
  if ( v9 != P )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v11;
}
