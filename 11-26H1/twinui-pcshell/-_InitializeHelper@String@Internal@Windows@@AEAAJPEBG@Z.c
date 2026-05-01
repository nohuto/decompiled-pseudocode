/*
 * XREFs of ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18008984C
 * Callers:
 *     ?MangleAndInitializeName@LightweightProperty@LightweightPropertySet@@QEAAJPEBG@Z @ 0x180088F90 (-MangleAndInitializeName@LightweightProperty@LightweightPropertySet@@QEAAJPEBG@Z.c)
 *     ?Initialize@GameDVR_OutputDebug@@SAJXZ @ 0x1800C6B18 (-Initialize@GameDVR_OutputDebug@@SAJXZ.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x18010F8D8 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 *     ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x1801C5900 (-s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::_InitializeHelper(HSTRING *this, const unsigned __int16 *a2)
{
  unsigned __int64 v3; // rdx
  HRESULT v5; // ebx
  HSTRING v6; // rcx
  HSTRING string; // [rsp+40h] [rbp+18h] BYREF

  string = 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 > 0xFFFFFFFF )
  {
    return (unsigned int)-2147024362;
  }
  else
  {
    v5 = WindowsCreateString(a2, v3, &string);
    if ( v5 >= 0 )
    {
      v6 = *this;
      *this = string;
      WindowsDeleteString(v6);
    }
  }
  return (unsigned int)v5;
}
