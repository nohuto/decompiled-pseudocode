/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x140926090
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x140260160 (SepSetProcessTrustLabelAceForToken.c)
 *     RtlpNewSecurityObject @ 0x1408E0FD0 (RtlpNewSecurityObject.c)
 *     SeMakeSystemToken @ 0x140CDD7D0 (SeMakeSystemToken.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1402AC970 (RtlIsValidProcessTrustLabelSid.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlValidSid @ 0x140924370 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140928000 (RtlValidAcl.c)
 */

__int64 __fastcall RtlAddProcessTrustLabelAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        char a5,
        int a6)
{
  unsigned int v10; // eax
  unsigned __int8 v11; // bp
  unsigned __int8 *v12; // rcx
  unsigned __int8 *v13; // r9
  unsigned int i; // edx
  unsigned __int16 v15; // dx
  __int64 result; // rax

  if ( !a1 || !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225591LL;
  if ( a5 != 20 )
    return 3221225485LL;
  if ( !RtlValidSid(a4) )
    return 3221225592LL;
  if ( !RtlIsValidProcessTrustLabelSid((__int64)a4) )
    return 3221225485LL;
  v10 = *a1;
  if ( (unsigned __int8)v10 > 4u || a2 > 4 )
    return 3221225561LL;
  v11 = *a1;
  if ( v10 <= a2 )
    v11 = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  v12 = a1 + 8;
  v13 = &a1[*((unsigned __int16 *)a1 + 1)];
  for ( i = 0; i < *((unsigned __int16 *)a1 + 2); ++i )
  {
    if ( v12 >= v13 )
      return 3221225591LL;
    v12 += *((unsigned __int16 *)v12 + 1);
  }
  if ( v12 > v13 )
    v12 = 0LL;
  v15 = 4 * (a4[1] + 4);
  if ( !v12 || &v12[v15] > v13 )
    return 3221225625LL;
  *((_WORD *)v12 + 1) = v15;
  *((_DWORD *)v12 + 1) = a6;
  v12[1] = a3;
  *v12 = 20;
  memmove(v12 + 8, a4, 4LL * a4[1] + 8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v11;
  return result;
}
