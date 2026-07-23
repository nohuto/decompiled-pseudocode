/*
 * XREFs of PspDereferenceQuota @ 0x140AF422C
 * Callers:
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     PspAssignProcessQuotaBlock @ 0x140ABA378 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     PspDereferenceQuotaBlock @ 0x1408FFC10 (PspDereferenceQuotaBlock.c)
 */

void __fastcall PspDereferenceQuota(__int64 a1)
{
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 516));
  PspDereferenceQuotaBlock((char *)a1);
}
