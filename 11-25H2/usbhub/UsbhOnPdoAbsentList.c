/*
 * XREFs of UsbhOnPdoAbsentList @ 0x140047E60
 * Callers:
 *     Usbh_PdoRemove_PdoEvent @ 0x14004986C (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140049AB8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhFindListPdo @ 0x140046EB8 (UsbhFindListPdo.c)
 */

char __fastcall UsbhOnPdoAbsentList(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax

  v4 = FdoExt(a1);
  return UsbhFindListPdo(a1, a2, (_QWORD *)v4 + 605);
}
