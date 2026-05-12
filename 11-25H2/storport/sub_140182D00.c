/*
 * XREFs of sub_140182D00 @ 0x140182D00
 * Callers:
 *     sub_140182F20 @ 0x140182F20 (sub_140182F20.c)
 *     sub_1401B9078 @ 0x1401B9078 (sub_1401B9078.c)
 * Callees:
 *     sub_1400A59C4 @ 0x1400A59C4 (sub_1400A59C4.c)
 *     sub_140182DB8 @ 0x140182DB8 (sub_140182DB8.c)
 */

_QWORD *sub_140182D00()
{
  int **v0; // rdx
  int v1; // r9d
  int v2; // r10d
  int v3; // r8d
  int v4; // ecx
  _QWORD *i; // rcx
  _QWORD *result; // rax
  _QWORD *v7; // rbx

  v0 = (int **)sub_1400A59C4(&off_140166B78);
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
      v0 = (int **)sub_1400A59C4(v0 + 7);
    }
    while ( v0 );
  }
  for ( i = &off_140166B78; ; i = v7 + 7 )
  {
    result = sub_1400A59C4(i);
    v7 = result;
    if ( !result )
      break;
    sub_140182DB8(*result, result);
  }
  return result;
}
