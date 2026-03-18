/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x140205800
 * Callers:
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x140045CC8 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1400460CC (RIMQueueAndSignalAsyncWorkItem.c)
 *     RIMDeviceNotifyUsingAsyncInputWork @ 0x14008FAD4 (RIMDeviceNotifyUsingAsyncInputWork.c)
 *     RIMDeviceClassNotifyUsingAsyncInputWork @ 0x140090DC8 (RIMDeviceClassNotifyUsingAsyncInputWork.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x140092458 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x140131A10 (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x140154200 (rimQueueUpdateInputGlolbalsAsyncWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  const wchar_t *v8; // rbx
  __int64 v9; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  const wchar_t *v15; // rax
  int v16; // [rsp+20h] [rbp-98h]
  __int64 v17; // [rsp+100h] [rbp+48h] BYREF
  va_list va; // [rsp+100h] [rbp+48h]
  __int64 v19; // [rsp+108h] [rbp+50h] BYREF
  va_list va1; // [rsp+108h] [rbp+50h]
  __int64 v21; // [rsp+110h] [rbp+58h] BYREF
  va_list va2; // [rsp+110h] [rbp+58h]
  __int64 v23; // [rsp+118h] [rbp+60h] BYREF
  va_list va3; // [rsp+118h] [rbp+60h]
  const wchar_t *v25; // [rsp+120h] [rbp+68h]
  va_list va4; // [rsp+128h] [rbp+70h] BYREF

  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v21 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v23 = va_arg(va4, _QWORD);
  v25 = va_arg(va4, const wchar_t *);
  v8 = v25;
  v9 = -1LL;
  if ( a2 )
  {
    if ( v25 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v25[v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = v25;
    if ( !v25 )
      v15 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      a8,
      a7,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      8LL,
      (__int64 *)va3,
      4LL,
      v15,
      v14,
      va4,
      4LL,
      0LL);
  }
  if ( a3 )
  {
    if ( v8 )
    {
      do
        ++v9;
      while ( v8[v9] );
    }
    LOWORD(v16) = a7;
    WppAutoLogTrace(a4, a5, 1LL, a8, v16, (__int64 *)va, 8LL, (__int64 *)va1, 8LL, (__int64 *)va2);
  }
}
