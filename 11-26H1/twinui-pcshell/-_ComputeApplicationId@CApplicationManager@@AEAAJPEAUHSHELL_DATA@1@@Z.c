/*
 * XREFs of ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x1801EB0BC
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800437F8 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180094858 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800AF0F4 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800C1C60 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z @ 0x180218F9C (-_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CApplicationManager::_ComputeApplicationId(
        CApplicationManager *this,
        CallerIdentity **a2,
        unsigned __int16 **a3)
{
  int ImmersiveAppIdFromWindow; // edi
  HWND v5; // rdx
  HWND v7; // rdx
  HWND v8; // rdx
  HWND v9; // rcx
  CApplicationManager *v10; // rcx
  CApplicationManager *pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  pvAttribute = this;
  ImmersiveAppIdFromWindow = 0;
  v5 = (HWND)(a2 + 4);
  if ( !*(_QWORD *)v5
    && *((_DWORD *)a2 + 4) == 2
    && (*a2 == (CallerIdentity *)17 || *a2 == (CallerIdentity *)26 || *a2 == (CallerIdentity *)29) )
  {
    ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(a2[1], v5, a3);
    if ( ImmersiveAppIdFromWindow < 0
      && CApplicationManagerUtility::IsValidWindow(a2[1], v7)
      && !CApplicationManagerUtility::IsOwnedWindow(a2[1], v8) )
    {
      v9 = (HWND)a2[1];
      LODWORD(pvAttribute) = 0;
      if ( DwmGetWindowAttribute(v9, 0xEu, &pvAttribute, 4u) >= 0 && !(_DWORD)pvAttribute )
        CApplicationManager::_CloakRogueWindow(v10, (HWND)a2[1]);
    }
  }
  return (unsigned int)ImmersiveAppIdFromWindow;
}
