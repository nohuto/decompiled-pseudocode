/*
 * XREFs of IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x1405D5070
 * Callers:
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405D38C0 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405DA0A4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTracePopulateBitmapForDumpDuration(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  _DWORD *v5; // rcx
  bool v6; // zf
  __int64 *v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-59h] BYREF
  __int64 v10; // [rsp+38h] [rbp-51h] BYREF
  __int64 v11; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v12[5]; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+70h] [rbp-19h] BYREF
  __int64 *v14; // [rsp+90h] [rbp+7h]
  __int64 v15; // [rsp+98h] [rbp+Fh]
  __int64 *v16; // [rsp+A0h] [rbp+17h]
  __int64 v17; // [rsp+A8h] [rbp+1Fh]
  __int64 *v18; // [rsp+B0h] [rbp+27h]
  __int64 v19; // [rsp+B8h] [rbp+2Fh]
  __int64 v20; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v21; // [rsp+100h] [rbp+77h] BYREF

  v21 = a3;
  v20 = a2;
  LOBYTE(v4) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v4 )
  {
    if ( !v5[106] )
    {
      v4 = v5[80];
      if ( (v4 & 1) != 0 )
      {
        v12[1] = 8LL;
        v12[0] = &v20;
        v12[3] = 8LL;
        v12[2] = &v21;
        v6 = (v5[20] & 1) == 0;
        v7 = LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUIESCED_POPULATE_BITMAP_FOR_DUMP;
        if ( v6 )
          v7 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCED_POPULATE_BITMAP_FOR_DUMP;
        LOBYTE(v4) = IopLiveDumpTrace(v7, 2LL, v12);
        if ( (unsigned int)dword_140E06D90 > 5 )
        {
          LOBYTE(v4) = tlgKeywordOn((__int64)&dword_140E06D90, 0x400000000000LL);
          if ( (_BYTE)v4 )
          {
            v9 = 0x1000000LL;
            v14 = &v9;
            v10 = v20;
            v15 = 8LL;
            v16 = &v10;
            v11 = v21;
            v18 = &v11;
            v17 = 8LL;
            v19 = 8LL;
            LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140E06D90,
                           (unsigned __int8 *)byte_1400479EB,
                           (const GUID *)(a1 + 968),
                           (const GUID *)(a1 + 952),
                           5u,
                           &v13);
          }
        }
      }
    }
  }
  return v4;
}
