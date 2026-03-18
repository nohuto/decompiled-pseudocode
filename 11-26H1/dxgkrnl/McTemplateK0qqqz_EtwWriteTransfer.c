/*
 * XREFs of McTemplateK0qqqz_EtwWriteTransfer @ 0x1400899CC
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x14004C670 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1400685F0 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x14024C928 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400127B0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqqz_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-21h] BYREF
  int *v12; // [rsp+40h] [rbp-11h]
  __int64 v13; // [rsp+48h] [rbp-9h]
  char *v14; // [rsp+50h] [rbp-1h]
  __int64 v15; // [rsp+58h] [rbp+7h]
  char *v16; // [rsp+60h] [rbp+Fh]
  __int64 v17; // [rsp+68h] [rbp+17h]
  const wchar_t *v18; // [rsp+70h] [rbp+1Fh]
  int v19; // [rsp+78h] [rbp+27h]
  int v20; // [rsp+7Ch] [rbp+2Bh]
  int v21; // [rsp+B8h] [rbp+67h] BYREF

  v21 = a4;
  v7 = a7;
  v12 = &v21;
  v13 = 4LL;
  v14 = &a5;
  v16 = &a6;
  v15 = 4LL;
  v17 = 4LL;
  if ( a7 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v19 = v9;
  v20 = 0;
  if ( !a7 )
    v7 = L"NULL";
  v18 = v7;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, (__int64)L"NULL", 5u, &v11);
}
