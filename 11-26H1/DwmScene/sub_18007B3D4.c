/*
 * XREFs of sub_18007B3D4 @ 0x18007B3D4
 * Callers:
 *     sub_18007B538 @ 0x18007B538 (sub_18007B538.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18007B3D4(char *a1, unsigned __int64 a2)
{
  char *v2; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r8
  char *v6; // rdi
  unsigned __int64 i; // rcx

  v2 = a1;
  result = a2 - (_QWORD)a1;
  v4 = (a2 - (unsigned __int64)a1 + 1) >> 1;
  if ( (unsigned __int64)a1 > a2 )
    v4 = 0LL;
  if ( v4 >= 8 )
  {
    result = (unsigned __int64)&a1[2 * v4 - 2];
    if ( a1 > &byte_1801081F8 || result < (unsigned __int64)&byte_1801081F8 )
    {
      result = 0xFFFFLL;
      v5 = 2 * (v4 & 0xFFFFFFFFFFFFFFF8uLL);
      v6 = a1;
      for ( i = v5 >> 1; i; --i )
      {
        *(_WORD *)v6 = -1;
        v6 += 2;
      }
      v2 += v5;
    }
  }
  while ( v2 != (char *)a2 )
  {
    *(_WORD *)v2 = -1;
    v2 += 2;
  }
  return result;
}
