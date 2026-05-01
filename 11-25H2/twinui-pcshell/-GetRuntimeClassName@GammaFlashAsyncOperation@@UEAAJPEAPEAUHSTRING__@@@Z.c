/*
 * XREFs of ?GetRuntimeClassName@GammaFlashAsyncOperation@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803472A0
 * Callers:
 *     ?GetRuntimeClassName@GammaFlashAsyncOperation@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1803472D0 (-GetRuntimeClassName@GammaFlashAsyncOperation@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall GammaFlashAsyncOperation::GetRuntimeClassName(GammaFlashAsyncOperation *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Foundation.IAsyncAction", 0x1Fu, a2);
}
