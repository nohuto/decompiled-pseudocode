/*
 * XREFs of ?GetIids@CMemoryManager@System@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180014ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CMemoryManager::GetIids(__int64 a1, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(
           a1 - 48,
           a2,
           a3);
}
