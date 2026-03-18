/*
 * XREFs of UsbhFindListPdo @ 0x140046EB8
 * Callers:
 *     UsbhOnPdoAbsentList @ 0x140047E60 (UsbhOnPdoAbsentList.c)
 *     UsbhOnPdoRemovedList @ 0x140047E9C (UsbhOnPdoRemovedList.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140049AB8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 */

char __fastcall UsbhFindListPdo(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *i; // r10
  _QWORD *v7; // r10
  __int64 v8; // r9

  PdoExt(a2);
  for ( i = (_QWORD *)*a3; i != a3; i = (_QWORD *)*v7 )
  {
    Log(a1, 4, 1685219121, (__int64)(i - 165), 0LL);
    if ( a2 == *(_QWORD *)(v8 + 840) )
      return 1;
  }
  return 0;
}
