/*
 * XREFs of McTemplateK0jjtq_EtwWriteTransfer @ 0x1405BA290
 * Callers:
 *     FsRtlpDedupChangeEventsControlCallbackV2 @ 0x1405BA0D0 (FsRtlpDedupChangeEventsControlCallbackV2.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x1407927D0 (FsRtlpDedupChangeRegisterVolume.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jjtq_EtwWriteTransfer(
        REGHANDLE *a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-21h] BYREF
  __int64 v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  __int64 v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  char *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  char *v15; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]

  v11 = a5;
  v13 = &a6;
  v15 = &a7;
  v9 = a4;
  v10 = 16LL;
  v12 = 16LL;
  v14 = 4LL;
  v16 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)DedupChange_NewVolume, a3, 5u, &v8);
}
