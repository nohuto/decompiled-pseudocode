/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x180062870
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x180061EC0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x18006251C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x180062B00 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800736A0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x180062990 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180062D88 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentFree @ 0x180073998 (RtlpHpLfhSubsegmentFree.c)
 */

void __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, _RTL_SRWLOCK *a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r14
  char v5; // di
  _QWORD *v9; // r8
  __int64 v10; // rax
  int v11; // ebp
  _QWORD *v12; // rdx
  _QWORD *v13; // rax

  v4 = (_QWORD *)*a3;
  v5 = a4 & 0xC;
  if ( (a4 & 0xC) == 0 )
    v5 = 8;
  if ( v4 != a3 )
  {
    v11 = a4 & 2;
    do
    {
      v12 = v4;
      v4 = (_QWORD *)*v4;
      if ( v11 || *((_WORD *)v12 + 16) != *((_WORD *)v12 + 17) )
      {
        if ( (*((_BYTE *)v12 + 51) & 1) != 0 )
        {
          *((_BYTE *)v12 + 51) &= ~1u;
          if ( (v5 & 8) == 0 )
            RtlpHpLfhSubsegmentReformatAsMulti(a1, v12, 1LL);
        }
      }
      else
      {
        if ( (_QWORD *)v4[1] != v12 || (v13 = (_QWORD *)v12[1], (_QWORD *)*v13 != v12) )
LABEL_16:
          __fastfail(3u);
        *v13 = v4;
        v4[1] = v13;
        RtlpHpLfhSubsegmentFree(a1, v12, a2);
      }
    }
    while ( v4 != a3 );
  }
  if ( (_QWORD *)*a3 != a3 )
  {
    RtlAcquireSRWLockExclusive(a2 + 2);
    v9 = (_QWORD *)*a3;
    do
    {
      if ( (_QWORD *)v9[1] != a3 )
        goto LABEL_16;
      v10 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_16;
      *a3 = v10;
      *(_QWORD *)(v10 + 8) = a3;
      RtlpHpLfhOwnerMoveSubsegment(a1, (_DWORD)a2, (_DWORD)v9, 0, 0);
      v9 = (_QWORD *)*a3;
    }
    while ( (_QWORD *)*a3 != a3 );
    RtlReleaseSRWLockExclusive(a2 + 2);
  }
}
