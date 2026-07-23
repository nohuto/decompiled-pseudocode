/*
 * XREFs of EtwpCoverageValidateCP @ 0x140486D7C
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x140486B20 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x1406CA5DC (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageCheckCP @ 0x14082FCE4 (EtwpCoverageCheckCP.c)
 *     EtwpCoverageResetCP @ 0x1408301A0 (EtwpCoverageResetCP.c)
 *     EtwpCoverageRecord @ 0x140B0FA48 (EtwpCoverageRecord.c)
 * Callees:
 *     TelemetryCoverageValidateName @ 0x140486DF8 (TelemetryCoverageValidateName.c)
 */

__int64 __fastcall EtwpCoverageValidateCP(char **a1, _DWORD *a2)
{
  int v4; // r8d
  char *v5; // r11
  char i; // al
  int v7; // edx
  int v8; // r11d

  v4 = -2128831035;
  v5 = *a1;
  for ( i = **a1; i; i = *v5 )
  {
    v4 = i + 16777619 * v4;
    ++v5;
  }
  v7 = 1;
  if ( v4 )
    v7 = v4;
  if ( v7 == *((_DWORD *)a1 + 2) && (unsigned int)TelemetryCoverageValidateName() )
  {
    *a2 = v8;
    return 1LL;
  }
  else
  {
    *((_DWORD *)a1 + 3) = -1;
    return 0LL;
  }
}
