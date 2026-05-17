/*
 * XREFs of RtlQueryInformationAcl @ 0x1800CCA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueryInformationAcl(unsigned __int8 *a1, unsigned int *a2, unsigned int a3, int a4)
{
  unsigned int v6; // ecx
  int v7; // r9d
  unsigned __int8 *v8; // rdx
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  unsigned __int8 *v11; // r11
  __int64 result; // rax

  v6 = *a1;
  if ( (unsigned __int8)(v6 - 2) > 2u )
    return 3221225485LL;
  v7 = a4 - 1;
  if ( !v7 )
  {
    if ( a3 >= 4 )
    {
      *a2 = v6;
      return 0LL;
    }
    return 3221225507LL;
  }
  if ( v7 != 1 )
    return 3221225475LL;
  if ( a3 < 0xC )
    return 3221225507LL;
  v8 = a1 + 8;
  v9 = *((unsigned __int16 *)a1 + 2);
  v10 = 0;
  v11 = &a1[*((unsigned __int16 *)a1 + 1)];
  while ( v10 < v9 )
  {
    if ( v8 >= v11 )
      return 3221225485LL;
    ++v10;
    v8 += *((unsigned __int16 *)v8 + 1);
  }
  *a2 = v9;
  if ( v8 > v11 )
    v8 = 0LL;
  if ( v8 )
  {
    a2[1] = (_DWORD)v8 - (_DWORD)a1;
    a2[2] = (_DWORD)a1 + *((unsigned __int16 *)a1 + 1) - (_DWORD)v8;
    return 0LL;
  }
  a2[1] = *((unsigned __int16 *)a1 + 1);
  result = 0LL;
  a2[2] = 0;
  return result;
}
