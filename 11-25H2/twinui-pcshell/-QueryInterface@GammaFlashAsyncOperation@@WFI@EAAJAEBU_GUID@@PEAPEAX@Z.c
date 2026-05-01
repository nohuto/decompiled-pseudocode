/*
 * XREFs of ?QueryInterface@GammaFlashAsyncOperation@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18034D4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GammaFlashAsyncOperation::QueryInterface(__int64 a1, const struct _GUID *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IAsyncAction,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const c_gammaFlashAsyncOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::QueryInterface(
           a1 - 88,
           a2,
           a3);
}
