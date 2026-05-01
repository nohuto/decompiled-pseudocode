/*
 * XREFs of ?find_interface@?$implements@VGamingFallbackWindow@@UIInspectable@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180505110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<GamingFallbackWindow,IInspectable>::find_interface(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  v2 = a1 - 8;
  v3 = *a2 - winrt::impl::guid_v<IInspectable>;
  if ( *a2 == winrt::impl::guid_v<IInspectable> )
    v3 = a2[1] + 0x6FE1EF9A5528A564LL;
  return v2 & -(__int64)(v3 == 0);
}
