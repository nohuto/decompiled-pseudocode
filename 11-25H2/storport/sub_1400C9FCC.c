/*
 * XREFs of sub_1400C9FCC @ 0x1400C9FCC
 * Callers:
 *     sub_1400CA38C @ 0x1400CA38C (sub_1400CA38C.c)
 *     sub_1400D41C0 @ 0x1400D41C0 (sub_1400D41C0.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400C9FCC(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const wchar_t *v10; // r8
  const char *v11; // r9
  const char *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+38h] [rbp-69h] BYREF
  int *v22; // [rsp+48h] [rbp-59h]
  __int64 v23; // [rsp+50h] [rbp-51h]
  __int64 v24; // [rsp+58h] [rbp-49h]
  __int64 v25; // [rsp+60h] [rbp-41h]
  const wchar_t *v26; // [rsp+68h] [rbp-39h]
  int v27; // [rsp+70h] [rbp-31h]
  int v28; // [rsp+74h] [rbp-2Dh]
  char *v29; // [rsp+78h] [rbp-29h]
  __int64 v30; // [rsp+80h] [rbp-21h]
  char *v31; // [rsp+88h] [rbp-19h]
  __int64 v32; // [rsp+90h] [rbp-11h]
  const char *v33; // [rsp+98h] [rbp-9h]
  int v34; // [rsp+A0h] [rbp-1h]
  int v35; // [rsp+A4h] [rbp+3h]
  const char *v36; // [rsp+A8h] [rbp+7h]
  int v37; // [rsp+B0h] [rbp+Fh]
  int v38; // [rsp+B4h] [rbp+13h]
  int v39; // [rsp+F0h] [rbp+4Fh] BYREF

  v39 = a4;
  v10 = a6;
  v11 = a10;
  v22 = &v39;
  v13 = a9;
  v24 = a5;
  v14 = -1LL;
  v23 = 4LL;
  v25 = 16LL;
  if ( a6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a6[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v27 = v16;
  v28 = 0;
  if ( !a6 )
    v10 = L"NULL";
  v29 = &a7;
  v26 = v10;
  v30 = 1LL;
  v31 = &a8;
  v32 = 1LL;
  if ( a9 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a9[v17] );
    v18 = (unsigned int)(v17 + 1);
  }
  else
  {
    v18 = 5LL;
  }
  v34 = v18;
  v35 = 0;
  if ( !a9 )
    v13 = "NULL";
  v33 = v13;
  if ( a10 )
  {
    do
      ++v14;
    while ( a10[v14] );
    v19 = v14 + 1;
  }
  else
  {
    v19 = 5;
  }
  v37 = v19;
  v38 = 0;
  if ( !a10 )
    v11 = "NULL";
  v36 = v11;
  return sub_1400031E4(v18, a2, 0LL, 8u, &v21);
}
