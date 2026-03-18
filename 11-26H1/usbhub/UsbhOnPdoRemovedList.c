/*
 * XREFs of UsbhOnPdoRemovedList @ 0x1400479EC
 * Callers:
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x14004964C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhFindListPdo @ 0x1400469F8 (UsbhFindListPdo.c)
 */

char __fastcall UsbhOnPdoRemovedList(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax

  v4 = FdoExt(a1);
  return UsbhFindListPdo(a1, a2, (_QWORD *)v4 + 603);
}
