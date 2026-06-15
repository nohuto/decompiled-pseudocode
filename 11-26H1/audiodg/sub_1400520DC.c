/*
 * XREFs of sub_1400520DC @ 0x1400520DC
 * Callers:
 *     sub_140052A00 @ 0x140052A00 (sub_140052A00.c)
 *     sub_140052B10 @ 0x140052B10 (sub_140052B10.c)
 *     sub_140052E0C @ 0x140052E0C (sub_140052E0C.c)
 * Callees:
 *     sub_14005214C @ 0x14005214C (sub_14005214C.c)
 */

_QWORD *__fastcall sub_1400520DC(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)sub_14005214C();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
