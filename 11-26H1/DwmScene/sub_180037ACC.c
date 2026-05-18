/*
 * XREFs of sub_180037ACC @ 0x180037ACC
 * Callers:
 *     sub_18002DE54 @ 0x18002DE54 (sub_18002DE54.c)
 *     sub_18002F750 @ 0x18002F750 (sub_18002F750.c)
 * Callees:
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 */

__int64 __fastcall sub_180037ACC(__int64 a1)
{
  __int64 result; // rax

  result = 0x38E38E38E38E38ELL;
  if ( *(_QWORD *)(a1 + 8) == 0x38E38E38E38E38ELL )
    sub_18001DF68();
  return result;
}
