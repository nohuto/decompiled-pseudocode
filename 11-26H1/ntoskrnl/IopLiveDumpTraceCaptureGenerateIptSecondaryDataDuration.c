/*
 * XREFs of IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x1405D43FC
 * Callers:
 *     IopLiveDumpGenerateIptSecondaryData @ 0x1405D1F08 (IopLiveDumpGenerateIptSecondaryData.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405DA0A4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp-19h] BYREF
  __int64 v7; // [rsp+38h] [rbp-11h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  __int64 *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]
  __int64 v14; // [rsp+B8h] [rbp+6Fh] BYREF

  v14 = a2;
  LOBYTE(v3) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v3 )
  {
    if ( !*(_DWORD *)(v4 + 424) )
    {
      v3 = *(_DWORD *)(v4 + 320);
      if ( (v3 & 1) != 0 )
      {
        v8[1] = 8LL;
        v8[0] = &v14;
        LOBYTE(v3) = IopLiveDumpTrace(
                       LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCED_GENERATE_IPT_SECONDARY_DATA,
                       1LL,
                       v8);
        if ( (unsigned int)dword_140E06D90 > 5 )
        {
          LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140E06D90, 0x400000000000LL);
          if ( (_BYTE)v3 )
          {
            v6 = 0x1000000LL;
            v10 = &v6;
            v7 = v14;
            v11 = 8LL;
            v12 = &v7;
            v13 = 8LL;
            LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140E06D90,
                           (unsigned __int8 *)&byte_14004783F,
                           (const GUID *)(a1 + 968),
                           (const GUID *)(a1 + 952),
                           4u,
                           &v9);
          }
        }
      }
    }
  }
  return v3;
}
