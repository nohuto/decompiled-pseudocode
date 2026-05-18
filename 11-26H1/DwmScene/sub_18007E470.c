/*
 * XREFs of sub_18007E470 @ 0x18007E470
 * Callers:
 *     sub_1800431A0 @ 0x1800431A0 (sub_1800431A0.c)
 *     sub_18004A090 @ 0x18004A090 (sub_18004A090.c)
 *     sub_18005D6DC @ 0x18005D6DC (sub_18005D6DC.c)
 * Callees:
 *     sub_180028A44 @ 0x180028A44 (sub_180028A44.c)
 *     sub_18007F604 @ 0x18007F604 (sub_18007F604.c)
 */

__int64 __fastcall sub_18007E470(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  if ( v4 )
  {
    v6 = a2;
    sub_180028A44((__int64 *)(v4 + 112), &v6);
  }
  v6 = a2;
  return sub_18007F604(a1 + 88, &v6);
}
