/*
 * XREFs of ??1ResizeControllerHost@@UEAA@XZ @ 0x1801522E4
 * Callers:
 *     ??_EResizeControllerHost@@UEAAPEAXI@Z @ 0x180152310 (--_EResizeControllerHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall ResizeControllerHost::~ResizeControllerHost(ResizeControllerHost *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 4,
    v2,
    v3,
    v4);
}
