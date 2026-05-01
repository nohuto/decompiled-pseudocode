/*
 * XREFs of ?IsLocalSessionCapableOf@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4LocalCapabilities@3456@@Z @ 0x18064E070
 * Callers:
 *     ?IsLocalSessionCapableOf@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHHPEA_N@Z @ 0x18065AFF0 (-IsLocalSessionCapableOf@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Win.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::IsLocalSessionCapableOf(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        const enum winrt::Windows::Internal::Shell::LocalCapabilities *a2)
{
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      return *((_BYTE *)this + 264);
    case 1:
      return *((_BYTE *)this + 265);
    case 2:
      return *((_BYTE *)this + 266);
    case 3:
      return *((_BYTE *)this + 268);
    case 4:
      return *((_BYTE *)this + 267);
    case 5:
      return *((_BYTE *)this + 269);
  }
  return 0;
}
