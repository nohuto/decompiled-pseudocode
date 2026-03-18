/*
 * XREFs of ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1400CD73C
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAUVIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x140107850 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400CD7D4 (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RTL_BALANCED_NODE *__fastcall CVirtualAddressAllocator::ReferenceReservedZeroVad(
        CVirtualAddressAllocator *this,
        __int64 a2,
        unsigned __int64 a3)
{
  struct _RTL_BALANCED_NODE *v3; // rbx
  int v5; // eax
  int v7; // edx
  unsigned __int64 v8; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
  while ( v3 )
  {
    v5 = CompareVadAddressInsideAvl(&v9, v3);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        break;
      v3 = v3->Children[1];
    }
    else
    {
      v3 = v3->Children[0];
    }
  }
  if ( !v3 )
    return 0LL;
  v7 = (int)v3[3].Children[0];
  v8 = (unsigned __int64)&v3[1].Children[1][-171].Children[1];
  if ( (v7 & 0x1000) == 0 )
    v8 = (unsigned __int64)v3[1].Children[1];
  if ( v8 < a3 )
    return 0LL;
  if ( (v7 & 0xF) != 2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2017;
    return 0LL;
  }
  return v3;
}
