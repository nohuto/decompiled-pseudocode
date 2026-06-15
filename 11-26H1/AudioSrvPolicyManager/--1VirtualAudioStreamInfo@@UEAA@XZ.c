/*
 * XREFs of ??1VirtualAudioStreamInfo@@UEAA@XZ @ 0x1800460CC
 * Callers:
 *     ??_EVirtualAudioStreamInfo@@UEAAPEAXI@Z @ 0x1800461F0 (--_EVirtualAudioStreamInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall VirtualAudioStreamInfo::~VirtualAudioStreamInfo(VirtualAudioStreamInfo *this)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
