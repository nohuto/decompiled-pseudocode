/*
 * XREFs of IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x1405D4D7C
 * Callers:
 *     IopLiveDumpMarkImportantDumpData @ 0x1405D2B6C (IopLiveDumpMarkImportantDumpData.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405DA0A4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTraceMarkImportantDumpDataDuration(__int64 a1, __int64 a2)
{
  int v3; // eax
  _DWORD *v4; // rcx
  bool v5; // zf
  __int64 *v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-19h] BYREF
  __int64 v9; // [rsp+38h] [rbp-11h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  __int64 *v14; // [rsp+80h] [rbp+37h]
  __int64 v15; // [rsp+88h] [rbp+3Fh]
  __int64 v16; // [rsp+B8h] [rbp+6Fh] BYREF

  v16 = a2;
  LOBYTE(v3) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v3 )
  {
    if ( !v4[106] )
    {
      v3 = v4[80];
      if ( (v3 & 1) != 0 )
      {
        v10[1] = 8LL;
        v10[0] = &v16;
        v5 = (v4[20] & 1) == 0;
        v6 = LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUIESCED_MARK_IMPORTANT_DUMP_DATA;
        if ( v5 )
          v6 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCED_MARK_IMPORTANT_DUMP_DATA;
        LOBYTE(v3) = IopLiveDumpTrace(v6, 1LL, v10);
        if ( (unsigned int)dword_140E06D90 > 5 )
        {
          LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140E06D90, 0x400000000000LL);
          if ( (_BYTE)v3 )
          {
            v8 = 0x1000000LL;
            v12 = &v8;
            v9 = v16;
            v13 = 8LL;
            v14 = &v9;
            v15 = 8LL;
            LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140E06D90,
                           (unsigned __int8 *)byte_14004789D,
                           (const GUID *)(a1 + 968),
                           (const GUID *)(a1 + 952),
                           4u,
                           &v11);
          }
        }
      }
    }
  }
  return v3;
}
