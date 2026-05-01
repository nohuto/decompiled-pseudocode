/*
 * XREFs of ?GetIids@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803FE0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetIids(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveShellHookNotification,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListener,Microsoft::WRL::FtmBase>::GetIids(
           a1 - 24,
           a2,
           a3);
}
