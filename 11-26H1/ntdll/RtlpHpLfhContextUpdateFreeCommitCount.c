/*
 * XREFs of RtlpHpLfhContextUpdateFreeCommitCount @ 0x180063338
 * Callers:
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x180062764 (RtlpHpLfhSubsegmentReformatAsSingle.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x180062990 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentFree @ 0x180073998 (RtlpHpLfhSubsegmentFree.c)
 * Callees:
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 */

char __fastcall RtlpHpLfhContextUpdateFreeCommitCount(__int64 a1, __int64 a2, signed __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  int v5; // ett

  v3 = *(__int16 *)(a1 + 74);
  _InterlockedAdd64((volatile signed __int64 *)(v3 + a1 + 24), a3);
  if ( a3 > 0 )
  {
    v4 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
    LOBYTE(v3) = *(_BYTE *)(v4 + a1 + 92);
    if ( !(_BYTE)v3 )
    {
      *(_BYTE *)(v4 + a1 + 92) = 1;
      LOBYTE(v3) = qword_1801C6278;
      if ( !(_DWORD)qword_1801C6278 )
      {
        if ( Timer )
        {
          if ( byte_1801CA908 == (_BYTE)qword_1801C6278 )
          {
            v5 = qword_1801C6278;
            LODWORD(v3) = _InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C6278, 1, qword_1801C6278);
            if ( v5 == (_DWORD)v3 )
            {
              LOBYTE(v3) = TpSetTimerEx(Timer, &DueTime, 0, 0x3E8u);
              if ( (RtlpHpHeapFeatures & 0x10) != 0 )
                LOBYTE(v3) = RtlpHpTlLogGCScheduled();
            }
          }
        }
      }
    }
  }
  return v3;
}
