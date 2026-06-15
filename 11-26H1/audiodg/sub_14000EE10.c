/*
 * XREFs of sub_14000EE10 @ 0x14000EE10
 * Callers:
 *     sub_140009CB0 @ 0x140009CB0 (sub_140009CB0.c)
 *     sub_14000E8B8 @ 0x14000E8B8 (sub_14000E8B8.c)
 *     sub_1400122B4 @ 0x1400122B4 (sub_1400122B4.c)
 *     sub_140015F50 @ 0x140015F50 (sub_140015F50.c)
 *     sub_140016980 @ 0x140016980 (sub_140016980.c)
 *     sub_140060370 @ 0x140060370 (sub_140060370.c)
 *     sub_14006083C @ 0x14006083C (sub_14006083C.c)
 *     sub_14008BBF0 @ 0x14008BBF0 (sub_14008BBF0.c)
 *     sub_14008C6C4 @ 0x14008C6C4 (sub_14008C6C4.c)
 *     sub_140093730 @ 0x140093730 (sub_140093730.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14000EE10(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return sub_1400B6010(v1);
  return result;
}
