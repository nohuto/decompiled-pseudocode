/*
 * XREFs of RtlpHpLfhContextCompact @ 0x180061B2C
 * Callers:
 *     RtlpHpHeapCompact @ 0x1800618B0 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpLfhHeatMapQuery @ 0x180061D60 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhOwnerCompact @ 0x180061EC0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotsCompact @ 0x1800621F0 (RtlpHpLfhPrivateSlotsCompact.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

void __fastcall RtlpHpLfhContextCompact(__int64 a1, int a2)
{
  int v3; // ebp
  __int64 *v4; // r14
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  __int64 v11[4]; // [rsp+30h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 84) )
  {
    v3 = 0;
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && a2 < 0 )
      v3 = RtlpHpLfhPrivateSlotsCompact();
    v4 = (__int64 *)(a1 + 448);
    v5 = 128LL;
    do
    {
      v6 = 0LL;
      if ( (*v4 & 1) == 0 )
        v6 = *v4;
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 92) )
        {
          *(_BYTE *)(v6 + 92) = 0;
          v7 = (unsigned int)RtlpHpLfhHeatMapQuery(a1, a1 + 192, v6);
          RtlpHpLfhOwnerCompact(a1, v6, v7);
          if ( (int)v7 >= 1 )
          {
            *(_BYTE *)(v6 + 92) = 1;
            ++v3;
          }
        }
      }
      ++v4;
      --v5;
    }
    while ( v5 );
    if ( v3 )
    {
      v8 = qword_1801C6278;
      if ( !(_DWORD)qword_1801C6278 )
      {
        if ( Timer )
        {
          if ( byte_1801CA908 == (_BYTE)qword_1801C6278
            && v8 == _InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C6278, 1, qword_1801C6278) )
          {
            TpSetTimerEx(Timer, &DueTime, 0, 0x3E8u);
            if ( (RtlpHpHeapFeatures & 0x10) != 0 && (unsigned int)dword_1801C4680 > 5 )
              tlgWriteTransfer_EtwEventWriteTransfer(
                (int)&dword_1801C4680,
                (int)&unk_18019AE8B,
                v9,
                v10,
                2u,
                (__int64)v11);
          }
        }
      }
    }
  }
}
