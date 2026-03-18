/*
 * XREFs of ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x140217E00
 * Callers:
 *     xxxKENLSProcs @ 0x1400FB8AC (xxxKENLSProcs.c)
 * Callees:
 *     GetModifierBits @ 0x1400F09F0 (GetModifierBits.c)
 *     GetModificationNumber @ 0x14010F83C (GetModificationNumber.c)
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140217D54 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140217DA8 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
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
  UserSessionState = W32GetUserSessionState(a1, a2);
  ModifierBits = GetModifierBits((unsigned __int8 **)&off_14025C8A0, UserSessionState + 14400);
  ModificationNumber = GetModificationNumber((__int64)&off_14025C8A0, ModifierBits);
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
