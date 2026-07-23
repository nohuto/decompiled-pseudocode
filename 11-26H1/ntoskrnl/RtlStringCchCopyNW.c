/*
 * XREFs of RtlStringCchCopyNW @ 0x140484B50
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1405DDB94 (PiDevCfgParsePropertyKeyName.c)
 *     IopLogBlockedDriverEvent @ 0x140797CB0 (IopLogBlockedDriverEvent.c)
 *     SdbpSafeAllocAndConcatW @ 0x140887F80 (SdbpSafeAllocAndConcatW.c)
 *     SdbQueryDataExTagID @ 0x1408882D8 (SdbQueryDataExTagID.c)
 *     WmipBuildInstanceSet @ 0x140A0AF78 (WmipBuildInstanceSet.c)
 *     PiUEventNotifyUserMode @ 0x140A1AAC0 (PiUEventNotifyUserMode.c)
 *     AslPathSplit @ 0x140B0E78C (AslPathSplit.c)
 *     PiUEventHandleVetoEvent @ 0x140B269C4 (PiUEventHandleVetoEvent.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140B2C090 (PoQueryProcessEnergyTrackingState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  size_t v4; // r10
  size_t v5; // r9
  signed __int64 v6; // r8
  wchar_t v7; // ax
  NTSTRSAFE_PWSTR v8; // rax
  NTSTATUS result; // eax

  v4 = cchDest;
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( !cchDest )
      return result;
LABEL_12:
    *pszDest = 0;
    return result;
  }
  if ( cchToCopy > 0x7FFFFFFE )
  {
    result = -1073741811;
    goto LABEL_12;
  }
  v5 = cchToCopy - cchDest;
  v6 = (char *)pszSrc - (char *)pszDest;
  do
  {
    if ( !(v5 + v4) )
      break;
    v7 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v6);
    if ( !v7 )
      break;
    *pszDest++ = v7;
    --v4;
  }
  while ( v4 );
  v8 = pszDest - 1;
  if ( v4 )
    v8 = pszDest;
  *v8 = 0;
  return v4 == 0 ? 0x80000005 : 0;
}
