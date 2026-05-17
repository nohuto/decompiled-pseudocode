/*
 * XREFs of RtlAddAccessFilterAce @ 0x18013E170
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x18003D140 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18003D180 (RtlValidAcl.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x18005D5C0 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlCopySid @ 0x1800C8CC0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x1800C9ED0 (RtlFirstFreeAce.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlAddAccessFilterAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        char a5,
        int a6,
        _DWORD *Src,
        unsigned __int16 a8)
{
  const void *v12; // rbp
  __int64 result; // rax
  int v14; // ecx
  unsigned __int8 v15; // r14
  int v16; // r15d
  unsigned int v17; // ecx
  unsigned int v18; // r8d
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // [rsp+68h] [rbp+20h] BYREF

  v20 = 0LL;
  if ( !a1 || !RtlValidAcl((__int64)a1) )
    return 3221225591LL;
  v12 = Src;
  if ( !Src || (unsigned __int16)(a8 - 6) > 0xFFF8u || *Src != 2020897377 || a5 != 21 )
    return 3221225485LL;
  if ( !RtlValidSid((_BYTE *)a4) )
    return 3221225592LL;
  if ( (a3 & 0x40) != 0 )
  {
    if ( !RtlIsValidProcessTrustLabelSid(a4) )
      return 3221225485LL;
  }
  else
  {
    v14 = *(_DWORD *)(a4 + 2);
    if ( !v14 )
      v14 = *(unsigned __int16 *)(a4 + 6) - 256;
    if ( v14 || *(_BYTE *)(a4 + 1) != 1 || *(_DWORD *)(a4 + 8) )
      return 3221225485LL;
  }
  if ( *a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v15 = *a1;
  if ( *a1 <= a2 )
    v15 = a2;
  if ( (a3 & 0xFFFFFFA0) != 0 )
    return 3221225485LL;
  v16 = a6;
  if ( (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce((__int64)a1, &v20) )
    return 3221225591LL;
  v17 = (a8 + 3) & 0xFFFFFFFC;
  v18 = v17 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( v18 < v17 )
    return 3221225621LL;
  if ( v18 > 0xFFFF )
    return 3221225485LL;
  v19 = v20;
  if ( !v20 || v20 + v18 > (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
    return 3221225625LL;
  *(_WORD *)(v20 + 2) = v18;
  *(_BYTE *)(v19 + 1) = a3;
  *(_BYTE *)v19 = 21;
  *(_DWORD *)(v19 + 4) = v16;
  RtlCopySid(4 * *(unsigned __int8 *)(a4 + 1) + 8, (void *)(v19 + 8), (unsigned __int8 *)a4);
  memmove((void *)(v19 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4LL)), v12, a8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v15;
  return result;
}
