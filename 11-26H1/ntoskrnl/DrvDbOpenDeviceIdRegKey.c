/*
 * XREFs of DrvDbOpenDeviceIdRegKey @ 0x140B24C04
 * Callers:
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x14089DDB8 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbDispatchDeviceId @ 0x14091B3D0 (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x14091B5B8 (DrvDbGetDeviceIdMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDeviceIdRegKey(_QWORD *a1, wchar_t *a2, unsigned int a3, char a4, __int64 a5, _DWORD *a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, a3, a4, a5, a6, 0LL);
}
