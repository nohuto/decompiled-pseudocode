/*
 * XREFs of ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x18009960C
 * Callers:
 *     ?GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z @ 0x18006A1F0 (-GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z.c)
 *     ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1801116D0 (-Disconnect@AlpcPort@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall AlpcMessage::Cancel(AlpcMessage *this, void *a2)
{
  *((_WORD *)this + 2) &= ~0x2000u;
  NtAlpcCancelMessage(a2, 0LL, (char *)this + 408);
}
