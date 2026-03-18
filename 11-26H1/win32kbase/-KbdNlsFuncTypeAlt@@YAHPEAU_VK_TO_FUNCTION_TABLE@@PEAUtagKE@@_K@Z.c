/*
 * XREFs of ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x14021CC70
 * Callers:
 *     xxxKENLSProcs @ 0x140125100 (xxxKENLSProcs.c)
 * Callees:
 *     GetModificationNumber @ 0x1400E861C (GetModificationNumber.c)
 *     GetModifierBits @ 0x1400E863C (GetModifierBits.c)
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CBC0 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CC14 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 */

__int64 __fastcall KbdNlsFuncTypeAlt(struct _VK_TO_FUNCTION_TABLE *a1, struct tagKE *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 UserSessionState; // rax
  unsigned __int16 ModifierBits; // ax
  unsigned __int16 ModificationNumber; // bp
  char v10; // al
  unsigned int NlsVkKey; // eax
  unsigned int NlsVkAltKey; // eax

  v3 = 0;
  if ( !a2 || !a1 )
    return 0LL;
  UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
  ModifierBits = GetModifierBits((char **)&off_1402647B8, UserSessionState + 14392);
  ModificationNumber = GetModificationNumber((__int64)&off_1402647B8, ModifierBits);
  if ( ModificationNumber != 15 )
  {
    v10 = *((_BYTE *)a1 + 2);
    if ( *((__int16 *)a2 + 1) < 0 )
    {
      if ( v10 == 2 )
      {
        NlsVkAltKey = GenerateNlsVkAltKey(a1, ModificationNumber, a2, a3);
        *((_BYTE *)a1 + 2) = 1;
      }
      else
      {
        return (unsigned int)GenerateNlsVkKey(a1, ModificationNumber, a2, a3);
      }
      return NlsVkAltKey;
    }
    else
    {
      if ( v10 == 2 )
        NlsVkKey = GenerateNlsVkAltKey(a1, ModificationNumber, a2, a3);
      else
        NlsVkKey = GenerateNlsVkKey(a1, ModificationNumber, a2, a3);
      v3 = NlsVkKey;
      if ( ((unsigned __int8)(1 << ModificationNumber) & *((_BYTE *)a1 + 3)) != 0 )
        *((_BYTE *)a1 + 2) = 2;
    }
  }
  return v3;
}
