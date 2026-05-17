/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x180094ED0
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x180016790 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800944D0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x180094B78 (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x180095160 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentFree @ 0x18009480C (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x180094FF0 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1800953E8 (RtlpHpLfhOwnerMoveSubsegment.c)
 */

char __fastcall RtlpHpLfhBucketAddSubsegment(__int64 *a1, __int64 a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r14
  char v5; // di
  __int16 v6; // ax
  volatile signed __int64 *v8; // rsi
  _QWORD *v10; // r8
  __int64 v11; // rax
  int v12; // ebp
  _QWORD *v13; // rax

  v4 = (_QWORD *)*a3;
  v5 = a4 & 0xC;
  LOBYTE(v6) = 8;
  if ( (a4 & 0xC) == 0 )
    v5 = 8;
  v8 = (volatile signed __int64 *)a2;
  if ( v4 != a3 )
  {
    v12 = a4 & 2;
    do
    {
      a2 = (__int64)v4;
      v4 = (_QWORD *)*v4;
      if ( v12 || (v6 = *(_WORD *)(a2 + 34), *(_WORD *)(a2 + 32) != v6) )
      {
        if ( (*(_BYTE *)(a2 + 51) & 1) != 0 )
        {
          LOBYTE(v6) = *(_BYTE *)(a2 + 51) & 0xFE;
          *(_BYTE *)(a2 + 51) = v6;
          if ( (v5 & 8) == 0 )
            LOBYTE(v6) = RtlpHpLfhSubsegmentReformatAsMulti(a1, a2, 1LL);
        }
      }
      else
      {
        if ( v4[1] != a2 || (v13 = *(_QWORD **)(a2 + 8), *v13 != a2) )
LABEL_16:
          __fastfail(3u);
        *v13 = v4;
        v4[1] = v13;
        LOBYTE(v6) = RtlpHpLfhSubsegmentFree(a1, a2, v8);
      }
    }
    while ( v4 != a3 );
  }
  if ( (_QWORD *)*a3 != a3 )
  {
    RtlAcquireSRWLockExclusive(v8 + 2, a2);
    v10 = (_QWORD *)*a3;
    do
    {
      if ( (_QWORD *)v10[1] != a3 )
        goto LABEL_16;
      v11 = *v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 )
        goto LABEL_16;
      *a3 = v11;
      *(_QWORD *)(v11 + 8) = a3;
      RtlpHpLfhOwnerMoveSubsegment((_DWORD)a1, (_DWORD)v8, (_DWORD)v10, 0, 0);
      v10 = (_QWORD *)*a3;
    }
    while ( (_QWORD *)*a3 != a3 );
    LOBYTE(v6) = (unsigned __int8)RtlReleaseSRWLockExclusive(v8 + 2);
  }
  return v6;
}
