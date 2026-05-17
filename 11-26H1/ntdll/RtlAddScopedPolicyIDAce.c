/*
 * XREFs of RtlAddScopedPolicyIDAce @ 0x18013E930
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x18003D140 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18003D180 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1800C8CC0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x1800C9ED0 (RtlFirstFreeAce.c)
 */

__int64 __fastcall RtlAddScopedPolicyIDAce(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax
  int v10; // ecx
  unsigned __int8 v11; // si
  unsigned __int64 v12; // r8
  unsigned __int16 v13; // dx
  char v14; // cl
  unsigned __int64 v15[7]; // [rsp+20h] [rbp-38h] BYREF

  v15[0] = 0LL;
  if ( !a1 )
    return 3221225591LL;
  if ( !RtlValidSid((_BYTE *)a5) )
    return 3221225592LL;
  v10 = *(_DWORD *)(a5 + 2);
  if ( !v10 )
    v10 = *(unsigned __int16 *)(a5 + 6) - 4352;
  if ( v10 )
    return 3221225485LL;
  v11 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 > 4u || a2 > 4 )
    return 3221225561LL;
  if ( (a3 & 0xFFFFFFE0) != 0 || a4 )
    return 3221225485LL;
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, v15) )
    return 3221225591LL;
  v12 = v15[0];
  v13 = 4 * (*(unsigned __int8 *)(a5 + 1) + 4);
  if ( !v15[0] || v15[0] + v13 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_WORD *)(v15[0] + 2) = v13;
  *(_BYTE *)(v12 + 1) = a3;
  *(_BYTE *)v12 = 19;
  *(_DWORD *)(v12 + 4) = 0;
  RtlCopySid(4 * *(unsigned __int8 *)(a5 + 1) + 8, (void *)(v12 + 8), (unsigned __int8 *)a5);
  ++*(_WORD *)(a1 + 4);
  v14 = v11;
  if ( v11 <= (unsigned __int8)a2 )
    v14 = a2;
  result = 0LL;
  *(_BYTE *)a1 = v14;
  return result;
}
