/*
 * XREFs of ProcessorpReserveUnownedRanges @ 0x1400D3D20
 * Callers:
 *     ProcessorAddInstance @ 0x1400BC8AC (ProcessorAddInstance.c)
 * Callees:
 *     AcpiIrqGetRootResourceList @ 0x140055CD0 (AcpiIrqGetRootResourceList.c)
 */

__int64 __fastcall ProcessorpReserveUnownedRanges(PRTL_RANGE_LIST RangeList)
{
  __int64 RootResourceList; // rbp
  __int64 v3; // r8
  __int64 i; // rdi
  ULONGLONG v5; // rdx
  NTSTATUS v6; // ebx
  __int64 v7; // r8
  struct _RTL_RANGE_LIST RangeLista; // [rsp+40h] [rbp-28h] BYREF

  memset(&RangeLista, 0, sizeof(RangeLista));
  RtlInitializeRangeList(&RangeLista);
  RootResourceList = AcpiIrqGetRootResourceList();
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(RootResourceList + 16); i = (unsigned int)(i + 1) )
  {
    if ( *(_BYTE *)(RootResourceList + 20 * i + 20) == 2 )
    {
      v5 = *(unsigned int *)(RootResourceList + 20 * i + 28);
      v6 = RtlAddRange(&RangeLista, v5, (unsigned int)v5, 0, 0, 0LL, 0LL);
      if ( v6 < 0 )
        goto LABEL_8;
    }
  }
  LOBYTE(v3) = 8;
  v6 = RtlInvertRangeListEx(RangeList, &RangeLista, v3, 0LL, 0LL);
  if ( v6 >= 0 )
  {
    LOBYTE(v7) = 8;
    v6 = RtlInvertRangeListEx(&RangeList[1], &RangeLista, v7, 0LL, 0LL);
  }
LABEL_8:
  RtlFreeRangeList(&RangeLista);
  if ( v6 < 0 )
  {
    RtlFreeRangeList(RangeList + 1);
    RtlFreeRangeList(RangeList);
  }
  return (unsigned int)v6;
}
