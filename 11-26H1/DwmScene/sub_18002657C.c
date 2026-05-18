/*
 * XREFs of sub_18002657C @ 0x18002657C
 * Callers:
 *     sub_180026E5C @ 0x180026E5C (sub_180026E5C.c)
 *     sub_18005B5C4 @ 0x18005B5C4 (sub_18005B5C4.c)
 *     sub_1800BB650 @ 0x1800BB650 (sub_1800BB650.c)
 *     sub_1800BB9A0 @ 0x1800BB9A0 (sub_1800BB9A0.c)
 *     sub_1800BD9C0 @ 0x1800BD9C0 (sub_1800BD9C0.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_18002657C(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v3; // xmm0_4
  int v4; // xmm1_4
  _DWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 144);
    v4 = *(_DWORD *)(v2 + 148);
  }
  else
  {
    v3 = 0;
    v4 = 0;
  }
  *a2 = v3;
  result = a2;
  a2[1] = v4;
  return result;
}
