/*
 * XREFs of sub_180003830 @ 0x180003830
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001290C @ 0x18001290C (sub_18001290C.c)
 */

__int64 sub_180003830()
{
  char v0; // al
  _BYTE *v1; // rdx
  unsigned int v2; // ecx
  int v3; // r8d
  __int64 result; // rax

  v0 = sub_18001290C(&qword_1801C8FE8);
  v2 = 0;
  if ( v0 )
    v1 = (_BYTE *)qword_1801C8FE8;
  if ( v1 )
  {
    v3 = 5381;
    while ( *v1 )
      v3 = (char)*v1++ + 33 * v3;
    v2 = v3;
  }
  result = v2;
  qword_1801C9008 = v2;
  return result;
}
