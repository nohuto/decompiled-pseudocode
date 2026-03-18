/*
 * XREFs of UsbhCheckDeviceErrata @ 0x14005AB8C
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x140031854 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhApplyDeviceFix @ 0x14005AA34 (UsbhApplyDeviceFix.c)
 *     UsbhGetDeviceFlags @ 0x14005B0BC (UsbhGetDeviceFlags.c)
 */

char *__fastcall UsbhCheckDeviceErrata(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  __int16 v5; // ax
  int v6; // ebx
  char *result; // rax
  int v8; // r8d
  __int64 v9; // [rsp+90h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = PdoExt(a2);
  v5 = *((_WORD *)v4 + 701);
  if ( v5 == 256 || v5 == 272 )
    v4[358] &= ~0x200u;
  UsbhGetDeviceFlags(v4 + 350, &v9, 0LL);
  v6 = v9;
  result = usbfile_dq_c;
  if ( (v9 & 1) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 1, usbfile_dq_c, 2620, 0);
    v8 = 1;
  }
  else
  {
    if ( (v9 & 2) == 0 )
      goto LABEL_9;
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 2, usbfile_dq_c, 2627, 0);
    v8 = 2;
  }
  UsbhApplyDeviceFix(a1, a2, v8);
  result = usbfile_dq_c;
LABEL_9:
  if ( (v6 & 0x40) != 0 )
    v4[358] |= 0x800u;
  if ( (v6 & 4) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 3, usbfile_dq_c, 2645, 0);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 3);
  }
  if ( (v6 & 8) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 10, usbfile_dq_c, 2656, 0);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 10);
  }
  if ( (v6 & 0x10) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 5, usbfile_dq_c, 2667, 0);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 5);
  }
  if ( (v6 & 0x20) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 7, usbfile_dq_c, 2678, 0);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 7);
  }
  if ( (*(_QWORD *)&v6 & 0x200000LL) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 11, usbfile_dq_c, 2688, 0);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 11);
  }
  if ( (v6 & 0x8000000) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 12, usbfile_dq_c, 2698, 0);
    return (char *)UsbhApplyDeviceFix(a1, a2, 12);
  }
  return result;
}
