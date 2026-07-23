/*
 * XREFs of NtSetDefaultUILanguage @ 0x140B202C0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetPendingUILanguage @ 0x140B202E0 (ExpSetPendingUILanguage.c)
 */

NTSTATUS __cdecl NtSetDefaultUILanguage(LANGID DefaultUILanguageId)
{
  if ( DefaultUILanguageId )
    return 0;
  else
    return ExpSetPendingUILanguage();
}
