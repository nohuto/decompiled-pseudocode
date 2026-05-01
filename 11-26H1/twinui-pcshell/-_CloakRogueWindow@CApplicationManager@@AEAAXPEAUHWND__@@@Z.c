/*
 * XREFs of ?_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z @ 0x180218F9C
 * Callers:
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800AEE34 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1801E6860 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x1801EB0BC (-_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z.c)
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
