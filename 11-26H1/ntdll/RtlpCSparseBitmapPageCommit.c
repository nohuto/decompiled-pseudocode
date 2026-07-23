/*
 * XREFs of RtlpCSparseBitmapPageCommit @ 0x18006E838
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x18006E0B8 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x18006E788 (RtlSparseArrayElementAllocate.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpWaitOnAddress @ 0x180069DA0 (RtlpWaitOnAddress.c)
 *     RtlpHpEnvAllocVA @ 0x18006F2D0 (RtlpHpEnvAllocVA.c)
 *     RtlpCSparseBitmapUnlock @ 0x18006FE30 (RtlpCSparseBitmapUnlock.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageCommit(__int64 a1, unsigned __int64 a2, __int64 a3, _OWORD *a4)
{
  unsigned __int64 v4; // r15
  unsigned __int8 v6; // cf
  int v10; // edi
  int v12; // [rsp+28h] [rbp-38h]
  PVOID BaseAddress[2]; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 v15; // [rsp+98h] [rbp+38h] BYREF

  v15 = a2;
  BaseAddress[0] = 0LL;
  v4 = a2 >> 15;
  v6 = _bittest64((const signed __int64 *)(a1 + 56), a2 >> 15);
  RegionSize = 0LL;
  if ( !v6 )
  {
    RegionSize = 4096LL;
    BaseAddress[0] = (PVOID)(*(_QWORD *)a1 + (v4 << 12));
    v10 = RtlpHpEnvAllocVA(BaseAddress, &RegionSize, 4u, v12, *(unsigned __int8 *)(a1 + 50), 0LL);
    if ( v10 < 0 )
      return (unsigned int)v10;
    _interlockedbittestandset64((volatile signed __int32 *)(a1 + 56), v4);
  }
  *a4 = 0LL;
  while ( 1 )
  {
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 24));
    *(_BYTE *)(a3 + 4) = -1;
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = a1;
    if ( *(_QWORD *)(a1 + 32) != a2 )
      break;
    RtlpCSparseBitmapUnlock(a3);
    RtlpWaitOnAddress(a1 + 32, &v15, 8LL, 0LL, RtlpWaitOnAddressSpinCycleCount, 0LL);
  }
  if ( !_bittest64(*(const signed __int64 **)a1, a2) )
  {
    RegionSize = 4096LL;
    BaseAddress[0] = (PVOID)(*(_QWORD *)(a1 + 8) + (a2 << 12));
    v10 = RtlpHpEnvAllocVA(BaseAddress, &RegionSize, 4u, v12, *(unsigned __int8 *)(a1 + 50), 0LL);
    if ( v10 < 0 )
    {
      RtlpCSparseBitmapUnlock(a3);
      return (unsigned int)v10;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)a1, a2);
  }
  return 0;
}
