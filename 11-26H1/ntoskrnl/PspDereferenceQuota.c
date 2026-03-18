/*
 * XREFs of PspDereferenceQuota @ 0x140AF15EC
 * Callers:
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     PspAssignProcessQuotaBlock @ 0x140AB8F60 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     PspDereferenceQuotaBlock @ 0x140924100 (PspDereferenceQuotaBlock.c)
 */

void __fastcall PspDereferenceQuota(__int64 a1)
{
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 516));
  PspDereferenceQuotaBlock((char *)a1);
}
