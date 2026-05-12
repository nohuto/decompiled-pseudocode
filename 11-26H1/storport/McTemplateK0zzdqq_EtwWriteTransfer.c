/*
 * XREFs of McTemplateK0zzdqq_EtwWriteTransfer @ 0x14007864C
 * Callers:
 *     RaCallMiniportFindAdapter @ 0x140042B00 (RaCallMiniportFindAdapter.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zzdqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // ecx
  const wchar_t *v12; // rcx
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-39h] BYREF
  const wchar_t *v16; // [rsp+40h] [rbp-29h]
  int v17; // [rsp+48h] [rbp-21h]
  int v18; // [rsp+4Ch] [rbp-1Dh]
  const wchar_t *v19; // [rsp+50h] [rbp-19h]
  int v20; // [rsp+58h] [rbp-11h]
  int v21; // [rsp+5Ch] [rbp-Dh]
  char *v22; // [rsp+60h] [rbp-9h]
  __int64 v23; // [rsp+68h] [rbp-1h]
  char *v24; // [rsp+70h] [rbp+7h]
  __int64 v25; // [rsp+78h] [rbp+Fh]
  char *v26; // [rsp+80h] [rbp+17h]
  __int64 v27; // [rsp+88h] [rbp+1Fh]

  v8 = -1LL;
  v9 = 10;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v17 = v11;
  v12 = a5;
  if ( !a4 )
    a4 = L"NULL";
  v18 = 0;
  v16 = a4;
  v13 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v8;
    while ( a5[v8] );
    v9 = 2 * v8 + 2;
    v13 = a5 == 0LL;
  }
  v20 = v9;
  v22 = &a6;
  v21 = 0;
  v24 = &a7;
  if ( v13 )
    v12 = L"NULL";
  v19 = v12;
  v26 = &a8;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v12, &EventPortConfigChange, 0LL, 6u, &v15);
}
