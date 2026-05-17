/*
 * XREFs of RtlDeleteAce @ 0x1800E9F10
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x18003D180 (RtlValidAcl.c)
 *     RtlpDeleteData @ 0x1800E9FA8 (RtlpDeleteData.c)
 */

__int64 __fastcall RtlDeleteAce(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // edx
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r10
  unsigned int i; // r9d
  __int64 v9; // rdx

  v2 = a2;
  if ( !RtlValidAcl(a1) )
    return 3221225485LL;
  v4 = *(unsigned __int16 *)(a1 + 4);
  if ( (unsigned int)v2 >= v4 )
    return 3221225485LL;
  v5 = a1 + 8;
  v6 = a1 + 8;
  v7 = a1 + *(unsigned __int16 *)(a1 + 2);
  for ( i = 0; i < v4; ++i )
  {
    if ( v6 >= v7 )
      return 3221225485LL;
    v6 += *(unsigned __int16 *)(v6 + 2);
  }
  if ( v6 > v7 )
    LODWORD(v6) = 0;
  if ( (_DWORD)v2 )
  {
    v9 = v2;
    do
    {
      v5 += *(unsigned __int16 *)(v5 + 2);
      --v9;
    }
    while ( v9 );
  }
  RtlpDeleteData(v5, *(unsigned __int16 *)(v5 + 2), (unsigned int)(v6 - v5));
  --*(_WORD *)(a1 + 4);
  return 0LL;
}
