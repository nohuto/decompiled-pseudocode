/*
 * XREFs of ACPIAnsiStringToWideHelper @ 0x14003AE54
 * Callers:
 *     ACPIGetConvertToInstanceIDWide @ 0x14003A130 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x14003A378 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x14003A76C (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIGetConvertToPnpIDWide @ 0x14003AC14 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x14004B568 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x14004C994 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x14004CE50 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x14004F0C8 (ACPIGetConvertToStringWide.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x140061920 (ACPIDeviceIdMutiStringMatchCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIAnsiStringToWideHelper(_WORD *a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rdx
  __int64 result; // rax

  if ( a1 && a2 > 2 )
  {
    for ( i = a2 >> 1; --i; a1[i] = *((char *)a1 + i) )
      ;
    result = (unsigned int)*(char *)a1;
    *a1 = *(char *)a1;
  }
  return result;
}
