/*
 * XREFs of UsbhSetPdoPowerState @ 0x140032544
 * Callers:
 *     UsbhPdoSetDx @ 0x14000E090 (UsbhPdoSetDx.c)
 *     UsbhPdoDevicePowerState @ 0x14000EBA4 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1400106D0 (UsbhPdoSetD0.c)
 *     UsbhPdoSystemPowerState @ 0x140030D54 (UsbhPdoSystemPowerState.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140049AB8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoSetD0_Finish @ 0x14004BED4 (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x14005D220 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

__int64 __fastcall UsbhSetPdoPowerState(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _DWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 result; // rax

  v7 = PdoExt(a2);
  FdoExt(*(_QWORD *)(a1 + 8));
  v8 = ((unsigned __int8)v7[2] + 1) & 7;
  v7[2] = v8;
  v8 *= 32LL;
  *(_DWORD *)((char *)v7 + v8 + 272) = a5;
  result = (unsigned int)v7[282];
  *(_DWORD *)((char *)v7 + v8 + 280) = a4;
  *(_DWORD *)((char *)v7 + v8 + 276) = result;
  v7[282] = a4;
  return result;
}
