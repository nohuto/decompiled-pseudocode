/*
 * XREFs of ?_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z @ 0x180228104
 * Callers:
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800D8E98 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1801F0B58 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x1801F1580 (-_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_CloakRogueWindow(CApplicationManager *this, HWND a2)
{
  (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
    CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
    a2,
    1LL);
}
