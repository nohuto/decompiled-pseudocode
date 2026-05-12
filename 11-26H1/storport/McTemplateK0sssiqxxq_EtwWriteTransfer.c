/*
 * XREFs of McTemplateK0sssiqxxq_EtwWriteTransfer @ 0x1400740FC
 * Callers:
 *     GetZoneCountFromUnit @ 0x140073E8C (GetZoneCountFromUnit.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0sssiqxxq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        const char *a5,
        const char *a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // ecx
  const char *v14; // rcx
  __int64 v15; // rdx
  int v16; // edx
  const char *v17; // rcx
  bool v18; // zf
  int v20; // [rsp+30h] [rbp-91h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+40h] [rbp-81h] BYREF
  const char *v22; // [rsp+50h] [rbp-71h]
  int v23; // [rsp+58h] [rbp-69h]
  int v24; // [rsp+5Ch] [rbp-65h]
  const char *v25; // [rsp+60h] [rbp-61h]
  int v26; // [rsp+68h] [rbp-59h]
  int v27; // [rsp+6Ch] [rbp-55h]
  const char *v28; // [rsp+70h] [rbp-51h]
  int v29; // [rsp+78h] [rbp-49h]
  int v30; // [rsp+7Ch] [rbp-45h]
  char *v31; // [rsp+80h] [rbp-41h]
  __int64 v32; // [rsp+88h] [rbp-39h]
  char *v33; // [rsp+90h] [rbp-31h]
  __int64 v34; // [rsp+98h] [rbp-29h]
  char *v35; // [rsp+A0h] [rbp-21h]
  __int64 v36; // [rsp+A8h] [rbp-19h]
  char *v37; // [rsp+B0h] [rbp-11h]
  __int64 v38; // [rsp+B8h] [rbp-9h]
  int *v39; // [rsp+C0h] [rbp-1h]
  __int64 v40; // [rsp+C8h] [rbp+7h]

  v10 = -1LL;
  v20 = -1;
  v11 = 5;
  if ( a4 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a4[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v13 = 5;
  }
  v23 = v13;
  v14 = a5;
  if ( !a4 )
    a4 = "NULL";
  v24 = 0;
  v22 = a4;
  if ( a5 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a5[v15] );
    v16 = v15 + 1;
  }
  else
  {
    v16 = 5;
  }
  v26 = v16;
  v27 = 0;
  if ( !a5 )
    v14 = "NULL";
  v25 = v14;
  v17 = a6;
  v18 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v10;
    while ( a6[v10] );
    v11 = v10 + 1;
    v18 = a6 == 0LL;
  }
  if ( v18 )
    v17 = "NULL";
  v29 = v11;
  v28 = v17;
  v31 = &a7;
  v30 = 0;
  v33 = &a8;
  v32 = 8LL;
  v35 = &a9;
  v34 = 4LL;
  v37 = &a10;
  v39 = &v20;
  v36 = 8LL;
  v38 = 8LL;
  v40 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v17, &EventSMRUnsupportedZoneCountError, 0LL, 9u, &v21);
}
