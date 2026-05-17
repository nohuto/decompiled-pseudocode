/*
 * XREFs of RtlpAddKnownObjectAce @ 0x18013EAE0
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x18013E0B0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x18013E110 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18013E3B0 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlValidSid @ 0x18003D140 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18003D180 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1800C8CC0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x1800C9ED0 (RtlFirstFreeAce.c)
 */

__int64 RtlpAddKnownObjectAce(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *a7,
        char a8,
        ...)
{
  __int64 result; // rax
  int v13; // r9d
  unsigned int v14; // r11d
  unsigned __int16 v15; // r8
  unsigned __int64 v16; // rdx
  _OWORD *v17; // rdx
  unsigned __int64 v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v18[0] = 0LL;
  if ( !RtlValidSid(a7) )
    return 3221225592LL;
  if ( *(_BYTE *)a1 > 4u || a2 != 4 )
    return 3221225561LL;
  if ( (a3 & 0xFFFFFFE0) != 0 && (a8 != 7 || (a3 & 0xFFFFFF20) != 0) )
    return 3221225485LL;
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, v18) )
    return 3221225591LL;
  v13 = a5 != 0LL;
  v14 = 4 * a7[1] + 8;
  v15 = 4 * a7[1] + 8 + (a5 != 0LL ? 28 : 12);
  if ( a6 )
  {
    v13 |= 2u;
    v15 += 16;
  }
  v16 = v18[0];
  if ( !v18[0] || v18[0] + v15 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_BYTE *)(v18[0] + 1) = a3;
  *(_BYTE *)v16 = a8;
  *(_WORD *)(v16 + 2) = v15;
  *(_DWORD *)(v16 + 4) = a4;
  *(_DWORD *)(v16 + 8) = v13;
  v17 = (_OWORD *)(v16 + 12);
  if ( a5 )
    *v17++ = *a5;
  if ( a6 )
    *v17++ = *a6;
  RtlCopySid(v14, v17, a7);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = 4;
  return result;
}
