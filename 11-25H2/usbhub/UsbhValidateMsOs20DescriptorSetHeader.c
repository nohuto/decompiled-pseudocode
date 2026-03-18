/*
 * XREFs of UsbhValidateMsOs20DescriptorSetHeader @ 0x14005BC20
 * Callers:
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x14005B900 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x14005BA6C (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x14005BC80 (UsbhValidateMsOs20FunctionSubset.c)
 * Callees:
 *     Log @ 0x14001C5D0 (Log.c)
 */

char __fastcall UsbhValidateMsOs20DescriptorSetHeader(__int64 a1, _DWORD *a2, _WORD *a3)
{
  if ( (*a2 & 2) != 0 )
  {
    Log(a1, 256, 1447318320, 0LL, 0LL);
    return 0;
  }
  if ( *a3 != 10 )
  {
    Log(a1, 256, 1447318321, (unsigned __int16)*a3, 0LL);
    return 0;
  }
  *a2 |= 2u;
  return 1;
}
