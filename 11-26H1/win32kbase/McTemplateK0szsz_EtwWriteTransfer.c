/*
 * XREFs of McTemplateK0szsz_EtwWriteTransfer @ 0x1401FA344
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1401FA010 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14001E680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0szsz_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const wchar_t *a5,
        const char *a6,
        const wchar_t *a7)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // ecx
  const wchar_t *v10; // rcx
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // edx
  const char *v14; // rcx
  __int64 v15; // rdx
  int v16; // edx
  const wchar_t *v17; // rcx
  bool v18; // zf
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-21h] BYREF
  const char *v21; // [rsp+40h] [rbp-11h]
  int v22; // [rsp+48h] [rbp-9h]
  int v23; // [rsp+4Ch] [rbp-5h]
  const wchar_t *v24; // [rsp+50h] [rbp-1h]
  int v25; // [rsp+58h] [rbp+7h]
  int v26; // [rsp+5Ch] [rbp+Bh]
  const char *v27; // [rsp+60h] [rbp+Fh]
  int v28; // [rsp+68h] [rbp+17h]
  int v29; // [rsp+6Ch] [rbp+1Bh]
  const wchar_t *v30; // [rsp+70h] [rbp+1Fh]
  int v31; // [rsp+78h] [rbp+27h]
  int v32; // [rsp+7Ch] [rbp+2Bh]

  v7 = -1LL;
  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5;
  }
  v22 = v9;
  v10 = a5;
  if ( !a4 )
    a4 = "NULL";
  v23 = 0;
  v21 = a4;
  v11 = 10;
  if ( a5 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a5[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v25 = v13;
  v26 = 0;
  if ( !a5 )
    v10 = L"NULL";
  v24 = v10;
  v14 = a6;
  if ( a6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a6[v15] );
    v16 = v15 + 1;
  }
  else
  {
    v16 = 5;
  }
  v28 = v16;
  v29 = 0;
  if ( !a6 )
    v14 = "NULL";
  v27 = v14;
  v17 = a7;
  v18 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v7;
    while ( a7[v7] );
    v11 = 2 * v7 + 2;
    v18 = a7 == 0LL;
  }
  if ( v18 )
    v17 = L"NULL";
  v31 = v11;
  v30 = v17;
  v32 = 0;
  return McGenEventWrite_EtwWriteTransfer((__int64)v17, &TrappedAppContainerRenderEvent, &W32kControlGuid, 5u, &v20);
}
