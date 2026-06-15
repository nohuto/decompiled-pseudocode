/*
 * XREFs of sub_140044BC0 @ 0x140044BC0
 * Callers:
 *     sub_140044930 @ 0x140044930 (sub_140044930.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140044BC0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
