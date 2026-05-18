/*
 * XREFs of sub_180087BB0 @ 0x180087BB0
 * Callers:
 *     sub_180089204 @ 0x180089204 (sub_180089204.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 */

__int64 __fastcall sub_180087BB0(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rdi
  char *v7; // rdx
  __int64 v8; // rax
  unsigned __int8 *v9; // rcx
  _BYTE v11[264]; // [rsp+20h] [rbp-108h] BYREF

  if ( !a2 )
    return -1LL;
  v6 = (unsigned __int64)&a1[a2];
  memset(v11, 0, 0x100uLL);
  v7 = " \t";
  while ( v7 != &asc_180108E18[a5] )
  {
    v8 = (unsigned __int8)*v7++;
    v11[v8] = 1;
  }
  v9 = a1;
  if ( (unsigned __int64)a1 >= v6 )
    return -1LL;
  while ( v11[*v9] )
  {
    if ( (unsigned __int64)++v9 >= v6 )
      return -1LL;
  }
  return v9 - a1;
}
