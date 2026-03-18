/*
 * XREFs of ??_GCPropertySetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1400F22F0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA@XZ @ 0x1400F232C (--1-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA@XZ.c)
 */

char *__fastcall DirectComposition::CPropertySetMarshaler::`scalar deleting destructor'(char *Buffer, char a2)
{
  PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::~PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>(Buffer + 72);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(Buffer);
  return Buffer;
}
