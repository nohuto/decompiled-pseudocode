/*
 * XREFs of UsbhGetNextMsOs20Descriptor @ 0x140043050
 * Callers:
 *     UsbhParseAndInstallRegistryValueDescriptors @ 0x140043398 (UsbhParseAndInstallRegistryValueDescriptors.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x14005BED0 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x14005C040 (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x14005C260 (UsbhValidateMsOs20FunctionSubset.c)
 * Callees:
 *     UsbhValidateMsOs20CommonDescriptor @ 0x140043514 (UsbhValidateMsOs20CommonDescriptor.c)
 */

char __fastcall UsbhGetNextMsOs20Descriptor(char *a1, unsigned __int16 **a2, __int64 a3)
{
  unsigned __int16 *v3; // r9
  unsigned __int16 **v4; // r10
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // ax
  bool v7; // cf
  char *v8; // rdx
  unsigned __int16 *v9; // rdx

  v3 = *a2;
  v4 = a2;
  LOWORD(a3) = 1;
  v5 = (*a2)[1];
  v6 = *v3;
  if ( v5 == 2 || v5 == 1 )
  {
    if ( v6 < 8u )
      goto LABEL_10;
    v6 = v3[3];
    v7 = v6 < 0xCu;
  }
  else
  {
    v7 = v6 < 4u;
  }
  if ( v7 )
    goto LABEL_10;
  v8 = (char *)v3 + v6;
  if ( v8 == a1 )
  {
LABEL_11:
    *v4 = 0LL;
    return a3;
  }
  if ( !(unsigned __int8)UsbhValidateMsOs20CommonDescriptor(a1, v8, a3) )
  {
LABEL_10:
    LOBYTE(a3) = 0;
    goto LABEL_11;
  }
  *v4 = v9;
  return a3;
}
