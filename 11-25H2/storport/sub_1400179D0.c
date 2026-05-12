/*
 * XREFs of sub_1400179D0 @ 0x1400179D0
 * Callers:
 *     sub_1400017E0 @ 0x1400017E0 (sub_1400017E0.c)
 *     sub_140016930 @ 0x140016930 (sub_140016930.c)
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     StorPortGetPhysicalAddress @ 0x140017460 (StorPortGetPhysicalAddress.c)
 *     sub_140018C88 @ 0x140018C88 (sub_140018C88.c)
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 *     DoScreenSave @ 0x14003A05C (DoScreenSave.c)
 *     sub_140055E44 @ 0x140055E44 (sub_140055E44.c)
 *     sub_140087860 @ 0x140087860 (sub_140087860.c)
 *     sub_14008797C @ 0x14008797C (sub_14008797C.c)
 *     sub_140087BF4 @ 0x140087BF4 (sub_140087BF4.c)
 *     sub_140088234 @ 0x140088234 (sub_140088234.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1400179D0(__int64 a1)
{
  if ( *(_DWORD *)a1 == 1094997074 )
    return *(_BYTE *)(a1 + 888) && *(_DWORD *)(a1 + 908) == 3;
  return *(_DWORD *)a1 == 1314275652 && *(_BYTE *)(a1 + 1152) && *(_DWORD *)(a1 + 1172) == 3;
}
