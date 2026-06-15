/*
 * XREFs of sub_140006B48 @ 0x140006B48
 * Callers:
 *     sub_140005C38 @ 0x140005C38 (sub_140005C38.c)
 *     sub_140018504 @ 0x140018504 (sub_140018504.c)
 *     sub_14001D308 @ 0x14001D308 (sub_14001D308.c)
 *     sub_14001D774 @ 0x14001D774 (sub_14001D774.c)
 *     sub_140027570 @ 0x140027570 (sub_140027570.c)
 *     sub_14002B664 @ 0x14002B664 (sub_14002B664.c)
 *     sub_1400344E0 @ 0x1400344E0 (sub_1400344E0.c)
 *     sub_1400345A8 @ 0x1400345A8 (sub_1400345A8.c)
 *     sub_140044F9C @ 0x140044F9C (sub_140044F9C.c)
 *     sub_14004CCE0 @ 0x14004CCE0 (sub_14004CCE0.c)
 *     sub_14005DDE4 @ 0x14005DDE4 (sub_14005DDE4.c)
 *     sub_14005DFA8 @ 0x14005DFA8 (sub_14005DFA8.c)
 *     sub_14006F158 @ 0x14006F158 (sub_14006F158.c)
 *     sub_14007054C @ 0x14007054C (sub_14007054C.c)
 *     sub_140074904 @ 0x140074904 (sub_140074904.c)
 *     sub_140080AC4 @ 0x140080AC4 (sub_140080AC4.c)
 *     sub_140096B18 @ 0x140096B18 (sub_140096B18.c)
 *     sub_140096B40 @ 0x140096B40 (sub_140096B40.c)
 *     sub_140096B68 @ 0x140096B68 (sub_140096B68.c)
 *     sub_140096B90 @ 0x140096B90 (sub_140096B90.c)
 *     sub_140096BB8 @ 0x140096BB8 (sub_140096BB8.c)
 *     sub_140096BE0 @ 0x140096BE0 (sub_140096BE0.c)
 *     sub_140096C08 @ 0x140096C08 (sub_140096C08.c)
 *     sub_1400A64B8 @ 0x1400A64B8 (sub_1400A64B8.c)
 *     sub_1400A64E0 @ 0x1400A64E0 (sub_1400A64E0.c)
 *     sub_1400B00A7 @ 0x1400B00A7 (sub_1400B00A7.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140006B48(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    *(_BYTE *)(a1 + 40) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)a1);
  }
}
