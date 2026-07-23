/*
 * XREFs of CmpCheckKeyOwnerForPca @ 0x140AAECBC
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1408D7310 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

BOOLEAN __fastcall CmpCheckKeyOwnerForPca(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  void *v4; // rdx

  if ( !CmpTrustedInstallerSid )
    return 0;
  v2 = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL) + 32;
  if ( *(_BYTE *)v2 != 1 )
    return 0;
  if ( *(__int16 *)(v2 + 2) >= 0 )
  {
    v4 = *(void **)(v2 + 8);
  }
  else
  {
    v3 = *(unsigned int *)(v2 + 4);
    if ( !(_DWORD)v3 )
      return 0;
    v4 = (void *)(v2 + v3);
  }
  if ( v4 )
    return RtlEqualSid(CmpTrustedInstallerSid, v4);
  return 0;
}
