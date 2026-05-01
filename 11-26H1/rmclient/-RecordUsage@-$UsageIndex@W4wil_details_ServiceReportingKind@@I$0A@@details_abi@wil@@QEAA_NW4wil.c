/*
 * XREFs of ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180005A84
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180005820 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180005670 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180005DF0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1800062B4 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180007C88 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z @ 0x1800086C0 (-reset@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18000D2E0 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18000E520 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180015044 (--0last_error_context@wil@@QEAA@XZ.c)
 */

bool __fastcall wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        int a2,
        int a3)
{
  char v3; // di
  unsigned __int64 v5; // r8
  char *v6; // rax
  char *v7; // rsi
  char *v8; // r12
  char v9; // r15
  char *v10; // r14
  void *v11; // rdx
  wil::details *v12; // rsi
  wil::details *v14; // rcx
  char v15[8]; // [rsp+30h] [rbp-30h] BYREF
  void *v16[2]; // [rsp+38h] [rbp-28h]
  wil::details *v17[2]; // [rsp+48h] [rbp-18h] BYREF
  int Buf1; // [rsp+A8h] [rbp+48h] BYREF
  int v19; // [rsp+B0h] [rbp+50h] BYREF

  v19 = a3;
  Buf1 = a2;
  v3 = 1;
  if ( !wil::details_abi::RawUsageIndex::RecordUsageInternal(this, &Buf1, 4uLL, &v19, 4uLL, 1u) )
  {
    if ( *((_QWORD *)this + 3) )
    {
      if ( *((_BYTE *)this + 58) )
        wil::details_abi::heap_buffer::ensure((wil::details_abi::RawUsageIndex *)((char *)this + 24), 0x28uLL);
    }
    else
    {
      *(_OWORD *)v16 = 0LL;
      *(_OWORD *)v17 = 0LL;
      wil::last_error_context::last_error_context((wil::last_error_context *)v15);
      v6 = (char *)wil::details::ProcessHeapAlloc(0, 0x40uLL, v5);
      v7 = v6;
      if ( v6 )
      {
        memcpy_s(v6, 0x40uLL, 0LL, 0LL);
        wistd::unique_ptr<void,wil::process_heap_deleter>::reset(&v17[1], v7);
        v8 = v7;
        v10 = v7 + 64;
        v9 = 1;
      }
      else
      {
        v8 = (char *)v16[0];
        v9 = 0;
        v10 = 0LL;
      }
      wil::last_error_context::~last_error_context((wil::last_error_context *)v15);
      if ( v9 )
      {
        wil::details_abi::RawUsageIndex::SetBuffer(this, v8, 0LL, (const char *)(v10 - v7));
        v14 = (wil::details *)*((_QWORD *)this + 6);
        v12 = 0LL;
        *((wil::details **)this + 6) = v17[1];
        if ( v14 )
          wil::details::FreeProcessHeap(v14, v11);
        *((_BYTE *)this + 58) = 1;
      }
      else
      {
        v12 = v17[1];
      }
      if ( v12 )
        wil::details::FreeProcessHeap(v12, v11);
    }
    return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, &Buf1, 4uLL, &v19, 4uLL, 1u);
  }
  return v3;
}
