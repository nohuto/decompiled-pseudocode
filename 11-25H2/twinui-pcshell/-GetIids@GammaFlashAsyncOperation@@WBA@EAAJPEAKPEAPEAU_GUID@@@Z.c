/*
 * XREFs of ?GetIids@GammaFlashAsyncOperation@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803463C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GammaFlashAsyncOperation::GetIids(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IAsyncAction,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const c_gammaFlashAsyncOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::GetIids(
           a1 - 16,
           a2,
           a3);
}
