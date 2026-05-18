/*
 * XREFs of sub_180031E08 @ 0x180031E08
 * Callers:
 *     sub_1800385B0 @ 0x1800385B0 (sub_1800385B0.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_180031E08(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = v1[3];
      v3 = (_QWORD *)*v1;
      if ( v2 )
        sub_180010EC8(v2);
      result = sub_18000E26C(v1, 0x20uLL);
      v1 = v3;
    }
    while ( v3 );
  }
  return result;
}
