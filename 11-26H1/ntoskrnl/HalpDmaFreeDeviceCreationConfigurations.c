/*
 * XREFs of HalpDmaFreeDeviceCreationConfigurations @ 0x140578CE8
 * Callers:
 *     HalpDmaAllocateDeviceCreationConfigurations @ 0x140578938 (HalpDmaAllocateDeviceCreationConfigurations.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x14078041C (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140359004 (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpDmaFreeDeviceCreationConfigurations(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rax

  while ( 1 )
  {
    v1 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    if ( (_QWORD *)v1[1] != a1 || (v2 = (_QWORD *)a1[1], (_QWORD *)*v2 != a1) )
      __fastfail(3u);
    *v2 = v1;
    v1[1] = v2;
    HalpMmAllocCtxFree((__int64)a1, (__int64)a1);
    a1 = v1;
  }
  HalpMmAllocCtxFree((__int64)a1, (__int64)a1);
}
