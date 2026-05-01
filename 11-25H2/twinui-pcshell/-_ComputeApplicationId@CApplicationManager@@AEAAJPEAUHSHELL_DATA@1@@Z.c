/*
 * XREFs of ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x1801F1580
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18003E8AC (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800B6C10 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800D9130 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18014445C (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z @ 0x180228104 (-_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CApplicationManager::_ComputeApplicationId(
        CApplicationManager *this,
        CallerIdentity **a2,
        unsigned __int16 **a3)
{
  int ImmersiveAppIdFromWindow; // edi
  HWND v5; // rdx
  __int64 v7; // rcx
  HWND v8; // rdx
  HWND v9; // rdx
  HWND v10; // rcx
  CApplicationManager *v11; // rcx
  CApplicationManager *pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  pvAttribute = this;
  ImmersiveAppIdFromWindow = 0;
  v5 = (HWND)(a2 + 4);
  if ( !*(_QWORD *)v5 && *((_DWORD *)a2 + 4) == 2 && (unsigned __int64)*a2 <= 0x1D )
  {
    v7 = 604110848LL;
    if ( _bittest64(&v7, (unsigned __int64)*a2) )
    {
      ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(a2[1], v5, a3);
      if ( ImmersiveAppIdFromWindow < 0
        && CApplicationManagerUtility::IsValidWindow(a2[1], v8)
        && !CApplicationManagerUtility::IsOwnedWindow(a2[1], v9) )
      {
        v10 = (HWND)a2[1];
        LODWORD(pvAttribute) = 0;
        if ( DwmGetWindowAttribute(v10, 0xEu, &pvAttribute, 4u) >= 0 && !(_DWORD)pvAttribute )
          CApplicationManager::_CloakRogueWindow(v11, (HWND)a2[1]);
      }
    }
  }
  return (unsigned int)ImmersiveAppIdFromWindow;
}
