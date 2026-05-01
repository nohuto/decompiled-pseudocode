/*
 * XREFs of ?UnstashPendingShow@CSingleViewShellExperience@@AEAA?AW4ShowOptions@1@XZ @ 0x180023140
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180022B60 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180174988 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSingleViewShellExperience::UnstashPendingShow(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // ecx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 68);
  v2 = v1 & 1;
  if ( (v1 & 2) != 0 )
    v2 |= 2u;
  if ( (v1 & 4) != 0 )
    v2 |= 4u;
  result = v2 | 8;
  if ( (v1 & 8) == 0 )
    return v2;
  return result;
}
