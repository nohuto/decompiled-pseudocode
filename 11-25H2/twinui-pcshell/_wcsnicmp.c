/*
 * XREFs of _wcsnicmp @ 0x1802D2F3C
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18013C2DC (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 *     AslpEnvResolveVars @ 0x18013D6D0 (AslpEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x18013DB8C (AslEnvVarQuery.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  return _o__wcsnicmp(String1, String2, MaxCount);
}
