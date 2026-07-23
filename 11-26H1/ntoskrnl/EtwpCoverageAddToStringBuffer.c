/*
 * XREFs of EtwpCoverageAddToStringBuffer @ 0x140486CD8
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x140486B20 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageRecord @ 0x140B0FA48 (EtwpCoverageRecord.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x140486D18 (RtlStringCchCopyA.c)
 */

__int64 __fastcall EtwpCoverageAddToStringBuffer(__int64 a1, const char *a2, int a3)
{
  char *v4; // rcx
  size_t v6; // rdx
  __int64 v8; // r10
  __int64 v9; // r11

  v4 = *(char **)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 16) - (_QWORD)v4;
  if ( v6 < (unsigned int)(a3 + 1) )
    return 0LL;
  RtlStringCchCopyA(v4, v6, a2);
  *(_QWORD *)(v8 + 24) += v9;
  return 1LL;
}
