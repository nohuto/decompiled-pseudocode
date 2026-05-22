/*
 * XREFs of ?Initialize@ConsumerControlManager@@AEAAJXZ @ 0x1800E52B8
 * Callers:
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800E51E4 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800898D8 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800E5790 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 */

__int64 __fastcall ConsumerControlManager::Initialize(ULONG_PTR dwData)
{
  int v2; // eax
  unsigned int v3; // ebx
  HMODULE *v5; // rsi
  const char *v6; // r9
  signed int LastError; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(dwData + 120));
  v2 = CoreUICreate(dwData + 120);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  v5 = (HMODULE *)(dwData + 88);
  if ( !GetModuleHandleExW(4u, (LPCWSTR)ConsumerControlManager::WorkerThreadProcThunk, (HMODULE *)(dwData + 88)) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x33,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
             v6);
  _InterlockedIncrement((volatile signed __int32 *)(dwData + 8));
  _InterlockedExchange64(
    (volatile __int64 *)(dwData + 96),
    (__int64)CreateThread(0LL, 0LL, ConsumerControlManager::WorkerThreadProcThunk, (LPVOID)dwData, 0, 0LL));
  if ( !std::_Atomic_storage<unsigned __int64,8>::load(dwData + 96) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    FreeLibrary(*v5);
    *v5 = 0LL;
    ConsumerControlManager::Release(dwData);
    return v3;
  }
  return 0LL;
}
