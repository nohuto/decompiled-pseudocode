/*
 * XREFs of ??1?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA@XZ @ 0x14013A18C
 * Callers:
 *     ??_GCPropertySetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14013A150 (--_GCPropertySetMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::~PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rcx

  v5 = *(char **)(a1 + 16);
  if ( v5 )
  {
    GreDeleteFastMutex(v5, a2, a3, a4);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( *(_QWORD *)a1 )
  {
    GreDeleteFastMutex(*(char **)a1, a2, a3, a4);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
