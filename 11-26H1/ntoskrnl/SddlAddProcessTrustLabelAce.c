/*
 * XREFs of SddlAddProcessTrustLabelAce @ 0x14081840C
 * Callers:
 *     LocalGetAclForString @ 0x1409243B0 (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x1404872D0 (RtlLengthSid.c)
 *     RtlValidSid @ 0x140924370 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140928000 (RtlValidAcl.c)
 *     RtlCopySid @ 0x140A2AE10 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x140A47520 (RtlFirstFreeAce.c)
 */

__int64 __fastcall SddlAddProcessTrustLabelAce(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  int v10; // ecx
  char v11; // bp
  int v12; // r14d
  __int16 v13; // ax
  __int64 v14; // rbx
  unsigned __int16 v15; // ax
  ULONG v16; // eax
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0LL;
  if ( !a1 || !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225591LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  v10 = *(_DWORD *)(a4 + 2);
  if ( !v10 )
    v10 = *(unsigned __int16 *)(a4 + 6) - 4864;
  if ( v10 )
    return 3221225485LL;
  if ( *(_BYTE *)a1 > 4u )
    return 3221225561LL;
  v11 = 2;
  if ( *(_BYTE *)a1 > 2u )
    v11 = *(_BYTE *)a1;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  v12 = a6;
  if ( (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !(unsigned __int8)RtlFirstFreeAce(a1, &v17) )
    return 3221225591LL;
  v13 = RtlLengthSid((PSID)a4);
  v14 = v17;
  v15 = v13 + 8;
  if ( !v17 || v17 + (unsigned __int64)v15 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_BYTE *)(v17 + 1) = a3;
  *(_BYTE *)v14 = 20;
  *(_WORD *)(v14 + 2) = v15;
  *(_DWORD *)(v14 + 4) = v12;
  v16 = RtlLengthSid((PSID)a4);
  RtlCopySid(v16, (PSID)(v14 + 8), (PSID)a4);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v11;
  return result;
}
