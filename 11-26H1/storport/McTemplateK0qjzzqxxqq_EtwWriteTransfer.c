/*
 * XREFs of McTemplateK0qjzzqxxqq_EtwWriteTransfer @ 0x14008E894
 * Callers:
 *     StorLogStartAdapterFailure @ 0x140097CA8 (StorLogStartAdapterFailure.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzqxxqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  __int64 v12; // rcx
  const wchar_t *v13; // rax
  __int64 v14; // rdx
  int v15; // edx
  const wchar_t *v16; // rax
  __int64 v17; // rcx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-99h] BYREF
  int *v20; // [rsp+40h] [rbp-89h]
  __int64 v21; // [rsp+48h] [rbp-81h]
  __int64 v22; // [rsp+50h] [rbp-79h]
  __int64 v23; // [rsp+58h] [rbp-71h]
  const wchar_t *v24; // [rsp+60h] [rbp-69h]
  int v25; // [rsp+68h] [rbp-61h]
  int v26; // [rsp+6Ch] [rbp-5Dh]
  const wchar_t *v27; // [rsp+70h] [rbp-59h]
  int v28; // [rsp+78h] [rbp-51h]
  int v29; // [rsp+7Ch] [rbp-4Dh]
  char *v30; // [rsp+80h] [rbp-49h]
  __int64 v31; // [rsp+88h] [rbp-41h]
  char *v32; // [rsp+90h] [rbp-39h]
  __int64 v33; // [rsp+98h] [rbp-31h]
  char *v34; // [rsp+A0h] [rbp-29h]
  __int64 v35; // [rsp+A8h] [rbp-21h]
  char *v36; // [rsp+B0h] [rbp-19h]
  __int64 v37; // [rsp+B8h] [rbp-11h]
  char *v38; // [rsp+C0h] [rbp-9h]
  __int64 v39; // [rsp+C8h] [rbp-1h]
  int v40; // [rsp+108h] [rbp+3Fh] BYREF

  v40 = a4;
  v21 = 4LL;
  v20 = &v40;
  v12 = -1LL;
  v22 = a5;
  v13 = a6;
  v23 = 16LL;
  if ( a6 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a6[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v25 = v15;
  v26 = 0;
  if ( !a6 )
    v13 = L"NULL";
  v24 = v13;
  v16 = a7;
  if ( a7 )
  {
    do
      ++v12;
    while ( a7[v12] );
    v17 = (unsigned int)(2 * v12 + 2);
  }
  else
  {
    v17 = 10LL;
  }
  v28 = v17;
  v29 = 0;
  if ( !a7 )
    v16 = L"NULL";
  v31 = 4LL;
  v27 = v16;
  v30 = &a8;
  v32 = &a9;
  v34 = &a10;
  v36 = &a11;
  v38 = &a12;
  v33 = 8LL;
  v35 = 8LL;
  v37 = 4LL;
  v39 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v17, &EventStartAdapterFailed, 0LL, 0xAu, &v19);
}
