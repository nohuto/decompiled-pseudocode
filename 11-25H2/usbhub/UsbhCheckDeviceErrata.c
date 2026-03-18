/*
 * XREFs of UsbhCheckDeviceErrata @ 0x14005A610
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x140018314 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhApplyDeviceFix @ 0x14005A4B8 (UsbhApplyDeviceFix.c)
 *     UsbhGetDeviceFlags @ 0x14005AB40 (UsbhGetDeviceFlags.c)
 */

char *__fastcall UsbhCheckDeviceErrata(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  int v5; // ebx
  char *result; // rax
  int v7; // r8d
  __int64 v8; // [rsp+90h] [rbp+18h] BYREF

  v8 = 0LL;
  v4 = PdoExt(a2);
  if ( ((*((_WORD *)v4 + 701) - 256) & 0xFFEF) == 0 )
    v4[358] &= ~0x200u;
  UsbhGetDeviceFlags(v4 + 350, &v8, 0LL);
  v5 = v8;
  result = usbfile_dq_c;
  if ( (v8 & 1) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 1, usbfile_dq_c, 2620, 0);
    v7 = 1;
  }
  else
  {
    if ( (v8 & 2) == 0 )
      goto LABEL_8;
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 2, usbfile_dq_c, 2627, 0);
    v7 = 2;
  }
  UsbhApplyDeviceFix(a1, a2, v7);
  result = usbfile_dq_c;
LABEL_8:
  if ( (v5 & 0x40) != 0 )
    v4[358] |= 0x800u;
  if ( (v5 & 4) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 3, usbfile_dq_c, 2645, 0);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 3);
  }
  if ( (v5 & 8) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 10, usbfile_dq_c, 2656, 0);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 10);
  }
  if ( (v5 & 0x10) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 5, usbfile_dq_c, 2667, 0);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 5);
  }
  if ( (v5 & 0x20) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 7, usbfile_dq_c, 2678, 0);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 7);
  }
  if ( (*(_QWORD *)&v5 & 0x200000LL) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 11, usbfile_dq_c, 2688, 0);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 11);
  }
  if ( (v5 & 0x8000000) != 0 )
  {
    UsbhException(a1, *((_WORD *)v4 + 714), 120, v4 + 350, 0x12u, 0, 12, usbfile_dq_c, 2698, 0);
    return (char *)UsbhApplyDeviceFix(a1, a2, 12);
  }
  return result;
}
