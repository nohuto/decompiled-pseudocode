/*
 * XREFs of RIMCmIsContactSuppressedByArbitrationOnly @ 0x140105AF8
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x14002FD24 (rimProcessPointerDeviceButtonContact.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140030AA8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimProcessPointerDeviceContact @ 0x140184FF0 (rimProcessPointerDeviceContact.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1401DCE20 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
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
