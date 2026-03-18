/*
 * XREFs of ??1?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA@XZ @ 0x1400F232C
 * Callers:
 *     ??_GCPropertySetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1400F22F0 (--_GCPropertySetMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::~PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)(a1 + 16);
  if ( v2 )
  {
    GreDeleteFastMutex(v2);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  if ( *(_QWORD *)a1 )
  {
    GreDeleteFastMutex(*(char **)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
}
