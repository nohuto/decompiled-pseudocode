/*
 * XREFs of SmpConfigureKnownDlls @ 0x140013A70
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue @ 0x1400193B0 (SmpSaveRegistryValue.c)
 */

__int64 __fastcall SmpConfigureKnownDlls(wchar_t *Str1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  if ( _wcsicmp(Str1, L"DllDirectory") && _wcsicmp(Str1, L"DllDirectory32") )
    return SmpSaveRegistryValue(a6, Str1, a3, 1LL, 0LL);
  else
    return 0LL;
}
