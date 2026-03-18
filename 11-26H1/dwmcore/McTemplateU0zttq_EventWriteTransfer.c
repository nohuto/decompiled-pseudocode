/*
 * XREFs of McTemplateU0zttq_EventWriteTransfer @ 0x180213040
 * Callers:
 *     ?SignalSEBWorker@CFSVPProvider@@AEAAXXZ @ 0x1801C8C04 (-SignalSEBWorker@CFSVPProvider@@AEAAXXZ.c)
 *     ?ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ @ 0x1801DF790 (-ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zttq_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-19h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-9h]
  __int64 v9; // [rsp+48h] [rbp-1h]
  int *v10; // [rsp+50h] [rbp+7h]
  __int64 v11; // [rsp+58h] [rbp+Fh]
  char *v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  char *v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+B8h] [rbp+6Fh] BYREF

  v16 = a4;
  v9 = 10LL;
  v8 = L"FSVP";
  v11 = 4LL;
  v10 = &v16;
  v13 = 4LL;
  v12 = &a5;
  v15 = 4LL;
  v14 = &a6;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_PUBLISH_SEB_NOTIFICATION,
           a3,
           5u,
           &v7);
}
