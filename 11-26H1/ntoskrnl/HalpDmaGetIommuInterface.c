/*
 * XREFs of HalpDmaGetIommuInterface @ 0x14057B358
 * Callers:
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14058CF5C (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x140782F1C (HalpDmaAllocateChildAdapterV3.c)
 *     IommupDeviceEnableSvm @ 0x14078537C (IommupDeviceEnableSvm.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IoQueryInterface @ 0x1409DC050 (IoQueryInterface.c)
 */

__int64 __fastcall HalpDmaGetIommuInterface(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int16 v5; // [rsp+20h] [rbp-28h]

  v5 = 2;
  result = IoQueryInterface(a1, 0LL, &GUID_IOMMU_BUS_INTERFACE, 80LL, v5, a1, a2);
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(a2 + 64) )
    {
      return 0LL;
    }
    else
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 8), v4);
      return 3221225474LL;
    }
  }
  return result;
}
