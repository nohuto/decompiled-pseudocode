/*
 * XREFs of sub_14000DEF8 @ 0x14000DEF8
 * Callers:
 *     sub_14000802C @ 0x14000802C (sub_14000802C.c)
 *     sub_14000809C @ 0x14000809C (sub_14000809C.c)
 *     sub_14000C390 @ 0x14000C390 (sub_14000C390.c)
 *     sub_14000D938 @ 0x14000D938 (sub_14000D938.c)
 *     sub_14000DE78 @ 0x14000DE78 (sub_14000DE78.c)
 *     sub_14000E334 @ 0x14000E334 (sub_14000E334.c)
 *     sub_14000EA58 @ 0x14000EA58 (sub_14000EA58.c)
 *     sub_14000EB88 @ 0x14000EB88 (sub_14000EB88.c)
 *     sub_14000ED38 @ 0x14000ED38 (sub_14000ED38.c)
 *     sub_1400304D0 @ 0x1400304D0 (sub_1400304D0.c)
 *     sub_140033CBC @ 0x140033CBC (sub_140033CBC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000DEF8(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = _o_free(a1);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
