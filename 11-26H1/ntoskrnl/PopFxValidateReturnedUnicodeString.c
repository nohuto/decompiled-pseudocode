/*
 * XREFs of PopFxValidateReturnedUnicodeString @ 0x1407D0E54
 * Callers:
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1407D0F30 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1407D1060 (PopPluginQuerySocSubsystemMetadata.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140478794 (RtlStringCbLengthW.c)
 */

char __fastcall PopFxValidateReturnedUnicodeString(unsigned __int16 *a1, __int64 a2, unsigned int a3)
{
  char v3; // r14
  const wchar_t *v4; // rsi
  char v6; // r11
  char v7; // dl
  size_t pcbLength; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (const wchar_t *)*((_QWORD *)a1 + 1);
  pcbLength = 0LL;
  if ( RtlStringCbLengthW(v4, a3, &pcbLength) >= 0 )
  {
    v7 = v6;
    if ( *a1 != pcbLength )
      return 0;
    return v7;
  }
  return v3;
}
