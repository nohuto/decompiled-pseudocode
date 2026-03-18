/*
 * XREFs of ?KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1401C6C20
 * Callers:
 *     xxxKENLSProcs @ 0x140125100 (xxxKENLSProcs.c)
 * Callees:
 *     GetModificationNumber @ 0x1400E861C (GetModificationNumber.c)
 *     GetModifierBits @ 0x1400E863C (GetModifierBits.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CC14 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 */

__int64 __fastcall KbdNlsFuncTypeNormal(struct _VK_TO_FUNCTION_TABLE *a1, struct tagKE *a2, unsigned __int64 a3)
{
  __int64 UserSessionState; // rax
  unsigned __int16 ModifierBits; // ax
  unsigned __int16 ModificationNumber; // ax

  if ( !a2 )
    return 0LL;
  UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
  ModifierBits = GetModifierBits((char **)&off_1402647B8, UserSessionState + 14392);
  ModificationNumber = GetModificationNumber((__int64)&off_1402647B8, ModifierBits);
  if ( ModificationNumber == 15 )
    return 0LL;
  else
    return GenerateNlsVkKey(a1, ModificationNumber, a2, a3);
}
