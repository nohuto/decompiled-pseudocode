/*
 * XREFs of RtlQueryInformationAcl @ 0x140A66FE0
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x14025EEEC (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x140260160 (SepSetProcessTrustLabelAceForToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueryInformationAcl(unsigned __int8 *a1, unsigned int *a2, unsigned int a3, int a4)
{
  unsigned int v4; // r10d
  int v6; // r9d
  unsigned __int8 *v7; // rdx
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  unsigned __int8 *v10; // rbx
  __int64 result; // rax

  v4 = *a1;
  if ( (unsigned __int8)(v4 - 2) > 2u )
    return 3221225485LL;
  v6 = a4 - 1;
  if ( !v6 )
  {
    if ( a3 >= 4 )
    {
      *a2 = v4;
      return 0LL;
    }
    return 3221225507LL;
  }
  if ( v6 != 1 )
    return 3221225475LL;
  if ( a3 < 0xC )
    return 3221225507LL;
  v7 = a1 + 8;
  v8 = *((unsigned __int16 *)a1 + 2);
  v9 = 0;
  v10 = &a1[*((unsigned __int16 *)a1 + 1)];
  while ( v9 < v8 )
  {
    if ( v7 >= v10 )
      return 3221225485LL;
    ++v9;
    v7 += *((unsigned __int16 *)v7 + 1);
  }
  *a2 = v8;
  if ( v7 > v10 )
    v7 = 0LL;
  if ( v7 )
  {
    a2[1] = (_DWORD)v7 - (_DWORD)a1;
    a2[2] = (_DWORD)a1 + *((unsigned __int16 *)a1 + 1) - (_DWORD)v7;
    return 0LL;
  }
  a2[1] = *((unsigned __int16 *)a1 + 1);
  result = 0LL;
  a2[2] = 0;
  return result;
}
