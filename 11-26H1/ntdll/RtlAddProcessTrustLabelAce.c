/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x1800C8600
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x18003D140 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18003D180 (RtlValidAcl.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x18005D5C0 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlCopySid @ 0x1800C8CC0 (RtlCopySid.c)
 */

__int64 __fastcall RtlAddProcessTrustLabelAce(unsigned __int8 *a1, unsigned int a2, int a3, _BYTE *a4, char a5, int a6)
{
  unsigned __int8 v10; // bp
  unsigned __int8 *v11; // rdx
  unsigned __int8 *v12; // r9
  unsigned int i; // ecx
  unsigned __int16 v14; // cx
  __int64 result; // rax

  if ( !a1 || !RtlValidAcl((__int64)a1) )
    return 3221225591LL;
  if ( a5 != 20 )
    return 3221225485LL;
  if ( !RtlValidSid(a4) )
    return 3221225592LL;
  if ( !RtlIsValidProcessTrustLabelSid((__int64)a4) )
    return 3221225485LL;
  if ( *a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = *a1;
  if ( *a1 <= a2 )
    v10 = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  v11 = a1 + 8;
  v12 = &a1[*((unsigned __int16 *)a1 + 1)];
  for ( i = 0; i < *((unsigned __int16 *)a1 + 2); ++i )
  {
    if ( v11 >= v12 )
      return 3221225591LL;
    v11 += *((unsigned __int16 *)v11 + 1);
  }
  if ( v11 > v12 )
    v11 = 0LL;
  v14 = 4 * ((unsigned __int8)a4[1] + 4);
  if ( !v11 || &v11[v14] > v12 )
    return 3221225625LL;
  *((_WORD *)v11 + 1) = v14;
  *((_DWORD *)v11 + 1) = a6;
  v11[1] = a3;
  *v11 = 20;
  RtlCopySid(4 * (unsigned int)(unsigned __int8)a4[1] + 8, v11 + 8, a4);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v10;
  return result;
}
