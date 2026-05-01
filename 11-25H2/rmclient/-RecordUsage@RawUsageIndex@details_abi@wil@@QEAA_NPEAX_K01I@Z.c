/*
 * XREFs of ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180006700
 * Callers:
 *     ??R?$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z @ 0x1800061F0 (--R-$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEA.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800172B0 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 * Callees:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180006990 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180006E60 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180007A80 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18000FE90 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

bool __fastcall wil::details_abi::RawUsageIndex::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        void *Buf1,
        size_t Size,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v10; // rdx
  void *v11; // r12
  void *v13; // r13
  HANDLE v14; // rax
  HANDLE ProcessHeap; // rax
  void *v16[2]; // [rsp+30h] [rbp-48h] BYREF
  LPVOID lpMem[7]; // [rsp+40h] [rbp-38h]

  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal(this, Buf1, Size, a4, a5, a6) )
    return 1;
  v10 = Size + a5 + 32;
  if ( *((_QWORD *)this + 3) )
  {
    if ( *((_BYTE *)this + 58) )
      wil::details_abi::heap_buffer::ensure((wil::details_abi::RawUsageIndex *)((char *)this + 24), v10);
  }
  else
  {
    *(_OWORD *)v16 = 0LL;
    *(_OWORD *)lpMem = 0LL;
    if ( wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)v16, v10 + 10) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(this, v16[0], 0LL, (char *)lpMem[0] - (char *)v16[0]);
      v13 = (void *)*((_QWORD *)this + 6);
      v11 = 0LL;
      *((LPVOID *)this + 6) = lpMem[1];
      if ( v13 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v13);
      }
      *((_BYTE *)this + 58) = 1;
    }
    else
    {
      v11 = lpMem[1];
    }
    if ( v11 )
    {
      v14 = GetProcessHeap();
      HeapFree(v14, 0, v11);
    }
  }
  return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, Buf1, Size, a4, a5, a6);
}
