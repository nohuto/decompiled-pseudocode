/*
 * XREFs of ?Initialize@String@Internal@Windows@@QEAAJPEBGI@Z @ 0x1801B8D6C
 * Callers:
 *     ?GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x18010FECC (-GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVS.c)
 *     ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x180111630 (-GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVS.c)
 *     ?RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z @ 0x180140B9C (-RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z.c)
 *     ?RuntimeClassInitialize@CProtocolActivatedEventArgs@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z @ 0x1806530D8 (-RuntimeClassInitialize@CProtocolActivatedEventArgs@@QEAAJPEAUIUriRuntimeClass@Foundation@Window.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::Initialize(HSTRING *this, const unsigned __int16 *a2, UINT32 a3)
{
  HRESULT v4; // edi
  HSTRING v5; // rcx
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = 0LL;
  v4 = WindowsCreateString(a2, a3, &string);
  if ( v4 >= 0 )
  {
    v5 = *this;
    *this = string;
    WindowsDeleteString(v5);
  }
  return (unsigned int)v4;
}
