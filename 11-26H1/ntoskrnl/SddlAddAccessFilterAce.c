/*
 * XREFs of SddlAddAccessFilterAce @ 0x1408181E8
 * Callers:
 *     LocalGetAclForString @ 0x1409243B0 (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x1404872D0 (RtlLengthSid.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlValidSid @ 0x140924370 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140928000 (RtlValidAcl.c)
 *     RtlCopySid @ 0x140A2AE10 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x140A47520 (RtlFirstFreeAce.c)
 */

__int64 __fastcall SddlAddAccessFilterAce(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *Src,
        unsigned __int16 a8)
{
  __int64 result; // rax
  char v12; // r15
  int v13; // ecx
  bool v14; // zf
  int v15; // ecx
  unsigned int v16; // ebx
  ULONG v17; // edx
  __int64 v18; // r14
  ULONG v19; // eax
  ULONG v20; // eax
  __int64 v21; // [rsp+20h] [rbp-10h] BYREF
  char v22; // [rsp+80h] [rbp+50h]

  v22 = a3;
  v21 = 0LL;
  if ( !a1 || !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225591LL;
  if ( !Src || (unsigned __int16)(a8 - 6) > 0xFFF8u || *Src != 2020897377 )
    return 3221225485LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  v12 = 2;
  if ( (a3 & 0x40) != 0 )
  {
    if ( *(_BYTE *)(a4 + 1) != 2 )
      return 3221225485LL;
    v13 = *(_DWORD *)(a4 + 2);
    if ( !v13 )
      v13 = *(unsigned __int16 *)(a4 + 6) - 4864;
    if ( v13 )
      return 3221225485LL;
    if ( *(_DWORD *)(a4 + 8) )
      goto LABEL_21;
    v14 = *(_DWORD *)(a4 + 12) == 0;
  }
  else
  {
    v15 = *(_DWORD *)(a4 + 2);
    if ( !v15 )
      v15 = *(unsigned __int16 *)(a4 + 6) - 256;
    if ( v15 || *(_BYTE *)(a4 + 1) != 1 )
      return 3221225485LL;
    v14 = *(_DWORD *)(a4 + 8) == 0;
  }
  if ( !v14 )
    return 3221225485LL;
LABEL_21:
  if ( *(_BYTE *)a1 > 4u )
    return 3221225561LL;
  if ( *(_BYTE *)a1 > 2u )
    v12 = *(_BYTE *)a1;
  if ( (a3 & 0xFFFFFFA0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !(unsigned __int8)RtlFirstFreeAce(a1, &v21) )
    return 3221225591LL;
  v16 = (a8 + 3) & 0xFFFFFFFC;
  v17 = RtlLengthSid((PSID)a4) + v16 + 8;
  if ( v17 < v16 )
    return 534LL;
  if ( v17 > 0xFFFF )
    return 3221225485LL;
  v18 = v21;
  if ( !v21 || v21 + (unsigned __int64)v17 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_BYTE *)(v21 + 1) = v22;
  *(_BYTE *)v18 = 21;
  *(_WORD *)(v18 + 2) = v17;
  *(_DWORD *)(v18 + 4) = a6;
  v19 = RtlLengthSid((PSID)a4);
  RtlCopySid(v19, (PSID)(v18 + 8), (PSID)a4);
  v20 = RtlLengthSid((PSID)a4);
  memmove((void *)(v18 + v20 + 8LL), Src, a8);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v12;
  return result;
}
