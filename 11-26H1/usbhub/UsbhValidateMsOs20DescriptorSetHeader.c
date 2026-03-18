/*
 * XREFs of UsbhValidateMsOs20DescriptorSetHeader @ 0x14005C200
 * Callers:
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x14005BED0 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x14005C040 (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x14005C260 (UsbhValidateMsOs20FunctionSubset.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 */

char __fastcall UsbhValidateMsOs20DescriptorSetHeader(__int64 a1, _DWORD *a2, _WORD *a3)
{
  __int64 v3; // r9
  int v4; // r8d

  if ( (*a2 & 2) != 0 )
  {
    v3 = 0LL;
    v4 = 1447318320;
LABEL_3:
    Log(a1, 256, v4, v3, 0LL);
    return 0;
  }
  if ( *a3 != 10 )
  {
    v3 = (unsigned __int16)*a3;
    v4 = 1447318321;
    goto LABEL_3;
  }
  *a2 |= 2u;
  return 1;
}
