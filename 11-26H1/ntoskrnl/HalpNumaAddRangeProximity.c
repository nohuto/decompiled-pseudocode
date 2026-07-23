/*
 * XREFs of HalpNumaAddRangeProximity @ 0x140593FD0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     HalpCheckSratMemoryRanges @ 0x140593E00 (HalpCheckSratMemoryRanges.c)
 *     HalpNumaQueryProximityNode @ 0x1405948B0 (HalpNumaQueryProximityNode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall HalpNumaAddRangeProximity(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // ebx
  KIRQL v6; // al
  KIRQL v7; // r15
  __int64 i; // rcx
  __int64 v9; // rbx
  int v11; // eax
  void *v12; // rax
  void *v13; // rdi
  __int64 v14; // rcx
  unsigned int v15; // r8d
  int v16; // edx
  __int64 v17; // rcx
  int v18; // [rsp+30h] [rbp-59h] BYREF
  __int64 v19; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-49h] BYREF
  __int64 v21; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v23; // [rsp+70h] [rbp-19h]
  __int64 v24; // [rsp+78h] [rbp-11h]
  unsigned __int64 *v25; // [rsp+80h] [rbp-9h]
  __int64 v26; // [rsp+88h] [rbp-1h]
  __int64 *v27; // [rsp+90h] [rbp+7h]
  __int64 v28; // [rsp+98h] [rbp+Fh]
  __int64 *v29; // [rsp+A0h] [rbp+17h]
  __int64 v30; // [rsp+A8h] [rbp+1Fh]

  LOWORD(v18) = 0;
  if ( (unsigned int)dword_140E024C8 > 5 && tlgKeywordOn((__int64)&dword_140E024C8, 0x400000000000LL) )
  {
    v19 = 0x1000000LL;
    v23 = &v19;
    v24 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E024C8, (unsigned __int8 *)&byte_140044E77, 0LL, 0LL, 3u, v22);
  }
  HalpCheckSratMemoryRanges(a1);
  if ( a3 == -1 )
  {
    return 0;
  }
  else
  {
    v5 = HalpNumaQueryProximityNode(a3, &v18);
    if ( v5 < 0 )
    {
LABEL_13:
      if ( (unsigned int)dword_140E024C8 > 5 && tlgKeywordOn((__int64)&dword_140E024C8, 0x400000000000LL) )
      {
        v18 = v5;
        v23 = (__int64 *)&v18;
        v24 = 4LL;
        v25 = &v20;
        v20 = a1;
        v27 = &v19;
        v26 = 8LL;
        v29 = &v21;
        LODWORD(v19) = a3;
        v28 = 4LL;
        v21 = 0x1000000LL;
        v30 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E024C8,
          (unsigned __int8 *)&dword_140044DB4,
          0LL,
          0LL,
          6u,
          v22);
      }
    }
    else
    {
      v6 = ExAcquireSpinLockExclusive(&HalpNumaMemoryRangeLock);
      v7 = v6;
      for ( i = 0LL; (unsigned int)i < HalpNumaMemoryRangeCount; i = (unsigned int)(i + 1) )
      {
        if ( *((_QWORD *)HalpNumaMemoryRanges + 2 * (unsigned int)i) == a1 )
        {
          v9 = *((unsigned __int16 *)HalpNumaMemoryRanges + 8 * (unsigned int)i + 4);
          ExReleaseSpinLockExclusive(&HalpNumaMemoryRangeLock, v6);
          if ( *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 24) + 4 * v9) == a3 )
            return 0;
          v5 = -1073741800;
          goto LABEL_13;
        }
      }
      v11 = HalpNumaMaxMemoryRangeCount;
      if ( HalpNumaMemoryRangeCount >= (unsigned int)HalpNumaMaxMemoryRangeCount )
      {
        HalpNumaMaxMemoryRangeCount += 5;
        v12 = (void *)HalpMmAllocCtxAlloc(i, (unsigned int)(16 * (v11 + 6)));
        v13 = v12;
        if ( !v12 )
        {
          HalpNumaMaxMemoryRangeCount -= 5;
          ExReleaseSpinLockExclusive(&HalpNumaMemoryRangeLock, v7);
          v5 = -1073741670;
          goto LABEL_13;
        }
        memmove(v12, HalpNumaMemoryRanges, 16LL * (unsigned int)HalpNumaMemoryRangeCount);
        if ( HalpNumaDynamicMemoryRanges )
          HalpMmAllocCtxFree(v14, (__int64)HalpNumaMemoryRanges);
        HalpNumaDynamicMemoryRanges = 1;
        HalpNumaMemoryRanges = v13;
      }
      v15 = HalpNumaMemoryRangeCount;
      v16 = (unsigned __int16)v18;
      *((_QWORD *)HalpNumaMemoryRanges + 2 * (unsigned int)HalpNumaMemoryRangeCount) = a1;
      *((_DWORD *)HalpNumaMemoryRanges + 4 * v15 + 2) = v16;
      HalpNumaMemoryRangeCount = v15 + 1;
      qsort(HalpNumaMemoryRanges, v15 + 1, 0x10uLL, (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
      v17 = 2LL * (unsigned int)HalpNumaMemoryRangeCount;
      *((_QWORD *)HalpNumaMemoryRanges + v17) = -1LL;
      *((_DWORD *)HalpNumaMemoryRanges + 2 * v17 + 2) = 0;
      ExReleaseSpinLockExclusive(&HalpNumaMemoryRangeLock, v7);
    }
  }
  return (unsigned int)v5;
}
