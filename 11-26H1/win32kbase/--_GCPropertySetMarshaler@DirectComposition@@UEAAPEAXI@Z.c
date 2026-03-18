/*
 * XREFs of ??_GCPropertySetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14013A150
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA@XZ @ 0x14013A18C (--1-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA@XZ.c)
 */

char *__fastcall DirectComposition::CPropertySetMarshaler::`scalar deleting destructor'(char *Buffer, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::~PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>(Buffer + 72);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(Buffer, v4, v5, v6);
  return Buffer;
}
