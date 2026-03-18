/*
 * XREFs of WnfPublishUsbPartnerDualRoleFeatures @ 0x1400601A0
 * Callers:
 *     UsbhSetupDevice @ 0x14001ADE8 (UsbhSetupDevice.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x14005D220 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x14005D4E0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 */

__int64 __fastcall WnfPublishUsbPartnerDualRoleFeatures(__int64 a1, char a2, int a3)
{
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  char v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+49h] [rbp-1Fh]

  v4 = a1;
  v5 = a2;
  v6 = a3;
  return ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, &v4, 13LL, 0LL, 0LL, 0, 0);
}
