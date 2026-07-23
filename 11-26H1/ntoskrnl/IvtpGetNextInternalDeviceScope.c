/*
 * XREFs of IvtpGetNextInternalDeviceScope @ 0x14052DB54
 * Callers:
 *     IvtIommuFindDevice @ 0x1405B1DE8 (IvtIommuFindDevice.c)
 * Callees:
 *     DmrGetNextDeviceScope @ 0x1405B2894 (DmrGetNextDeviceScope.c)
 */

__int64 __fastcall IvtpGetNextInternalDeviceScope(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 280);
  v4 = v2 + *(unsigned int *)(a1 + 256);
  if ( v4 > v2 )
    return DmrGetNextDeviceScope(*(_QWORD *)(a1 + 280), v4, a2);
  else
    return 0LL;
}
