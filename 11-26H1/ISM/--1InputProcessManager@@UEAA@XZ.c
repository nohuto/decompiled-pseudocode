/*
 * XREFs of ??1InputProcessManager@@UEAA@XZ @ 0x18019F624
 * Callers:
 *     ??_GInputProcessManager@@UEAAPEAXI@Z @ 0x18019F650 (--_GInputProcessManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall InputProcessManager::~InputProcessManager(InputProcessManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9

  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)this + 7);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 4,
    v2,
    v3,
    v4);
}
