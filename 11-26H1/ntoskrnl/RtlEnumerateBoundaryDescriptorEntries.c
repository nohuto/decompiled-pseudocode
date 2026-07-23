/*
 * XREFs of RtlEnumerateBoundaryDescriptorEntries @ 0x1408EFEA8
 * Callers:
 *     ObpCaptureBoundaryDescriptor @ 0x1408EED68 (ObpCaptureBoundaryDescriptor.c)
 *     ObpCompareNamespaceEntry @ 0x1408EF130 (ObpCompareNamespaceEntry.c)
 *     ObpCheckDuplicateEntries @ 0x1408EF1CC (ObpCheckDuplicateEntries.c)
 *     ObpCompareEntryLevel1 @ 0x1408EFE50 (ObpCompareEntryLevel1.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A9A970 (ObpVerifyCreatorAccessCheck.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14048B1A0 (RtlSubAuthorityCountSid.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlLengthRequiredSid @ 0x1408F0000 (RtlLengthRequiredSid.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 */

__int64 __fastcall RtlEnumerateBoundaryDescriptorEntries(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  unsigned __int64 v6; // rsi
  int v7; // r8d
  _DWORD *v8; // rdi
  int v9; // r12d
  int v10; // r15d
  __int64 v11; // rdx
  char *v12; // r13
  ULONG v14; // r14d
  PUCHAR v15; // rax
  int v16; // [rsp+60h] [rbp+8h]

  v3 = (unsigned int)a1[2];
  v4 = a3;
  if ( (unsigned int)v3 < 0x10 )
    return 3221225485LL;
  if ( *a1 != 1 )
    return 3221225485LL;
  v6 = (unsigned __int64)a1 + v3;
  if ( (_DWORD *)((char *)a1 + v3) < a1 )
    return 3221225485LL;
  v7 = 0;
  v8 = a1 + 4;
  v9 = 0;
  v16 = 0;
  v10 = 0;
  while ( (unsigned __int64)(v8 + 2) < v6 )
  {
    v11 = (unsigned int)v8[1];
    ++v10;
    if ( (unsigned int)v11 < 8 )
      return 3221225485LL;
    v12 = (char *)v8 + v11;
    if ( (_DWORD *)((char *)v8 + v11) < v8 || (unsigned __int64)v12 > v6 )
      return 3221225485LL;
    if ( *v8 == 1 )
    {
      if ( (unsigned int)++v9 > 1 )
        return 3221225661LL;
    }
    else
    {
      if ( *v8 != 2 )
      {
        if ( *v8 != 3 )
          return 3221225485LL;
        v16 = v7 + 1;
        if ( (unsigned int)(v7 + 1) > 1 )
          return 3221226026LL;
      }
      v14 = v11 - 8;
      if ( (unsigned int)(v11 - 8) < 8 )
        return 3221225485LL;
      v15 = RtlSubAuthorityCountSid(v8 + 2);
      if ( v14 < RtlLengthRequiredSid(*v15) || !RtlValidSid(v8 + 2) )
        return 3221225485LL;
      v4 = a3;
    }
    if ( a2 && !(unsigned int)guard_dispatch_icall_no_overrides((__int64)v8, v4) )
      break;
    v7 = v16;
    v4 = a3;
    v8 = (_DWORD *)((unsigned __int64)(v12 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  if ( a1[1] != v10 )
    return 3221225485LL;
  return 0LL;
}
