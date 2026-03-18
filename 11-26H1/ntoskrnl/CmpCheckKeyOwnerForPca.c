/*
 * XREFs of CmpCheckKeyOwnerForPca @ 0x140AB0CD8
 * Callers:
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1408D0D50 (CmpGetSecurityCacheEntryForKcbStack.c)
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
