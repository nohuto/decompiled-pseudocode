/*
 * XREFs of ?GetMdmIntPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SAHPEBGH@Z @ 0x180206E50
 * Callers:
 *     ?UpdateClipboardHistoryAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180206D78 (-UpdateClipboardHistoryAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TextInputMdmPolicyHelper::GetMdmIntPolicyValue(
        const unsigned __int16 *a1,
        unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v4 = a2;
  if ( (int)PolicyManager_GetPolicyInt(L"TextInput", a1, &v4) >= 0 )
    return v4;
  return v2;
}
