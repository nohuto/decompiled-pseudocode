/*
 * XREFs of UsbhValidateMsOs20CommonDescriptor @ 0x140043514
 * Callers:
 *     UsbhGetNextMsOs20Descriptor @ 0x140043050 (UsbhGetNextMsOs20Descriptor.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x14005BED0 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x14005C040 (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x14005C260 (UsbhValidateMsOs20FunctionSubset.c)
 * Callees:
 *     <none>
 */

bool __fastcall UsbhValidateMsOs20CommonDescriptor(unsigned __int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // rax
  bool result; // al

  result = (unsigned __int64)a2 <= a1
        && (unsigned __int64)(a2 + 2) <= a1
        && (v2 = *a2, (unsigned int)v2 >= 4)
        && (unsigned __int64)a2 + v2 <= a1;
  return result;
}
