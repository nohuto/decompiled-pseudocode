/*
 * XREFs of McTemplateK0qqqqzzzzqx_EtwWriteTransfer @ 0x14010BCA4
 * Callers:
 *     EtwTraceMessageCheckDelay @ 0x14016D900 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14003E650 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqqqzzzzqx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10,
        const wchar_t *a11,
        char a12,
        char a13)
{
  const wchar_t *v13; // r9
  const wchar_t *v14; // r11
  const wchar_t *v15; // rdx
  const wchar_t *v16; // r8
  int v17; // r10d
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rcx
  bool v25; // zf
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+38h] [rbp-B1h] BYREF
  int *v28; // [rsp+48h] [rbp-A1h]
  __int64 v29; // [rsp+50h] [rbp-99h]
  char *v30; // [rsp+58h] [rbp-91h]
  __int64 v31; // [rsp+60h] [rbp-89h]
  char *v32; // [rsp+68h] [rbp-81h]
  __int64 v33; // [rsp+70h] [rbp-79h]
  char *v34; // [rsp+78h] [rbp-71h]
  __int64 v35; // [rsp+80h] [rbp-69h]
  const wchar_t *v36; // [rsp+88h] [rbp-61h]
  int v37; // [rsp+90h] [rbp-59h]
  int v38; // [rsp+94h] [rbp-55h]
  const wchar_t *v39; // [rsp+98h] [rbp-51h]
  int v40; // [rsp+A0h] [rbp-49h]
  int v41; // [rsp+A4h] [rbp-45h]
  const wchar_t *v42; // [rsp+A8h] [rbp-41h]
  int v43; // [rsp+B0h] [rbp-39h]
  int v44; // [rsp+B4h] [rbp-35h]
  const wchar_t *v45; // [rsp+B8h] [rbp-31h]
  int v46; // [rsp+C0h] [rbp-29h]
  int v47; // [rsp+C4h] [rbp-25h]
  char *v48; // [rsp+C8h] [rbp-21h]
  __int64 v49; // [rsp+D0h] [rbp-19h]
  char *v50; // [rsp+D8h] [rbp-11h]
  __int64 v51; // [rsp+E0h] [rbp-9h]
  int v52; // [rsp+120h] [rbp+37h] BYREF

  v52 = a4;
  v13 = a8;
  v14 = a11;
  v15 = a10;
  v16 = a9;
  v28 = &v52;
  v30 = &a5;
  v17 = 10;
  v29 = 4LL;
  v32 = &a6;
  v34 = &a7;
  v18 = -1LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  if ( a8 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a8[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v37 = v20;
  v38 = 0;
  if ( !a8 )
    v13 = L"NULL";
  v36 = v13;
  if ( a9 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a9[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v40 = v22;
  v41 = 0;
  if ( !a9 )
    v16 = L"NULL";
  v39 = v16;
  if ( a10 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a10[v23] );
    v24 = (unsigned int)(2 * v23 + 2);
  }
  else
  {
    v24 = 10LL;
  }
  v43 = v24;
  v44 = 0;
  if ( !a10 )
    v15 = L"NULL";
  v42 = v15;
  v25 = a11 == 0LL;
  if ( a11 )
  {
    do
      ++v18;
    while ( a11[v18] );
    v17 = 2 * v18 + 2;
    v25 = a11 == 0LL;
  }
  v46 = v17;
  v48 = &a12;
  v47 = 0;
  v50 = &a13;
  v49 = 4LL;
  if ( v25 )
    v14 = L"NULL";
  v45 = v14;
  v51 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v24, &ImmersiveMessageCheckDelayEvent, &W32kControlGuid, 0xBu, &v27);
}
