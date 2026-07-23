/*
 * XREFs of MiFreeVadRange @ 0x1403C67C8
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x1409EE268 (MmStoreAllocateVirtualMemory.c)
 *     MiFreeVirtualMemory @ 0x140A05050 (MiFreeVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140AB9EA0 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiDeletePartialVad @ 0x1403C6AC4 (MiDeletePartialVad.c)
 *     MiConfirmQuotaAmount @ 0x1403C6C30 (MiConfirmQuotaAmount.c)
 *     MiConfirmQuotaProcess @ 0x1403C6C74 (MiConfirmQuotaProcess.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C6CB0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C6FA0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiCanDeleteEnclave @ 0x140704A74 (MiCanDeleteEnclave.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiAllocateVad @ 0x140A02E80 (MiAllocateVad.c)
 *     PerfInfoLogVirtualFree @ 0x140A06DC0 (PerfInfoLogVirtualFree.c)
 *     MiPrepareVadDelete @ 0x140A941FC (MiPrepareVadDelete.c)
 *     MiLockNestedVad @ 0x140A9DE10 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x140A9F940 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeVadRange(
        ULONG_PTR a1,
        int a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter4,
        int a6,
        char *P)
{
  int v8; // ebx
  int v9; // ebp
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r15
  __int64 result; // rax
  char *v14; // rbx
  ULONG_PTR v15; // rbp
  unsigned __int64 i; // rcx
  __int64 v17; // rbx
  int v18; // edx
  __int64 v19; // rdx
  int v20; // r14d
  _BYTE *v21; // r14
  int v22; // r12d
  int v23; // [rsp+60h] [rbp+8h] BYREF

  v8 = a4;
  v23 = 0;
  v9 = a3;
  if ( P )
    *(_QWORD *)P = 0LL;
  v11 = (a4 << 12) | 0xFFF;
  v12 = a3 << 12;
  if ( (*(_DWORD *)(a1 + 48) & 0x880000) != 0x880000 )
    goto LABEL_45;
  if ( a3 != (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
    || a4 != (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 3221225496LL;
  }
  result = MiCanDeleteEnclave(a1);
  if ( (int)result >= 0 )
  {
LABEL_45:
    result = MiPrepareVadDelete(a1, a2, v9, v8, (__int64)&v23);
    if ( (int)result >= 0 )
    {
      v14 = 0LL;
      v15 = BugCheckParameter4;
      P = 0LL;
      if ( !v23 )
      {
        if ( a6 )
        {
          for ( i = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
          {
            if ( *(char *)(i + 8) < 0 )
              break;
          }
          v17 = *(_QWORD *)(i + 24);
          *(_QWORD *)(i + 24) = 0LL;
          MiLockNestedVad(v17);
          *(_DWORD *)(v17 + 24) = v12 >> 12;
          *(_BYTE *)(v17 + 32) = v12 >> 44;
          *(_DWORD *)(v17 + 28) = v11 >> 12;
          *(_BYTE *)(v17 + 33) = v11 >> 44;
        }
        MiDeleteVad(a1);
LABEL_17:
        if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
          PerfInfoLogVirtualFree(v12, v11 - v12 + 1, v15);
        return 0LL;
      }
      if ( (*(_DWORD *)(BugCheckParameter4 + 500) & 0x20) != 0 )
        return 3221225738LL;
      if ( MiLocateLockedVadEvent(a1, 2LL) )
        return 3221225541LL;
      if ( a6 )
      {
        result = MiAllocateVad((unsigned int)&P, v15, v12, v11, v18);
        if ( (int)result < 0 )
          return result;
        v14 = P;
        v21 = P + 68;
        if ( P != (char *)-68LL )
        {
          MiConfirmQuotaProcess((ULONG_PTR)(P + 68), v15);
          MiConfirmQuotaAmount((ULONG_PTR)v21, 0LL);
        }
        v22 = PsChargeProcessNonPagedPoolQuota(v15, 72LL);
        if ( v22 < 0 )
        {
          ExFreePoolWithTag(v14, 0);
          return (unsigned int)v22;
        }
        if ( v21 )
          *v21 = *v21 & 0xF | 0x40;
        MiLockNestedVad(v14);
      }
      v20 = MiDeletePartialVad(a1, (__int64)v14);
      if ( v20 >= 0 )
        goto LABEL_17;
      if ( v14 )
      {
        MiUnlockNestedVad(v14, v19);
        if ( v14 != (char *)-68LL )
        {
          MiConfirmQuotaProcess((ULONG_PTR)(v14 + 68), v15);
          MiConfirmQuotaAmount((ULONG_PTR)(v14 + 68), 0x48uLL);
        }
        PsReturnProcessNonPagedPoolQuota(v15, 0x48uLL);
        if ( v14 != (char *)-68LL )
          v14[68] = 0;
        ExFreePoolWithTag(v14, 0);
      }
      return (unsigned int)v20;
    }
  }
  return result;
}
