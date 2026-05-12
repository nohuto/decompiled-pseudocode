/*
 * XREFs of sub_14017B104 @ 0x14017B104
 * Callers:
 *     StorPortInitialize @ 0x14006FFB0 (StorPortInitialize.c)
 * Callees:
 *     sub_140075034 @ 0x140075034 (sub_140075034.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 (__fastcall *__fastcall sub_14017B104(KSPIN_LOCK *a1))(__int64 a1)
{
  memset_0(a1, 0, 0x70uLL);
  *(_DWORD *)a1 = 1146246738;
  a1[13] = (KSPIN_LOCK)(a1 + 12);
  a1[12] = (KSPIN_LOCK)(a1 + 12);
  a1[8] = (KSPIN_LOCK)(a1 + 7);
  a1[7] = (KSPIN_LOCK)(a1 + 7);
  KeInitializeSpinLock(a1 + 10);
  return sub_140075034();
}
