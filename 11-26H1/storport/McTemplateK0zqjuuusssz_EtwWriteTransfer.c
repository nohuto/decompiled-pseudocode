/*
 * XREFs of McTemplateK0zqjuuusssz_EtwWriteTransfer @ 0x1400276DC
 * Callers:
 *     RaidBusEnumeratorProcessNewUnit @ 0x140034E94 (RaidBusEnumeratorProcessNewUnit.c)
 *     StorProcessNVMeNewUnit @ 0x140191C34 (StorProcessNVMeNewUnit.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0zqjuuusssz_EtwWriteTransfer(
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
        const wchar_t *a13)
{
  __int64 v13; // rcx
  int v14; // r10d
  __int64 v15; // rax
  int v16; // eax
  const char *v17; // rdx
  int v18; // r8d
  __int64 v19; // rax
  int v20; // eax
  const char *v21; // rax
  __int64 v22; // rdx
  int v23; // edx
  const char *v24; // rax
  bool v25; // zf
  __int64 v26; // rdx
  const wchar_t *v27; // rax
  bool v28; // zf
  _BYTE v30[16]; // [rsp+30h] [rbp-B1h] BYREF
  const wchar_t *v31; // [rsp+40h] [rbp-A1h]
  int v32; // [rsp+48h] [rbp-99h]
  int v33; // [rsp+4Ch] [rbp-95h]
  char *v34; // [rsp+50h] [rbp-91h]
  __int64 v35; // [rsp+58h] [rbp-89h]
  __int64 v36; // [rsp+60h] [rbp-81h]
  __int64 v37; // [rsp+68h] [rbp-79h]
  char *v38; // [rsp+70h] [rbp-71h]
  __int64 v39; // [rsp+78h] [rbp-69h]
  char *v40; // [rsp+80h] [rbp-61h]
  __int64 v41; // [rsp+88h] [rbp-59h]
  char *v42; // [rsp+90h] [rbp-51h]
  __int64 v43; // [rsp+98h] [rbp-49h]
  const char *v44; // [rsp+A0h] [rbp-41h]
  int v45; // [rsp+A8h] [rbp-39h]
  int v46; // [rsp+ACh] [rbp-35h]
  const char *v47; // [rsp+B0h] [rbp-31h]
  int v48; // [rsp+B8h] [rbp-29h]
  int v49; // [rsp+BCh] [rbp-25h]
  const char *v50; // [rsp+C0h] [rbp-21h]
  int v51; // [rsp+C8h] [rbp-19h]
  int v52; // [rsp+CCh] [rbp-15h]
  const wchar_t *v53; // [rsp+D0h] [rbp-11h]
  int v54; // [rsp+D8h] [rbp-9h]
  int v55; // [rsp+DCh] [rbp-5h]

  v13 = -1LL;
  v14 = 10;
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
  v17 = a10;
  v32 = v16;
  v33 = 0;
  v34 = &a5;
  if ( !a4 )
    a4 = L"NULL";
  v18 = 5;
  v36 = a6;
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
    v17 = "NULL";
  v46 = 0;
  v44 = v17;
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
  v25 = a12 == 0LL;
  if ( a12 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a12[v26] );
    v18 = v26 + 1;
    v25 = a12 == 0LL;
  }
  if ( v25 )
    v24 = "NULL";
  v51 = v18;
  v50 = v24;
  v27 = a13;
  v52 = 0;
  v28 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v13;
    while ( a13[v13] );
    v14 = 2 * v13 + 2;
    v28 = a13 == 0LL;
  }
  if ( v28 )
    v27 = L"NULL";
  v54 = v14;
  v53 = v27;
  v55 = 0;
  return McGenEventWrite_EtwWriteTransfer(v13, &EventUnitArrived, 0LL, 11LL, v30);
}
