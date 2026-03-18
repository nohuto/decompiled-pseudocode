/*
 * XREFs of RtlAddAccessFilterAce @ 0x140803130
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1402AC970 (RtlIsValidProcessTrustLabelSid.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlValidSid @ 0x140924370 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140928000 (RtlValidAcl.c)
 *     RtlCopySid @ 0x140A2AE10 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x140A47520 (RtlFirstFreeAce.c)
 */

__int64 __fastcall RtlAddAccessFilterAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        char a5,
        int a6,
        void *Src,
        unsigned __int16 a8)
{
  void *v12; // rbp
  __int64 result; // rax
  int v14; // ecx
  unsigned int v15; // eax
  unsigned __int8 v16; // r14
  int v17; // r15d
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  __int64 v20; // rsi
  __int64 v21; // [rsp+68h] [rbp+20h] BYREF

  v21 = 0LL;
  if ( !a1 || !(unsigned __int8)RtlValidAcl() )
    return 3221225591LL;
  v12 = Src;
  if ( !Src || (unsigned __int16)(a8 - 6) > 0xFFF8u || *(_DWORD *)Src != 2020897377 || a5 != 21 )
    return 3221225485LL;
  if ( !RtlValidSid((PSID)a4) )
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
  v15 = *a1;
  if ( (unsigned __int8)v15 > 4u || a2 > 4 )
    return 3221225561LL;
  v16 = *a1;
  if ( v15 <= a2 )
    v16 = a2;
  if ( (a3 & 0xFFFFFFA0) != 0 )
    return 3221225485LL;
  v17 = a6;
  if ( (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !(unsigned __int8)RtlFirstFreeAce(a1, &v21) )
    return 3221225591LL;
  v18 = (a8 + 3) & 0xFFFFFFFC;
  v19 = v18 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( v19 < v18 )
    return 3221225621LL;
  if ( v19 > 0xFFFF )
    return 3221225485LL;
  v20 = v21;
  if ( !v21 || v21 + (unsigned __int64)v19 > (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
    return 3221225625LL;
  *(_WORD *)(v21 + 2) = v19;
  *(_BYTE *)(v20 + 1) = a3;
  *(_BYTE *)v20 = 21;
  *(_DWORD *)(v20 + 4) = v17;
  RtlCopySid(4 * *(unsigned __int8 *)(a4 + 1) + 8, (PSID)(v20 + 8), (PSID)a4);
  memmove((void *)(v20 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4LL)), v12, a8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v16;
  return result;
}
