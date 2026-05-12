/*
 * XREFs of McTemplateK0zqjuuussssq_EtwWriteTransfer @ 0x14009898C
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1400A7264 (RaidUnitGetCompatibleIds.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuussssq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14)
{
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // r8d
  const char *v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  const char *v21; // rax
  __int64 v22; // rdx
  int v23; // edx
  const char *v24; // rax
  __int64 v25; // rdx
  int v26; // edx
  const char *v27; // rax
  bool v28; // zf
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+30h] [rbp-C9h] BYREF
  const wchar_t *v31; // [rsp+40h] [rbp-B9h]
  int v32; // [rsp+48h] [rbp-B1h]
  int v33; // [rsp+4Ch] [rbp-ADh]
  char *v34; // [rsp+50h] [rbp-A9h]
  __int64 v35; // [rsp+58h] [rbp-A1h]
  __int64 v36; // [rsp+60h] [rbp-99h]
  __int64 v37; // [rsp+68h] [rbp-91h]
  char *v38; // [rsp+70h] [rbp-89h]
  __int64 v39; // [rsp+78h] [rbp-81h]
  char *v40; // [rsp+80h] [rbp-79h]
  __int64 v41; // [rsp+88h] [rbp-71h]
  char *v42; // [rsp+90h] [rbp-69h]
  __int64 v43; // [rsp+98h] [rbp-61h]
  const char *v44; // [rsp+A0h] [rbp-59h]
  int v45; // [rsp+A8h] [rbp-51h]
  int v46; // [rsp+ACh] [rbp-4Dh]
  const char *v47; // [rsp+B0h] [rbp-49h]
  int v48; // [rsp+B8h] [rbp-41h]
  int v49; // [rsp+BCh] [rbp-3Dh]
  const char *v50; // [rsp+C0h] [rbp-39h]
  int v51; // [rsp+C8h] [rbp-31h]
  int v52; // [rsp+CCh] [rbp-2Dh]
  const char *v53; // [rsp+D0h] [rbp-29h]
  int v54; // [rsp+D8h] [rbp-21h]
  int v55; // [rsp+DCh] [rbp-1Dh]
  char *v56; // [rsp+E0h] [rbp-19h]
  __int64 v57; // [rsp+E8h] [rbp-11h]

  v14 = -1LL;
  if ( a4 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a4[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v32 = v16;
  v33 = 0;
  v34 = &a5;
  v17 = 5;
  v36 = a6;
  if ( !a4 )
    a4 = L"NULL";
  v18 = a10;
  v38 = &a7;
  v40 = &a8;
  v42 = &a9;
  v31 = a4;
  v35 = 4LL;
  v37 = 16LL;
  v39 = 1LL;
  v41 = 1LL;
  v43 = 1LL;
  if ( a10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a10[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5;
  }
  v45 = v20;
  v21 = a11;
  if ( !a10 )
    v18 = "NULL";
  v46 = 0;
  v44 = v18;
  if ( a11 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a11[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v48 = v23;
  v49 = 0;
  if ( !a11 )
    v21 = "NULL";
  v47 = v21;
  v24 = a12;
  if ( a12 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a12[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v51 = v26;
  v52 = 0;
  if ( !a12 )
    v24 = "NULL";
  v50 = v24;
  v27 = a13;
  v28 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v14;
    while ( a13[v14] );
    v17 = v14 + 1;
    v28 = a13 == 0LL;
  }
  if ( v28 )
    v27 = "NULL";
  v54 = v17;
  v53 = v27;
  v55 = 0;
  v56 = &a14;
  v57 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v14, &EventSMRUnsupportedError, 0LL, 0xCu, &v30);
}
