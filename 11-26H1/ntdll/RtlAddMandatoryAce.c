/*
 * XREFs of RtlAddMandatoryAce @ 0x1800C8B20
 * Callers:
 *     RtlpNewSecurityObject @ 0x18005E6A0 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x18003D140 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18003D180 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1800C8CC0 (RtlCopySid.c)
 */

__int64 __fastcall RtlAddMandatoryAce(__int64 a1, unsigned int a2, int a3, __int64 a4, char a5, int a6)
{
  int v10; // ecx
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  unsigned __int16 v13; // cx
  char v14; // al
  bool v15; // cc
  char v16; // si
  unsigned __int64 v17; // r8
  unsigned int i; // ecx

  if ( !a1 )
    return 3221225591LL;
  if ( a5 != 17 )
    return 3221225485LL;
  if ( !RtlValidSid((_BYTE *)a4) )
    return 3221225592LL;
  v10 = *(_DWORD *)(a4 + 2);
  if ( !v10 )
    v10 = *(unsigned __int16 *)(a4 + 6) - 4096;
  if ( v10 )
    return 3221225485LL;
  if ( *(_BYTE *)a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v14 = a2;
  v15 = *(_BYTE *)a1 <= (unsigned __int8)a2;
  v16 = *(_BYTE *)a1;
  if ( v15 )
    v16 = v14;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  if ( !RtlValidAcl(a1) )
    return 3221225591LL;
  v12 = a1 + 8;
  v17 = a1 + *(unsigned __int16 *)(a1 + 2);
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 4); ++i )
  {
    if ( v12 >= v17 )
      return 3221225591LL;
    v12 += *(unsigned __int16 *)(v12 + 2);
  }
  if ( v12 > v17 )
    v12 = 0LL;
  v13 = 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( !v12 || v12 + v13 > v17 )
    return 3221225625LL;
  *(_WORD *)(v12 + 2) = v13;
  *(_BYTE *)(v12 + 1) = a3;
  *(_BYTE *)v12 = 17;
  *(_DWORD *)(v12 + 4) = a6;
  RtlCopySid(4 * (unsigned int)*(unsigned __int8 *)(a4 + 1) + 8, v12 + 8, a4);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v16;
  return result;
}
