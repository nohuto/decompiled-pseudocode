/*
 * XREFs of RIMCmIsContactSuppressedByArbitrationOnly @ 0x14007613C
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1400752B0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x14007AAC0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1400FA16C (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmIsContactSuppressedByArbitrationOnly(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 8);
  result = 1LL;
  if ( (v1 & 1) == 0 || (v1 & 0xFFFFFFFE) != 0 )
    return 0LL;
  return result;
}
