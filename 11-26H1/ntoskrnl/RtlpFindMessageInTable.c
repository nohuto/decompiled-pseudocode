/*
 * XREFs of RtlpFindMessageInTable @ 0x1404A0234
 * Callers:
 *     RtlFindMessage @ 0x140A8DE20 (RtlFindMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFindMessageInTable(int *a1, int a2, unsigned int a3, unsigned __int16 **a4)
{
  int v4; // r10d
  unsigned __int16 *v5; // rbx
  unsigned int *i; // rdx
  unsigned __int16 *v8; // rcx
  unsigned int v9; // r8d

  v4 = *a1;
  v5 = (unsigned __int16 *)((char *)a1 + (unsigned int)(a2 - 1));
  for ( i = (unsigned int *)(a1 + 1); ; i += 3 )
  {
    if ( !v4-- )
      return 3221225737LL;
    if ( a3 >= *i && a3 <= i[1] )
      break;
  }
  v8 = (unsigned __int16 *)((char *)a1 + i[2]);
  v9 = a3 - *i;
  while ( v9-- )
  {
    v8 = (unsigned __int16 *)((char *)v8 + *v8);
    if ( v8 > v5 )
      return 3221225737LL;
  }
  *a4 = v8;
  return 0LL;
}
