/*
 * XREFs of ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x14008D0F8
 * Callers:
 *     RIMSetDeviceInputMode @ 0x1401BC3F0 (RIMSetDeviceInputMode.c)
 * Callees:
 *     RIMSuppressAllActiveContacts @ 0x14007B620 (RIMSuppressAllActiveContacts.c)
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 */

void __fastcall rimInvalidateInputs(struct RIMDEV *a1)
{
  __int64 v2; // rdi
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_QWORD *)a1 + 40);
  if ( (*((_DWORD *)a1 + 46) & 0x80u) != 0 )
    RIMSuppressAllActiveContacts(*((struct RawInputManagerObject **)a1 + 40), *((_QWORD *)a1 + 57), 0x400u);
  if ( (*((_DWORD *)a1 + 42) & 0x10000) != 0 )
  {
    v3[0] = *(_QWORD *)(v2 + 72);
    v3[1] = *((_QWORD *)a1 + 2);
    SendMessageTo(9, (int)v3, 16);
  }
}
