/*
 * XREFs of sub_140032B80 @ 0x140032B80
 * Callers:
 *     sub_140032B30 @ 0x140032B30 (sub_140032B30.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140032B80(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    result = sub_1400B6010(v2);
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}
