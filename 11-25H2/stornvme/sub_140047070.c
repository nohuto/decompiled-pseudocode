/*
 * XREFs of sub_140047070 @ 0x140047070
 * Callers:
 *     sub_140047290 @ 0x140047290 (sub_140047290.c)
 *     sub_140049078 @ 0x140049078 (sub_140049078.c)
 * Callees:
 *     sub_1400323F4 @ 0x1400323F4 (sub_1400323F4.c)
 *     sub_140047128 @ 0x140047128 (sub_140047128.c)
 */

_QWORD *sub_140047070()
{
  int **v0; // rdx
  int v1; // r9d
  int v2; // r10d
  int v3; // r8d
  int v4; // ecx
  _QWORD *i; // rcx
  _QWORD *result; // rax
  _QWORD *v7; // rbx

  v0 = (int **)sub_1400323F4(&off_140041188);
  if ( v0 )
  {
    v1 = 0;
    v2 = 384;
    do
    {
      v3 = **v0;
      if ( (v3 & 0x200) != 0 )
      {
        v4 = 0;
        if ( (v3 & v2) != 0 )
          LOBYTE(v4) = (v2 & v3) == 256;
        else
          LOBYTE(v4) = *((_BYTE *)v0 + 31) != 0;
        _InterlockedXor(*v0, v1 & 0xFFFFFFBF | (v4 << 6) ^ **v0 & 0x40);
      }
      v0 = (int **)sub_1400323F4(v0 + 7);
    }
    while ( v0 );
  }
  for ( i = &off_140041188; ; i = v7 + 7 )
  {
    result = sub_1400323F4(i);
    v7 = result;
    if ( !result )
      break;
    sub_140047128(*result, result);
  }
  return result;
}
