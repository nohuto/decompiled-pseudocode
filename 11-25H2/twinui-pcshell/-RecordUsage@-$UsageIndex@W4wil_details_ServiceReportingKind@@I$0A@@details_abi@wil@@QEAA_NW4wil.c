/*
 * XREFs of ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180129FE8
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180129940 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800E6844 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1801294A8 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18012A0D8 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1801951B0 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802DC260 (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

bool __fastcall wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        int a2,
        int a3)
{
  char v3; // di
  void *v6[2]; // [rsp+30h] [rbp-20h] BYREF
  void *v7[2]; // [rsp+40h] [rbp-10h] BYREF
  int v8; // [rsp+78h] [rbp+28h] BYREF
  int v9; // [rsp+80h] [rbp+30h] BYREF

  v9 = a3;
  v8 = a2;
  v3 = 1;
  if ( !wil::details_abi::RawUsageIndex::RecordUsageInternal(this, &v8, 4uLL, &v9, 4uLL, 1u) )
  {
    if ( *((_QWORD *)this + 3) )
    {
      if ( *((_BYTE *)this + 58) )
        wil::details_abi::heap_buffer::ensure((wil::details_abi::RawUsageIndex *)((char *)this + 24), 0x28uLL);
    }
    else
    {
      *(_OWORD *)v6 = 0LL;
      *(_OWORD *)v7 = 0LL;
      if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v6, 0x32uLL) )
      {
        wil::details_abi::RawUsageIndex::SetBuffer(
          this,
          (_WORD *)v6[0],
          0LL,
          (const char *)((char *)v7[0] - (char *)v6[0]));
        wistd::unique_ptr<void,wil::process_heap_deleter>::operator=((char *)this + 48, &v7[1]);
        *((_BYTE *)this + 58) = 1;
      }
      if ( v7[1] )
        MemoryFree(v7[1]);
    }
    return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, &v8, 4uLL, &v9, 4uLL, 1u);
  }
  return v3;
}
