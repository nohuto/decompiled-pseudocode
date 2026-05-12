/*
 * XREFs of sub_140039E80 @ 0x140039E80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_140039F08 @ 0x140039F08 (sub_140039F08.c)
 *     sub_140076210 @ 0x140076210 (sub_140076210.c)
 *     sub_140077BF8 @ 0x140077BF8 (sub_140077BF8.c)
 */

__int64 __fastcall sub_140039E80(_QWORD **Context, __int64 a2, int a3)
{
  if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
    sub_140076210((_DWORD)Context, (unsigned int)&unk_14014B038, a3, *Context[620], *((_DWORD *)Context + 14));
  *((_DWORD *)Context[620] + 5) &= ~2u;
  if ( sub_140020090((__int64)(Context + 47), 7) )
    sub_140077BF8(Context, 0LL);
  return sub_140039F08(Context);
}
