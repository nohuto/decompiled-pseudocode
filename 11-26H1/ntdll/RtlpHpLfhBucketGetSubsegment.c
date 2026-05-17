/*
 * XREFs of RtlpHpLfhBucketGetSubsegment @ 0x180095160
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x180094DC0 (RtlpHpLfhSubsegmentReformatAsSingle.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180094ED0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1800953E8 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x1800955E0 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180095A30 (RtlpHpLfhOwnerRunMaintenance.c)
 */

__int64 __fastcall RtlpHpLfhBucketGetSubsegment(__int64 *a1, __int64 a2, int a3)
{
  _QWORD *v3; // rsi
  __int64 Subsegment; // rax
  __int64 v8; // r14
  _QWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF

  v3 = (_QWORD *)(a2 + 24);
  if ( (_QWORD *)*v3 == v3 && !*(_QWORD *)(a2 + 8) )
    return 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 16), a2);
  while ( 1 )
  {
    Subsegment = RtlpHpLfhOwnerGetSubsegment(a1, a2);
    v8 = Subsegment;
    if ( Subsegment )
      break;
    v10[1] = v10;
    v10[0] = v10;
    RtlpHpLfhOwnerRunMaintenance(a1, a2, v10, 0LL);
    if ( (_QWORD *)*v3 == v3 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 16));
      return v8;
    }
  }
  RtlpHpLfhOwnerMoveSubsegment((_DWORD)a1, a2, Subsegment, 3, 0);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 16));
  if ( a3 != 2 && (a3 < 1 || *(_BYTE *)(v8 + 39) <= 1u) )
    return v8;
  if ( (int)RtlpHpLfhSubsegmentReformatAsSingle((unsigned __int64)a1, (unsigned __int8 *)v8) >= 0 )
  {
    if ( a3 == 2 )
      *(_BYTE *)(v8 + 51) |= 1u;
    return v8;
  }
  if ( a3 != 2 )
    return v8;
  v11[1] = v8;
  *(_QWORD *)v8 = v11;
  v11[0] = v8;
  *(_QWORD *)(v8 + 8) = v11;
  RtlpHpLfhBucketAddSubsegment(a1, a2, v11, 0);
  return 0LL;
}
