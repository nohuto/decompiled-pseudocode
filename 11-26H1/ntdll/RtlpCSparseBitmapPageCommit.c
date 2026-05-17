/*
 * XREFs of RtlpCSparseBitmapPageCommit @ 0x18008B400
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x18008AC80 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x18008B350 (RtlSparseArrayElementAllocate.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpWaitOnAddress @ 0x18007B580 (RtlpWaitOnAddress.c)
 *     RtlpHpEnvAllocVA @ 0x18008BE90 (RtlpHpEnvAllocVA.c)
 *     RtlpCSparseBitmapUnlock @ 0x18008C9F4 (RtlpCSparseBitmapUnlock.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageCommit(__int64 a1, unsigned __int64 a2, __int64 a3, _OWORD *a4)
{
  unsigned __int64 v4; // r15
  unsigned __int8 v6; // cf
  int v10; // edi
  _QWORD v12[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v13; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 v14; // [rsp+98h] [rbp+38h] BYREF

  v14 = a2;
  v12[0] = 0LL;
  v4 = a2 >> 15;
  v6 = _bittest64((const signed __int64 *)(a1 + 56), a2 >> 15);
  v13 = 0LL;
  if ( !v6 )
  {
    v13 = 4096LL;
    v12[0] = *(_QWORD *)a1 + (v4 << 12);
    v10 = RtlpHpEnvAllocVA((unsigned int)v12, (unsigned int)&v13, 0, 1073745920, 4);
    if ( v10 < 0 )
      return (unsigned int)v10;
    _interlockedbittestandset64((volatile signed __int32 *)(a1 + 56), v4);
  }
  *a4 = 0LL;
  while ( 1 )
  {
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 24));
    *(_BYTE *)(a3 + 4) = -1;
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = a1;
    if ( *(_QWORD *)(a1 + 32) != a2 )
      break;
    RtlpCSparseBitmapUnlock(a3);
    RtlpWaitOnAddress(a1 + 32, &v14, 8LL, 0LL, RtlpWaitOnAddressSpinCycleCount, 0LL);
  }
  if ( !_bittest64(*(const signed __int64 **)a1, a2) )
  {
    v13 = 4096LL;
    v12[0] = *(_QWORD *)(a1 + 8) + (a2 << 12);
    v10 = RtlpHpEnvAllocVA((unsigned int)v12, (unsigned int)&v13, 0, 1073745920, 4);
    if ( v10 < 0 )
    {
      RtlpCSparseBitmapUnlock(a3);
      return (unsigned int)v10;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)a1, a2);
  }
  return 0;
}
