/*
 * XREFs of ??1?$unique_ptr@VRemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@VRemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18062442C
 * Callers:
 *     ??1RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180624594 (--1RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RemoteSystemDataModel_::_1_::dtor$1 @ 0x1806B9376 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--RemoteSystemDat.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180624518 (--1RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper>::~unique_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper>(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper **a1)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::~RemoteSessionPersistenceHelper(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x108);
  }
}
