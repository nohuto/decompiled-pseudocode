/*
 * XREFs of EtwpFreeSoftRestartContext @ 0x140A6D2A4
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A6CBB4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     EtwpCancelMemoryPreservation @ 0x14082E13C (EtwpCancelMemoryPreservation.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeSoftRestartContext(__int64 a1)
{
  UNICODE_STRING *v1; // rdi

  v1 = *(UNICODE_STRING **)(a1 + 1352);
  if ( v1 )
  {
    EtwpCancelMemoryPreservation(a1);
    RtlFreeAnsiString(v1 + 1);
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 1352) = 0LL;
  }
}
