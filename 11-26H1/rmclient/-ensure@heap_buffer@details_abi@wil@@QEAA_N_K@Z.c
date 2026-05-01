/*
 * XREFs of ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18000D2E0
 * Callers:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180005A84 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180005C00 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z @ 0x1800086C0 (-reset@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18000E520 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

char __fastcall wil::details_abi::heap_buffer::ensure(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rbx
  DWORD LastError; // ebp
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r8
  char *v10; // rax
  char *v11; // rsi
  rsize_t v12; // rdx
  rsize_t v13; // rbx

  v2 = a2;
  v4 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( a2 + *((_QWORD *)this + 1) - *(_QWORD *)this < v4 )
    return 1;
  if ( a2 < 2 * v4 )
    v2 = 2 * v4;
  if ( v4 < v2 )
  {
    v6 = v2 & 0xFFFFFFFFFFFFFFC0uLL;
    LastError = GetLastError();
    v8 = v6 + 64;
    v10 = (char *)wil::details::ProcessHeapAlloc(0, v6 + 64, v9);
    v11 = v10;
    if ( !v10 )
    {
      SetLastError(LastError);
      return 0;
    }
    v12 = v6 + 64;
    v13 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v10, v12, *(const void *const *)this, v13);
    wistd::unique_ptr<void,wil::process_heap_deleter>::reset((void **)this + 3, v11);
    *(_QWORD *)this = v11;
    *((_QWORD *)this + 1) = &v11[v13];
    *((_QWORD *)this + 2) = &v11[v8];
    SetLastError(LastError);
  }
  return 1;
}
