/*
 * XREFs of _wcsnicmp @ 0x1802C9E0C
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18015A37C (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 *     AslEnvVarQuery @ 0x18018ECBC (AslEnvVarQuery.c)
 *     AslpEnvResolveVars @ 0x1801EEE4C (AslpEnvResolveVars.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  return _o__wcsnicmp(String1, String2, MaxCount);
}
