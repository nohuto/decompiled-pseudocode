/*
 * XREFs of ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x14014C410
 * Callers:
 *     RIMSetDeviceInputMode @ 0x140180708 (RIMSetDeviceInputMode.c)
 * Callees:
 *     RIMSuppressAllActiveContacts @ 0x14002E5A0 (RIMSuppressAllActiveContacts.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140067640 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

void __fastcall rimInvalidateInputs(struct RIMDEV *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  if ( (*((_DWORD *)a1 + 46) & 0x80u) != 0 )
    RIMSuppressAllActiveContacts(*((struct RawInputManagerObject **)a1 + 40), *((_QWORD *)a1 + 57), 0x400u);
  if ( (*((_DWORD *)a1 + 42) & 0x10000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    InputExtensibilityCallout::CoreMsgSendMessage(*(_QWORD *)(UserSessionState + 16408), 9);
  }
}
