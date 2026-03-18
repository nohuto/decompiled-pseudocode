/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_S @ 0x140092208
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x14009050C (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDeviceClassNotifyUsingAsyncInputWork @ 0x140090DC8 (RIMDeviceClassNotifyUsingAsyncInputWork.c)
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 *     RIMGetKbdExId @ 0x140092D94 (RIMGetKbdExId.c)
 *     RIMAllocateHidConfigDesc @ 0x1400EFCEC (RIMAllocateHidConfigDesc.c)
 *     RIMAllocateHidDesc @ 0x1401AE930 (RIMAllocateHidDesc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_S(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        const wchar_t *a9)
{
  const wchar_t *v9; // rbx
  __int64 v10; // rdi
  __int64 v14; // rsi
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  const wchar_t *v18; // rcx
  int v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+48h] [rbp-20h]

  v9 = a9;
  v10 = -1LL;
  v14 = 10LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a9[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    v18 = a9;
    if ( !a9 )
      v18 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      a8,
      a7,
      v18,
      v17,
      0LL);
  }
  if ( a3 )
  {
    v15 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v10;
      while ( a9[v10] );
      v14 = 2 * v10 + 2;
      v15 = a9 == 0LL;
    }
    if ( v15 )
      v9 = L"NULL";
    LOWORD(v19) = a7;
    WppAutoLogTrace(a4, a5, a6, a8, v19, v9, v14, 0LL, v20, v21);
  }
}
