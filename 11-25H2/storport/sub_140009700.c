/*
 * XREFs of sub_140009700 @ 0x140009700
 * Callers:
 *     sub_140009524 @ 0x140009524 (sub_140009524.c)
 * Callees:
 *     sub_1400097FC @ 0x1400097FC (sub_1400097FC.c)
 *     sub_1400099A0 @ 0x1400099A0 (sub_1400099A0.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 */

__int64 __fastcall sub_140009700(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al

  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 23LL, &unk_14014C778, a1, a2);
  }
  ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
  sub_1400099A0(a1);
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4 = sub_1400097FC(*(_QWORD *)(a1 + 960), *(_QWORD *)(a1 + 8), a2, 0, (__int64)&sub_14000BC30);
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 24LL, &unk_14014C778, a1, a2, v4);
  }
  return 259LL;
}
