/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_SEGMENTDESCRIPTOR5@@$03@@QEAAPEAU_DXGK_SEGMENTDESCRIPTOR5@@I@Z @ 0x1400AE8B0
 * Callers:
 *     CreateAndInitializeSegmentsAndMmus @ 0x1400AE950 (CreateAndInitializeSegmentsAndMmus.c)
 *     CreatePhysicalAdapterSegments @ 0x1400B14D0 (CreatePhysicalAdapterSegments.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<_DXGK_SEGMENTDESCRIPTOR5,4>::AllocateElements(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 4 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, 104LL * a2);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x68 )
      return 0LL;
    *a1 = ExAllocatePool2(256LL, 104LL * a2, 1265072196LL);
  }
  result = *a1;
  *((_DWORD *)a1 + 106) = a2;
  return result;
}
