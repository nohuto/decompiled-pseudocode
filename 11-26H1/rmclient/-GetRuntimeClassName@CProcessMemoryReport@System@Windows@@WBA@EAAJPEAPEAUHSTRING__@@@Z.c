/*
 * XREFs of ?GetRuntimeClassName@CProcessMemoryReport@System@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180017890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::System::CProcessMemoryReport::GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  return Windows::System::CProcessMemoryReport::GetRuntimeClassName(
           (Windows::System::CProcessMemoryReport *)(a1 - 16),
           a2);
}
