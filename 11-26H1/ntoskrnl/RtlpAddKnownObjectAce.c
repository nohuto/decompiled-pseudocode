/*
 * XREFs of RtlpAddKnownObjectAce @ 0x140803804
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x140803040 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1408030D0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1408033B0 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlValidSid @ 0x140924370 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140928000 (RtlValidAcl.c)
 *     RtlCopySid @ 0x140A2AE10 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x140A47520 (RtlFirstFreeAce.c)
 */

__int64 __fastcall RtlpAddKnownObjectAce(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *Sid,
        char a8)
{
  __int64 result; // rax
  int v13; // r9d
  ULONG v14; // r11d
  unsigned __int16 v15; // r8
  __int64 v16; // rdx
  _OWORD *v17; // rdx
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v18[0] = 0LL;
  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( *(_BYTE *)a1 > 4u || a2 != 4 )
    return 3221225561LL;
  if ( (a3 & 0xFFFFFFE0) != 0 && (a8 != 7 || (a3 & 0xFFFFFF20) != 0) )
    return 3221225485LL;
  if ( !(unsigned __int8)RtlValidAcl(a1) || !(unsigned __int8)RtlFirstFreeAce(a1, v18) )
    return 3221225591LL;
  v13 = a5 != 0LL;
  v14 = 4 * Sid[1] + 8;
  v15 = 4 * Sid[1] + 8 + (a5 != 0LL ? 28 : 12);
  if ( a6 )
  {
    v13 |= 2u;
    v15 += 16;
  }
  v16 = v18[0];
  if ( !v18[0] || v18[0] + (unsigned __int64)v15 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_BYTE *)(v18[0] + 1LL) = a3;
  *(_BYTE *)v16 = a8;
  *(_WORD *)(v16 + 2) = v15;
  *(_DWORD *)(v16 + 4) = a4;
  *(_DWORD *)(v16 + 8) = v13;
  v17 = (_OWORD *)(v16 + 12);
  if ( a5 )
    *v17++ = *a5;
  if ( a6 )
    *v17++ = *a6;
  RtlCopySid(v14, v17, Sid);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = 4;
  return result;
}
