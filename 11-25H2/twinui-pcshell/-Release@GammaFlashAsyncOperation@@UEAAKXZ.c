/*
 * XREFs of ?Release@GammaFlashAsyncOperation@@UEAAKXZ @ 0x18034DD00
 * Callers:
 *     ?Release@GammaFlashAsyncOperation@@W7EAAKXZ @ 0x18034DD10 (-Release@GammaFlashAsyncOperation@@W7EAAKXZ.c)
 *     ?Release@GammaFlashAsyncOperation@@WBA@EAAKXZ @ 0x18034DD20 (-Release@GammaFlashAsyncOperation@@WBA@EAAKXZ.c)
 *     ?Release@GammaFlashAsyncOperation@@WFI@EAAKXZ @ 0x18034DD30 (-Release@GammaFlashAsyncOperation@@WFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall GammaFlashAsyncOperation::Release(GammaFlashAsyncOperation *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IAsyncAction,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const c_gammaFlashAsyncOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::Release();
}
