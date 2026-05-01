/*
 * XREFs of ??$create_and_initialize@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAUNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@1@XZ @ 0x18064A130
 * Callers:
 *     ??$make_factory@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18064A2AC (--$make_factory@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@@im.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??0NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18064A4E4 (--0NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

_OWORD *winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,>()
{
  _OWORD *v1; // [rsp+30h] [rbp+8h]

  v1 = operator new(0x28uLL);
  *v1 = 0LL;
  v1[1] = 0LL;
  *((_QWORD *)v1 + 4) = 0LL;
  winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils::NetworkConnectionUtils((winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils *)v1);
  *(_QWORD *)v1 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils>::`vftable';
  return v1;
}
