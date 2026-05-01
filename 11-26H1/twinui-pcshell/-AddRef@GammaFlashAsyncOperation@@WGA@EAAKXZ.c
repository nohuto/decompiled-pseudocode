/*
 * XREFs of ?AddRef@GammaFlashAsyncOperation@@WGA@EAAKXZ @ 0x180345640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GammaFlashAsyncOperation::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IAsyncAction,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const c_gammaFlashAsyncOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::AddRef(
           a1 - 96,
           a2);
}
