/*
 * XREFs of sub_1400727B0 @ 0x1400727B0
 * Callers:
 *     sub_14001D220 @ 0x14001D220 (sub_14001D220.c)
 *     sub_14002871C @ 0x14002871C (sub_14002871C.c)
 *     StorPortSetDeviceQueueDepth @ 0x140029490 (StorPortSetDeviceQueueDepth.c)
 *     sub_140035B00 @ 0x140035B00 (sub_140035B00.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400727B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  __int64 v12; // rax
  int v13; // eax
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-99h] BYREF
  const wchar_t *v16; // [rsp+40h] [rbp-89h]
  int v17; // [rsp+48h] [rbp-81h]
  int v18; // [rsp+4Ch] [rbp-7Dh]
  char *v19; // [rsp+50h] [rbp-79h]
  __int64 v20; // [rsp+58h] [rbp-71h]
  char *v21; // [rsp+60h] [rbp-69h]
  __int64 v22; // [rsp+68h] [rbp-61h]
  char *v23; // [rsp+70h] [rbp-59h]
  __int64 v24; // [rsp+78h] [rbp-51h]
  char *v25; // [rsp+80h] [rbp-49h]
  __int64 v26; // [rsp+88h] [rbp-41h]
  char *v27; // [rsp+90h] [rbp-39h]
  __int64 v28; // [rsp+98h] [rbp-31h]
  char *v29; // [rsp+A0h] [rbp-29h]
  __int64 v30; // [rsp+A8h] [rbp-21h]
  char *v31; // [rsp+B0h] [rbp-19h]
  __int64 v32; // [rsp+B8h] [rbp-11h]
  char *v33; // [rsp+C0h] [rbp-9h]
  __int64 v34; // [rsp+C8h] [rbp-1h]

  if ( a4 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a4[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v17 = v13;
  v18 = 0;
  v20 = 4LL;
  v19 = &a5;
  if ( !a4 )
    a4 = L"NULL";
  v22 = 1LL;
  v16 = a4;
  v21 = &a6;
  v24 = 1LL;
  v23 = &a7;
  v25 = &a8;
  v27 = &a9;
  v29 = &a10;
  v31 = &a11;
  v33 = &a12;
  v26 = 1LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  v34 = 4LL;
  return sub_1400031E4((__int64)L"NULL", &stru_14014ADB8, 0LL, 0xAu, &v15);
}
