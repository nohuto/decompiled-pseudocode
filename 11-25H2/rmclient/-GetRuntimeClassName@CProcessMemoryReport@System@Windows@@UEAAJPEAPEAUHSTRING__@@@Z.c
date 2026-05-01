/*
 * XREFs of ?GetRuntimeClassName@CProcessMemoryReport@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800188C0
 * Callers:
 *     ?GetRuntimeClassName@CProcessMemoryReport@System@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800188F0 (-GetRuntimeClassName@CProcessMemoryReport@System@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::System::CProcessMemoryReport::GetRuntimeClassName(
        Windows::System::CProcessMemoryReport *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.System.ProcessMemoryReport", 0x22u, a2);
}
