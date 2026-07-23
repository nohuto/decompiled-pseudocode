/*
 * XREFs of PfSnAltProfileTreeCompareByProcess @ 0x140ACADFC
 * Callers:
 *     PfSnAltProfileFindByProcess @ 0x140ACAD6C (PfSnAltProfileFindByProcess.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6E9FC (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

int __fastcall PfSnAltProfileTreeCompareByProcess(__int64 a1, __int64 a2)
{
  __int64 Buf1; // [rsp+30h] [rbp+8h] BYREF

  Buf1 = a1;
  return memcmp(&Buf1, (const void *)(a2 + 48), 8uLL);
}
