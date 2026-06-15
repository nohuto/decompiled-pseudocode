/*
 * XREFs of sub_140018504 @ 0x140018504
 * Callers:
 *     sub_1400184AC @ 0x1400184AC (sub_1400184AC.c)
 *     sub_14004CC9C @ 0x14004CC9C (sub_14004CC9C.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000FFE4 @ 0x14000FFE4 (sub_14000FFE4.c)
 *     sub_140016F18 @ 0x140016F18 (sub_140016F18.c)
 */

void __fastcall sub_140018504(__int64 a1)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  sub_140016F18((void **)(a1 + 136));
  sub_140003238((__int64 *)(a1 + 128));
  sub_140003238((__int64 *)(a1 + 120));
  sub_140003238((__int64 *)(a1 + 104));
  sub_14000FFE4((_QWORD *)(a1 + 80));
  sub_140006B48(a1 + 32);
}
