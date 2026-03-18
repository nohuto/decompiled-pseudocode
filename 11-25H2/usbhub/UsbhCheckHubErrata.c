/*
 * XREFs of UsbhCheckHubErrata @ 0x14005A984
 * Callers:
 *     UsbhInitialize @ 0x14003D6A0 (UsbhInitialize.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhGetRegUsbHubFlags @ 0x14005205C (UsbhGetRegUsbHubFlags.c)
 *     UsbhApplyHubFix @ 0x14005A56C (UsbhApplyHubFix.c)
 *     UsbhGetDeviceFlags @ 0x14005AB40 (UsbhGetDeviceFlags.c)
 */

void __fastcall UsbhCheckHubErrata(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rbp
  __int64 *v5; // rsi
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  LOBYTE(a3) = *(_BYTE *)(a1 + 2560);
  v3 = (const void *)(a1 + 2540);
  v6 = 0LL;
  LOBYTE(a3) = a3 & 1;
  UsbhGetDeviceFlags(a1 + 2540, &v6, a3);
  v5 = (__int64 *)(a1 + 1200);
  if ( (v6 & 0x80u) != 0LL )
  {
    UsbhException(*v5, 0, 133, v3, 0x12u, 0, 6, usbfile_dq_c, 2730, 0);
    UsbhApplyHubFix((_DWORD *)a1, 6);
  }
  if ( (v6 & 0x100) != 0 )
  {
    UsbhException(*v5, 0, 133, v3, 0x12u, 0, 8, usbfile_dq_c, 2738, 0);
    UsbhApplyHubFix((_DWORD *)a1, 8);
  }
  if ( (v6 & 0x200) != 0 )
  {
    UsbhException(*v5, 0, 133, v3, 0x12u, 0, 9, usbfile_dq_c, 2747, 0);
    UsbhApplyHubFix((_DWORD *)a1, 9);
  }
  if ( (v6 & 0x400000000LL) != 0 )
  {
    UsbhException(*v5, 0, 133, v3, 0x12u, 0, 13, usbfile_dq_c, 2755, 0);
    UsbhApplyHubFix((_DWORD *)a1, 13);
  }
  UsbhGetRegUsbHubFlags((unsigned __int16 *)a1);
}
