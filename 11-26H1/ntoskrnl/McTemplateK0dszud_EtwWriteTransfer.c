/*
 * XREFs of McTemplateK0dszud_EtwWriteTransfer @ 0x14064D0C0
 * Callers:
 *     CarEtwWriteBugCheckEvent @ 0x14064C808 (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x14064C978 (CarEtwWriteLiveDumpEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0dszud_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        const char *a5,
        const wchar_t *a6,
        char a7,
        char a8)
{
  const char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // edx
  const wchar_t *v12; // rax
  int v13; // ecx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-39h] BYREF
  int *v16; // [rsp+40h] [rbp-29h]
  __int64 v17; // [rsp+48h] [rbp-21h]
  const char *v18; // [rsp+50h] [rbp-19h]
  int v19; // [rsp+58h] [rbp-11h]
  int v20; // [rsp+5Ch] [rbp-Dh]
  const wchar_t *v21; // [rsp+60h] [rbp-9h]
  int v22; // [rsp+68h] [rbp-1h]
  int v23; // [rsp+6Ch] [rbp+3h]
  char *v24; // [rsp+70h] [rbp+7h]
  __int64 v25; // [rsp+78h] [rbp+Fh]
  char *v26; // [rsp+80h] [rbp+17h]
  __int64 v27; // [rsp+88h] [rbp+1Fh]
  int v28; // [rsp+C8h] [rbp+5Fh] BYREF

  v28 = a4;
  v17 = 4LL;
  v16 = &v28;
  v8 = a5;
  v9 = -1LL;
  if ( a5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a5[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v11 = 5;
  }
  v19 = v11;
  v20 = 0;
  if ( !a5 )
    v8 = "NULL";
  v18 = v8;
  v12 = a6;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v13 = 2 * v9 + 2;
  }
  else
  {
    v13 = 10;
  }
  v22 = v13;
  v23 = 0;
  if ( !a6 )
    v12 = L"NULL";
  v25 = 1LL;
  v21 = v12;
  v27 = 4LL;
  v24 = &a7;
  v26 = &a8;
  return McGenEventWrite_EtwWriteTransfer(
           EtwProvider_Context,
           (const EVENT_DESCRIPTOR *)BugCheckEvent,
           (const GUID *)EtwProvider,
           6u,
           &v15);
}
