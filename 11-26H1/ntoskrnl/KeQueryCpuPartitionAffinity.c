/*
 * XREFs of KeQueryCpuPartitionAffinity @ 0x1405F66F8
 * Callers:
 *     KeQuerySystemCpuPartitionAffinity @ 0x1405F6850 (KeQuerySystemCpuPartitionAffinity.c)
 *     KiAdjustProcessCpuSetsAfterCpuPartitionChange @ 0x1405F69E4 (KiAdjustProcessCpuSetsAfterCpuPartitionChange.c)
 *     NtQueryInformationCpuPartition @ 0x1407F7A30 (NtQueryInformationCpuPartition.c)
 * Callees:
 *     KeCountSetBitsGroupMask @ 0x1402007F0 (KeCountSetBitsGroupMask.c)
 *     KeComputeGroupMask @ 0x140200A08 (KeComputeGroupMask.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiAcquireCpuPartitionLock @ 0x1404D0C8C (KiAcquireCpuPartitionLock.c)
 *     KiReleaseCpuPartitionLock @ 0x1404D9D20 (KiReleaseCpuPartitionLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeQueryCpuPartitionAffinity(
        struct _KAFFINITY_EX **a1,
        void *a2,
        unsigned __int16 a3,
        unsigned __int16 *a4)
{
  __int64 v4; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // bx
  unsigned __int16 Count; // r8
  unsigned __int16 v14; // cx
  unsigned __int16 i; // dx
  unsigned __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int8 v18[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+28h] [rbp-D8h] BYREF
  struct _KAFFINITY_EX v20; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a3;
  memset_0(&v20.8, 0, sizeof(v20.8));
  *(_QWORD *)&v20.Count = 2097153LL;
  v18[0] = 0;
  v19 = 0LL;
  memset_0(&v20.8, 0, sizeof(v20.8));
  KiAcquireCpuPartitionLock((__int64)a1, v18);
  RtlpCopyAffinityEx(&v20, v20.Size, *a1);
  KiReleaseCpuPartitionLock((__int64)a1, v18[0]);
  KeComputeGroupMask(&v20.Count, &v19);
  v10 = KeCountSetBitsGroupMask((__int64)&v19, v8, v9);
  v11 = v10;
  if ( (unsigned __int16)v4 >= v10 )
  {
    memset_0(a2, 0, 16 * v4);
    Count = v20.Count;
    v14 = 0;
    for ( i = 0; v14 < Count; ++v14 )
    {
      if ( i >= v11 )
        break;
      if ( v14 < Count )
      {
        v16 = v20.Bitmap[v14];
        if ( v16 )
        {
          v17 = 2LL * i++;
          *((_WORD *)a2 + 4 * v17 + 4) = v14;
          *((_QWORD *)a2 + v17) = v16;
        }
      }
    }
    *a4 = i;
    return 0LL;
  }
  else
  {
    *a4 = v10;
    return 3221225507LL;
  }
}
