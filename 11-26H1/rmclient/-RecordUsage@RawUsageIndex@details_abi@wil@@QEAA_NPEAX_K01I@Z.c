/*
 * XREFs of ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180005C00
 * Callers:
 *     ??R?$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z @ 0x1800057B0 (--R-$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEA.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800161EC (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 * Callees:
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180005670 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180005DF0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?reset@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z @ 0x1800086C0 (-reset@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18000D2E0 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18000E520 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        void *Buf1,
        size_t Size,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v10; // rdx
  void *v11; // r12
  unsigned __int64 v12; // r13
  char *v13; // r9
  char *v14; // rax
  char *v15; // r13
  void *v16; // r13
  HANDLE ProcessHeap; // rax
  HANDLE v19; // rax
  unsigned __int64 v20; // r8
  char *v21; // rax
  DWORD dwErrCode; // [rsp+30h] [rbp-68h]
  rsize_t DestinationSize; // [rsp+38h] [rbp-60h]
  __int128 v24; // [rsp+58h] [rbp-40h] BYREF

  if ( !wil::details_abi::RawUsageIndex::RecordUsageInternal(this, Buf1, Size, a4, a5, a6) )
  {
    v10 = Size + a5 + 32;
    if ( *((_QWORD *)this + 3) )
    {
      if ( *((_BYTE *)this + 58) )
        wil::details_abi::heap_buffer::ensure((wil::details_abi::RawUsageIndex *)((char *)this + 24), v10);
      return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, Buf1, Size, a4, a5, a6);
    }
    v11 = 0LL;
    v12 = v10 + 10;
    v13 = 0LL;
    v14 = 0LL;
    v24 = 0LL;
    if ( v10 == -10LL )
    {
      v15 = 0LL;
    }
    else
    {
      dwErrCode = GetLastError();
      DestinationSize = (v12 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
      v21 = (char *)wil::details::ProcessHeapAlloc(0, DestinationSize, v20);
      v15 = v21;
      if ( !v21 )
      {
        SetLastError(dwErrCode);
        v11 = (void *)*((_QWORD *)&v24 + 1);
LABEL_8:
        if ( v11 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v11);
        }
        return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, Buf1, Size, a4, a5, a6);
      }
      memcpy_s(v21, DestinationSize, 0LL, 0LL);
      wistd::unique_ptr<void,wil::process_heap_deleter>::reset((char *)&v24 + 8, v15);
      SetLastError(dwErrCode);
      v14 = v15;
      v13 = &v15[DestinationSize];
    }
    wil::details_abi::RawUsageIndex::SetBuffer(this, v15, 0LL, (const char *)(v13 - v14));
    v16 = (void *)*((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = *((_QWORD *)&v24 + 1);
    if ( v16 )
    {
      v19 = GetProcessHeap();
      HeapFree(v19, 0, v16);
    }
    *((_BYTE *)this + 58) = 1;
    goto LABEL_8;
  }
  return 1;
}
