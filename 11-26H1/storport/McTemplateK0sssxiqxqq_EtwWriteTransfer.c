/*
 * XREFs of McTemplateK0sssxiqxqq_EtwWriteTransfer @ 0x140074244
 * Callers:
 *     GetZoneIndexFromUnitAndLba @ 0x140073F50 (GetZoneIndexFromUnitAndLba.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0sssxiqxqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const char *a5,
        const char *a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // rcx
  int v15; // ecx
  const char *v16; // rcx
  __int64 v17; // rdx
  int v18; // edx
  const char *v19; // rcx
  bool v20; // zf
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-99h] BYREF
  const char *v23; // [rsp+40h] [rbp-89h]
  int v24; // [rsp+48h] [rbp-81h]
  int v25; // [rsp+4Ch] [rbp-7Dh]
  const char *v26; // [rsp+50h] [rbp-79h]
  int v27; // [rsp+58h] [rbp-71h]
  int v28; // [rsp+5Ch] [rbp-6Dh]
  const char *v29; // [rsp+60h] [rbp-69h]
  int v30; // [rsp+68h] [rbp-61h]
  int v31; // [rsp+6Ch] [rbp-5Dh]
  char *v32; // [rsp+70h] [rbp-59h]
  __int64 v33; // [rsp+78h] [rbp-51h]
  char *v34; // [rsp+80h] [rbp-49h]
  __int64 v35; // [rsp+88h] [rbp-41h]
  char *v36; // [rsp+90h] [rbp-39h]
  __int64 v37; // [rsp+98h] [rbp-31h]
  char *v38; // [rsp+A0h] [rbp-29h]
  __int64 v39; // [rsp+A8h] [rbp-21h]
  char *v40; // [rsp+B0h] [rbp-19h]
  __int64 v41; // [rsp+B8h] [rbp-11h]
  char *v42; // [rsp+C0h] [rbp-9h]
  __int64 v43; // [rsp+C8h] [rbp-1h]

  v12 = -1LL;
  v13 = 5;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v15 = 5;
  }
  v24 = v15;
  v16 = a5;
  if ( !a4 )
    a4 = "NULL";
  v25 = 0;
  v23 = a4;
  if ( a5 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a5[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5;
  }
  v27 = v18;
  v28 = 0;
  if ( !a5 )
    v16 = "NULL";
  v26 = v16;
  v19 = a6;
  v20 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v12;
    while ( a6[v12] );
    v13 = v12 + 1;
    v20 = a6 == 0LL;
  }
  if ( v20 )
    v19 = "NULL";
  v30 = v13;
  v29 = v19;
  v32 = &a7;
  v31 = 0;
  v34 = &a8;
  v33 = 8LL;
  v36 = &a9;
  v35 = 8LL;
  v38 = &a10;
  v40 = &a11;
  v42 = &a12;
  v37 = 4LL;
  v39 = 8LL;
  v41 = 4LL;
  v43 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v19, &EventSMRUnsupportedZoneIndexError, 0LL, 0xAu, &v22);
}
