/*
 * XREFs of RtlpHpLfhContextUpdateFreeCommitCount @ 0x180095998
 * Callers:
 *     RtlpHpLfhSubsegmentFree @ 0x18009480C (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x180094DC0 (RtlpHpLfhSubsegmentReformatAsSingle.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x180094FF0 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 * Callees:
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
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
      LOBYTE(v3) = qword_1801C7278;
      if ( !(_DWORD)qword_1801C7278 )
      {
        if ( qword_1801C7268 )
        {
          if ( byte_1801CB8C8 == (_BYTE)qword_1801C7278 )
          {
            v5 = qword_1801C7278;
            LODWORD(v3) = _InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C7278, 1, qword_1801C7278);
            if ( v5 == (_DWORD)v3 )
            {
              LOBYTE(v3) = TpSetTimerEx(qword_1801C7268, (__int64)&qword_1801C7270, 0, 1000);
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
