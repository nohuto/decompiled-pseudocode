/*
 * XREFs of sub_1400E63C4 @ 0x1400E63C4
 * Callers:
 *     sub_1400CAFB4 @ 0x1400CAFB4 (sub_1400CAFB4.c)
 *     sub_1400E2990 @ 0x1400E2990 (sub_1400E2990.c)
 *     sub_14018D030 @ 0x14018D030 (sub_14018D030.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400DF7EC @ 0x1400DF7EC (sub_1400DF7EC.c)
 *     NaptrDnsRecordConvert @ 0x1400DF8C8 (NaptrDnsRecordConvert.c)
 *     sub_1400E05A4 @ 0x1400E05A4 (sub_1400E05A4.c)
 *     sub_1400E61F4 @ 0x1400E61F4 (sub_1400E61F4.c)
 *     sub_1400E6350 @ 0x1400E6350 (sub_1400E6350.c)
 *     sub_1400E74D0 @ 0x1400E74D0 (sub_1400E74D0.c)
 *     sub_1400F2B50 @ 0x1400F2B50 (sub_1400F2B50.c)
 *     sub_1400F2E10 @ 0x1400F2E10 (sub_1400F2E10.c)
 */

int __fastcall sub_1400E63C4(__int64 a1, char a2)
{
  int v4; // eax
  __int64 v5; // rdx
  unsigned __int16 v6; // ax
  unsigned __int16 i; // di
  unsigned __int16 v8; // di
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 j; // di
  __int64 v12; // rdx

  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1272) + 40LL) + 192LL) )
  {
    KeCancelTimer((PKTIMER)(*(_QWORD *)(*(_QWORD *)(a1 + 1272) + 40LL) + 128LL));
    KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*(_QWORD *)(a1 + 1272) + 40LL) + 64LL));
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1272) + 40LL) + 192LL), 0, 1);
  }
  sub_1400E61F4(a1, a2 == 0);
  v4 = *(_DWORD *)(a1 + 572);
  if ( v4 == 1 )
  {
    sub_1400E6350(a1);
    if ( *(_QWORD *)(a1 + 728) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 948), 1u);
      sub_1400F2E10(a1);
      v6 = *(_WORD *)(a1 + 20);
      for ( i = 0; i < v6; ++i )
      {
        NaptrDnsRecordConvert(*(_QWORD *)(a1 + 728) + 192LL * i);
        v6 = *(_WORD *)(a1 + 20);
      }
      v8 = 0;
      if ( v6 )
      {
        do
        {
          LOBYTE(v5) = 2;
          sub_1400E74D0(*(_QWORD *)(a1 + 728) + 192LL * v8++, v5, 3221226048LL);
        }
        while ( v8 < *(_WORD *)(a1 + 20) );
      }
      sub_1400F2B50(a1);
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 948), 1u);
      for ( j = 0; j < *(_WORD *)(a1 + 20); ++j )
        sub_1400DF7EC(*(_QWORD *)(a1 + 728) + 192LL * j, v9, v10);
    }
    *(_WORD *)(a1 + 22) = 0;
  }
  else if ( v4 == 2 )
  {
    sub_1400E05A4((_QWORD *)a1, 0);
  }
  NaptrDnsRecordConvert(*(_QWORD *)(a1 + 712));
  LOBYTE(v12) = 2;
  sub_1400E74D0(*(_QWORD *)(a1 + 712), v12, 3221226048LL);
  return sub_1400A870C(
           a1,
           1,
           4,
           (__int64)L"Controller operations stopped",
           (void *)&dword_140149108,
           0,
           &dword_140149108,
           0,
           &dword_140149108,
           0,
           &dword_140149108,
           0,
           (void *)&dword_140149108,
           0,
           (void *)&dword_140149108,
           0,
           (void *)&dword_140149108,
           0,
           (void *)&dword_140149108,
           0);
}
