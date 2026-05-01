/*
 * XREFs of ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180006878
 * Callers:
 *     ?RecordFeatureUsageUnderLock@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180007700 (-RecordFeatureUsageUnderLock@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceRepor.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180006258 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180006990 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180006E60 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180007A80 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18000FE90 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

bool __fastcall wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        int a2,
        int a3)
{
  char v3; // di
  void *v5; // rdx
  wil::details *v6; // rsi
  wil::details *v7; // rcx
  void *v9[2]; // [rsp+30h] [rbp-20h] BYREF
  wil::details *v10[2]; // [rsp+40h] [rbp-10h]
  int Buf1; // [rsp+78h] [rbp+28h] BYREF
  int v12; // [rsp+80h] [rbp+30h] BYREF

  v12 = a3;
  Buf1 = a2;
  v3 = 1;
  if ( !wil::details_abi::RawUsageIndex::RecordUsageInternal(this, &Buf1, 4uLL, &v12, 4uLL, 1u) )
  {
    if ( *((_QWORD *)this + 3) )
    {
      if ( *((_BYTE *)this + 58) )
        wil::details_abi::heap_buffer::ensure((wil::details_abi::RawUsageIndex *)((char *)this + 24), 0x28uLL);
    }
    else
    {
      *(_OWORD *)v9 = 0LL;
      *(_OWORD *)v10 = 0LL;
      if ( wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)v9, 0x32uLL) )
      {
        wil::details_abi::RawUsageIndex::SetBuffer(this, v9[0], 0LL, (char *)v10[0] - (char *)v9[0]);
        v7 = (wil::details *)*((_QWORD *)this + 6);
        v6 = 0LL;
        *((wil::details **)this + 6) = v10[1];
        if ( v7 )
          wil::details::FreeProcessHeap(v7, v5);
        *((_BYTE *)this + 58) = 1;
      }
      else
      {
        v6 = v10[1];
      }
      if ( v6 )
        wil::details::FreeProcessHeap(v6, v5);
    }
    return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, &Buf1, 4uLL, &v12, 4uLL, 1u);
  }
  return v3;
}
