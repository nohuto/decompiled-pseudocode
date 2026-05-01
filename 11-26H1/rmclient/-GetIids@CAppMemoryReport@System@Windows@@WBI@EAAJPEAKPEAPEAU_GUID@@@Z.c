/*
 * XREFs of ?GetIids@CAppMemoryReport@System@Windows@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800176B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::GetIids(__int64 a1, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::GetIids(
           a1 - 24,
           a2,
           a3);
}
