/*
 * XREFs of ??_G?$heap_implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180624BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180624594 (--1RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::~RemoteSystemDataModel(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x128);
  return a1;
}
