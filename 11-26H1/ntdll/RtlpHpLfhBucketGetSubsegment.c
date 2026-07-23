/*
 * XREFs of RtlpHpLfhBucketGetSubsegment @ 0x180062B00
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x180062764 (RtlpHpLfhSubsegmentReformatAsSingle.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180062870 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180062D88 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x180062F80 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1800633D0 (RtlpHpLfhOwnerRunMaintenance.c)
 */

__int64 __fastcall RtlpHpLfhBucketGetSubsegment(unsigned __int64 a1, _RTL_SRWLOCK *a2, int a3)
{
  unsigned __int64 *v3; // rsi
  __int64 Subsegment; // rax
  __int64 v8; // r14
  _QWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF

  v3 = (unsigned __int64 *)&a2[3];
  if ( (unsigned __int64 *)*v3 == v3 && !a2[1].Value )
    return 0LL;
  RtlAcquireSRWLockExclusive(a2 + 2);
  while ( 1 )
  {
    Subsegment = RtlpHpLfhOwnerGetSubsegment(a1, a2);
    v8 = Subsegment;
    if ( Subsegment )
      break;
    v10[1] = v10;
    v10[0] = v10;
    RtlpHpLfhOwnerRunMaintenance(a1, a2, v10, 0LL);
    if ( (unsigned __int64 *)*v3 == v3 )
    {
      RtlReleaseSRWLockExclusive(a2 + 2);
      return v8;
    }
  }
  RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)a2, Subsegment, 3, 0);
  RtlReleaseSRWLockExclusive(a2 + 2);
  if ( a3 != 2 && (a3 < 1 || *(_BYTE *)(v8 + 39) <= 1u) )
    return v8;
  if ( (int)RtlpHpLfhSubsegmentReformatAsSingle(a1, (unsigned __int8 *)v8) >= 0 )
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
