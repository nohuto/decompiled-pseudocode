/*
 * XREFs of sub_1800CDC44 @ 0x1800CDC44
 * Callers:
 *     sub_1800CE6C0 @ 0x1800CE6C0 (sub_1800CE6C0.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_1800CDC44(void *a1)
{
  memset(a1, 0, 0x90uLL);
  return sub_18000D81C((__int64)a1 + 48, 48LL, 2LL, (__int64 (__fastcall *)(__int64))sub_1800CDC90);
}
