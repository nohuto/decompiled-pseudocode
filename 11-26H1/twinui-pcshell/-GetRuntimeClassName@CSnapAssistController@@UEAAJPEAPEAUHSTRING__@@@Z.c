/*
 * XREFs of ?GetRuntimeClassName@CSnapAssistController@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1805A7020
 * Callers:
 *     ?GetRuntimeClassName@CSnapAssistController@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1805A7050 (-GetRuntimeClassName@CSnapAssistController@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CSnapAssistController@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1805A7060 (-GetRuntimeClassName@CSnapAssistController@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CSnapAssistController::GetRuntimeClassName(CSnapAssistController *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.SnapAssistController", 0x2Bu, a2);
}
