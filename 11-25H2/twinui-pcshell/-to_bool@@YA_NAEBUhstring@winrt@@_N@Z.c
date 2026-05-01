/*
 * XREFs of ?to_bool@@YA_NAEBUhstring@winrt@@_N@Z @ 0x18035B2A8
 * Callers:
 *     ?GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ @ 0x18035A718 (-GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ.c)
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 */

char __fastcall to_bool(const struct winrt::hstring *this)
{
  const WCHAR *v2; // rax
  const WCHAR *v4; // rax

  v2 = winrt::hstring::c_str(this);
  if ( CompareStringOrdinal(v2, -1, L"true", -1, 1) == 2 )
    return 1;
  v4 = winrt::hstring::c_str(this);
  CompareStringOrdinal(v4, -1, L"false", -1, 1);
  return 0;
}
