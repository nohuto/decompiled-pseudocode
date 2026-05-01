/*
 * XREFs of ?Uninitialize@CApplicationFrameService@@UEAAJXZ @ 0x1802FF530
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x18023CFC8 (-StopMonitoring@CCrashDetector@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationFrameService::Uninitialize(CApplicationFrameService *this)
{
  CCrashDetector::StopMonitoring((CApplicationFrameService *)((char *)this + 160));
  if ( *((_DWORD *)this + 38) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 64LL))(*((_QWORD *)this + 17));
    *((_DWORD *)this + 38) = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 18);
  return 0LL;
}
