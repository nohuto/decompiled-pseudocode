/*
 * XREFs of PfSnAltProfileTreeCompareByProcess @ 0x140A43C88
 * Callers:
 *     PfSnAltProfileFindByProcess @ 0x140A43BF8 (PfSnAltProfileFindByProcess.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6B900 (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

int __fastcall PfSnAltProfileTreeCompareByProcess(__int64 a1, __int64 a2)
{
  __int64 Buf1; // [rsp+30h] [rbp+8h] BYREF

  Buf1 = a1;
  return memcmp(&Buf1, (const void *)(a2 + 48), 8uLL);
}
