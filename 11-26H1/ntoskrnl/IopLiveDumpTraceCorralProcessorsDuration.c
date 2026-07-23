/*
 * XREFs of IopLiveDumpTraceCorralProcessorsDuration @ 0x1405D472C
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1405D1560 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405DA0A4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char IopLiveDumpTraceCorralProcessorsDuration(__int64 a1, ...)
{
  int v2; // eax
  _DWORD *v3; // rcx
  bool v4; // zf
  __int64 *v5; // rcx
  __int64 v7; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v12[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v14; // [rsp+C8h] [rbp-40h]
  __int64 v15; // [rsp+D0h] [rbp-38h]
  __int64 *v16; // [rsp+D8h] [rbp-30h]
  __int64 v17; // [rsp+E0h] [rbp-28h]
  __int64 *v18; // [rsp+E8h] [rbp-20h]
  __int64 v19; // [rsp+F0h] [rbp-18h]
  __int64 *v20; // [rsp+F8h] [rbp-10h]
  __int64 v21; // [rsp+100h] [rbp-8h]
  __int64 *v22; // [rsp+108h] [rbp+0h]
  __int64 v23; // [rsp+110h] [rbp+8h]
  __int64 v24; // [rsp+150h] [rbp+48h] BYREF
  va_list va; // [rsp+150h] [rbp+48h]
  __int64 v26; // [rsp+158h] [rbp+50h] BYREF
  va_list va1; // [rsp+158h] [rbp+50h]
  __int64 v28; // [rsp+160h] [rbp+58h] BYREF
  va_list va2; // [rsp+160h] [rbp+58h]
  __int64 v30; // [rsp+168h] [rbp+60h] BYREF
  va_list va3; // [rsp+168h] [rbp+60h]
  va_list va4; // [rsp+170h] [rbp+68h] BYREF

  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v24 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v26 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v28 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v30 = va_arg(va4, _QWORD);
  LOBYTE(v2) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v2 )
  {
    if ( !v3[106] )
    {
      v2 = v3[80];
      if ( (v2 & 1) != 0 )
      {
        v12[1] = 8LL;
        va_copy((va_list)v12, va);
        v12[3] = 8LL;
        va_copy((va_list)&v12[2], va1);
        v12[5] = 8LL;
        va_copy((va_list)&v12[4], va2);
        va_copy((va_list)&v12[6], va3);
        v4 = (v3[20] & 1) == 0;
        v12[7] = 8LL;
        v5 = LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUIESCED_CORRAL_PROCESSORS;
        if ( v4 )
          v5 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCED_CORRAL_PROCESSORS;
        LOBYTE(v2) = IopLiveDumpTrace(v5, 4LL, v12);
        if ( (unsigned int)dword_140E06D90 > 5 )
        {
          LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140E06D90, 0x400000000000LL);
          if ( (_BYTE)v2 )
          {
            v7 = 0x1000000LL;
            v14 = &v7;
            v8 = v24;
            v15 = 8LL;
            v16 = &v8;
            v9 = v26;
            v18 = &v9;
            v10 = v28;
            v20 = &v10;
            v11 = v30;
            v22 = &v11;
            v17 = 8LL;
            v19 = 8LL;
            v21 = 8LL;
            v23 = 8LL;
            LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140E06D90,
                           (unsigned __int8 *)byte_14004794B,
                           (const GUID *)(a1 + 968),
                           (const GUID *)(a1 + 952),
                           7u,
                           &v13);
          }
        }
      }
    }
  }
  return v2;
}
