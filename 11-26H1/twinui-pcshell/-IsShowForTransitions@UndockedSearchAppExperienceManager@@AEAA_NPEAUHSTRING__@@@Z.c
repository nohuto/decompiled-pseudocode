/*
 * XREFs of ?IsShowForTransitions@UndockedSearchAppExperienceManager@@AEAA_NPEAUHSTRING__@@@Z @ 0x180229A3C
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18023F0A0 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 * Callees:
 *     <none>
 */

bool __fastcall UndockedSearchAppExperienceManager::IsShowForTransitions(
        UndockedSearchAppExperienceManager *this,
        HSTRING a2)
{
  const wchar_t *StringRawBuffer; // rax
  bool result; // al
  UndockedSearchAppExperienceManager *length; // [rsp+30h] [rbp+8h] BYREF

  length = this;
  result = a2
        && (LODWORD(length) = 0, (StringRawBuffer = WindowsGetStringRawBuffer(a2, (UINT32 *)&length)) != 0LL)
        && wcsstr(StringRawBuffer, L"StartMode=AppTransition") != 0LL;
  return result;
}
