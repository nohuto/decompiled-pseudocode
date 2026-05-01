/*
 * XREFs of ?GetRuntimeClassName@GammaFlashAsyncOperation@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18034A530
 * Callers:
 *     ?GetRuntimeClassName@GammaFlashAsyncOperation@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18034A560 (-GetRuntimeClassName@GammaFlashAsyncOperation@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall GammaFlashAsyncOperation::GetRuntimeClassName(GammaFlashAsyncOperation *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Foundation.IAsyncAction", 0x1Fu, a2);
}
