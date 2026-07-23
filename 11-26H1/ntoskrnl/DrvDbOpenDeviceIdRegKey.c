/*
 * XREFs of DrvDbOpenDeviceIdRegKey @ 0x140B270A4
 * Callers:
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x1408A41B8 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbDispatchDeviceId @ 0x140975E30 (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140976018 (DrvDbGetDeviceIdMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDeviceIdRegKey(__int64 *a1, __int64 a2, ACCESS_MASK a3, char a4, HANDLE *a5, _DWORD *a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, a3, a4, a5, a6, 0LL);
}
