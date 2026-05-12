/*
 * XREFs of RaidUnitGetPowerCycleCount @ 0x14004F750
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1401BB140 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     PortRegistryReadDeviceKey @ 0x1401B5C34 (PortRegistryReadDeviceKey.c)
 */

__int64 __fastcall RaidUnitGetPowerCycleCount(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx
  struct _UNICODE_STRING v4; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int KeyHandle; // [rsp+70h] [rbp+20h] BYREF
  int v7; // [rsp+78h] [rbp+28h] BYREF
  __int64 v8; // [rsp+80h] [rbp+30h] BYREF

  KeyHandle = 4;
  v8 = (__int64)&v7;
  DestinationString = 0LL;
  v4 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v4, L"PowerCycleCountOverride");
  result = PortRegistryReadDeviceKey(
             *(_QWORD *)(a1 + 8),
             (int)&DestinationString,
             (int)&v4,
             4,
             (__int64)&v8,
             &KeyHandle);
  v3 = 0;
  if ( (int)result < 0 )
  {
    RtlInitUnicodeString(&v4, L"PowerCycleCount");
    result = PortRegistryReadDeviceKey(
               *(_QWORD *)(a1 + 8),
               (int)&DestinationString,
               (int)&v4,
               4,
               (__int64)&v8,
               &KeyHandle);
    if ( (int)result >= 0 )
      v3 = v7;
  }
  else
  {
    v3 = v7;
  }
  *(_DWORD *)(a1 + 3352) = v3;
  return result;
}
