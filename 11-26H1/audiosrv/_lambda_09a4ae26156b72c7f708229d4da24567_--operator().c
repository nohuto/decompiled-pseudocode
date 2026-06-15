/*
 * XREFs of _lambda_09a4ae26156b72c7f708229d4da24567_::operator() @ 0x18013561C
 * Callers:
 *     ?DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003CAA8 (-DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescript.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     CreateAudioMediaType @ 0x1800B50F4 (CreateAudioMediaType.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall lambda_09a4ae26156b72c7f708229d4da24567_::operator()(__int64 a1, __int64 a2, DWORD a3, WORD a4)
{
  bool v5; // di
  int v6; // ebx
  IAudioMediaType *ppIAudioMediaType; // [rsp+30h] [rbp-50h] BYREF
  IAudioMediaType *v9; // [rsp+38h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h] BYREF
  WAVEFORMATEX v11; // [rsp+48h] [rbp-38h] BYREF
  WAVEFORMATEX pAudioFormat; // [rsp+60h] [rbp-20h] BYREF

  v5 = 0;
  v9 = 0LL;
  ppIAudioMediaType = 0LL;
  pAudioFormat.wFormatTag = 3;
  pAudioFormat.nChannels = a4;
  pAudioFormat.nSamplesPerSec = a3;
  pAudioFormat.nAvgBytesPerSec = 4 * a3 * a4;
  pAudioFormat.nBlockAlign = 4 * a4;
  *(_DWORD *)&pAudioFormat.wBitsPerSample = 32;
  *(_DWORD *)&v11.wFormatTag = 131075;
  v11.nSamplesPerSec = a3;
  v11.nAvgBytesPerSec = 8 * a3;
  *(_DWORD *)&v11.nBlockAlign = 2097160;
  v11.cbSize = 0;
  CreateAudioMediaType(&pAudioFormat, 0x12u, &ppIAudioMediaType);
  CreateAudioMediaType(&v11, v11.cbSize + 18, &v9);
  if ( ppIAudioMediaType && v9 )
  {
    v10 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, IAudioMediaType *, IAudioMediaType *, __int64 *))(*(_QWORD *)a2 + 56LL))(
           a2,
           v9,
           ppIAudioMediaType,
           &v10);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
    v5 = v6 == 0;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v9);
  return v5;
}
