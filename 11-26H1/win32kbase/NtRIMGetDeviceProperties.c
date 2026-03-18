/*
 * XREFs of NtRIMGetDeviceProperties @ 0x14016D2A0
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDeviceProperties @ 0x14016D2C0 (RIMGetDeviceProperties.c)
 */

__int64 __fastcall NtRIMGetDeviceProperties(__int64 a1, __int64 a2, __int64 a3)
{
  return RIMGetDeviceProperties(a1, a2, a3, 1LL);
}
