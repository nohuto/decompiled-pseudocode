/*
 * XREFs of ?FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z @ 0x18018DD78
 * Callers:
 *     ?Initialize@GameDVR_OutputDebug@@SAJXZ @ 0x1800B27D0 (-Initialize@GameDVR_OutputDebug@@SAJXZ.c)
 *     ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x180111630 (-GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::FreeAndAssignOnSuccess(int a1, HSTRING a2, HSTRING *a3)
{
  HSTRING v4; // rcx

  if ( a1 >= 0 )
  {
    v4 = *a3;
    *a3 = a2;
    WindowsDeleteString(v4);
  }
  return (unsigned int)a1;
}
