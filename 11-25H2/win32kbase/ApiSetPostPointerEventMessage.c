/*
 * XREFs of ApiSetPostPointerEventMessage @ 0x140197520
 * Callers:
 *     rimNotifyPointerDeviceChangeClients @ 0x1401E6368 (rimNotifyPointerDeviceChangeClients.c)
 * Callees:
 *     PostPointerEventMessage @ 0x14023F1C4 (PostPointerEventMessage.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetPostPointerEventMessage(__int64 a1, __int64 a2, __int64 a3))(void)
{
  __int64 (*result)(void); // rax
  __int64 v6; // rdx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4624LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))PostPointerEventMessage(a1, v6, a3);
  }
  return result;
}
