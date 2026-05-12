/*
 * XREFs of McTemplateK0qjshhssqdu_EtwWriteTransfer @ 0x1400C6FB4
 * Callers:
 *     StorAdapterNVMeInitializeEnumUnitIdentifyInfo @ 0x1401B6620 (StorAdapterNVMeInitializeEnumUnitIdentifyInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjshhssqdu_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const char *a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10,
        char a11,
        char a12,
        char a13)
{
  const char *v13; // rdx
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rcx
  int v17; // ecx
  const char *v18; // rcx
  __int64 v19; // rdx
  int v20; // edx
  const char *v21; // rcx
  bool v22; // zf
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+30h] [rbp-B1h] BYREF
  int *v25; // [rsp+40h] [rbp-A1h]
  __int64 v26; // [rsp+48h] [rbp-99h]
  __int64 v27; // [rsp+50h] [rbp-91h]
  __int64 v28; // [rsp+58h] [rbp-89h]
  const char *v29; // [rsp+60h] [rbp-81h]
  int v30; // [rsp+68h] [rbp-79h]
  int v31; // [rsp+6Ch] [rbp-75h]
  char *v32; // [rsp+70h] [rbp-71h]
  __int64 v33; // [rsp+78h] [rbp-69h]
  char *v34; // [rsp+80h] [rbp-61h]
  __int64 v35; // [rsp+88h] [rbp-59h]
  const char *v36; // [rsp+90h] [rbp-51h]
  int v37; // [rsp+98h] [rbp-49h]
  int v38; // [rsp+9Ch] [rbp-45h]
  const char *v39; // [rsp+A0h] [rbp-41h]
  int v40; // [rsp+A8h] [rbp-39h]
  int v41; // [rsp+ACh] [rbp-35h]
  char *v42; // [rsp+B0h] [rbp-31h]
  __int64 v43; // [rsp+B8h] [rbp-29h]
  char *v44; // [rsp+C0h] [rbp-21h]
  __int64 v45; // [rsp+C8h] [rbp-19h]
  char *v46; // [rsp+D0h] [rbp-11h]
  __int64 v47; // [rsp+D8h] [rbp-9h]
  int v48; // [rsp+118h] [rbp+37h] BYREF

  v48 = a4;
  v13 = a6;
  v25 = &v48;
  v27 = a5;
  v14 = -1LL;
  v26 = 4LL;
  v28 = 16LL;
  v15 = 5;
  if ( a6 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a6[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v17 = 5;
  }
  v30 = v17;
  v31 = 0;
  v32 = &a7;
  v33 = 2LL;
  if ( !a6 )
    v13 = "NULL";
  v34 = &a8;
  v18 = a9;
  v29 = v13;
  v35 = 2LL;
  if ( a9 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a9[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5;
  }
  v37 = v20;
  v38 = 0;
  if ( !a9 )
    v18 = "NULL";
  v36 = v18;
  v21 = a10;
  v22 = a10 == 0LL;
  if ( a10 )
  {
    do
      ++v14;
    while ( a10[v14] );
    v15 = v14 + 1;
    v22 = a10 == 0LL;
  }
  if ( v22 )
    v21 = "NULL";
  v40 = v15;
  v41 = 0;
  v42 = &a11;
  v39 = v21;
  v44 = &a12;
  v43 = 4LL;
  v46 = &a13;
  v45 = 4LL;
  v47 = 1LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v21, &EventNVMeEnumeratePerNamespace, 0LL, 0xBu, &v24);
}
