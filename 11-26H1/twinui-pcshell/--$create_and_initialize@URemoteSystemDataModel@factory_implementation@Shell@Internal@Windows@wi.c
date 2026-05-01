/*
 * XREFs of ??$create_and_initialize@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@1@XZ @ 0x1802C2B24
 * Callers:
 *     ??$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18027BF60 (--$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@imp.c)
 * Callees:
 *     ??0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802C2B70 (--0RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,>()
{
  _QWORD *v1; // [rsp+30h] [rbp+8h]

  v1 = operator new(0x128uLL);
  memset_0(v1, 0, 0x128uLL);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RemoteSystemDataModel((winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)v1);
  *v1 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>::`vftable';
  return v1;
}
