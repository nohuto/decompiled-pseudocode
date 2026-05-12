/*
 * XREFs of sub_140134334 @ 0x140134334
 * Callers:
 *     sub_140086178 @ 0x140086178 (sub_140086178.c)
 * Callees:
 *     sub_140134648 @ 0x140134648 (sub_140134648.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_140134334(__int64 *a1)
{
  __int64 v1; // r14
  _QWORD *v2; // rbx
  int *v3; // rdi
  _BYTE *v4; // rsi
  PVOID SystemRoutineAddress; // rax
  int v6; // eax
  __int64 v7; // rax
  PVOID v8; // rax
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+58h] [rbp-A8h]
  const wchar_t *v17; // [rsp+60h] [rbp-A0h]
  int *v18; // [rsp+68h] [rbp-98h]
  int v19; // [rsp+70h] [rbp-90h]
  int *v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  int v23; // [rsp+90h] [rbp-70h]
  const wchar_t *v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  int v26; // [rsp+A8h] [rbp-58h]
  int *v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B8h] [rbp-48h]
  __int64 v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h]
  _OWORD v31[2]; // [rsp+100h] [rbp+0h] BYREF
  int v32; // [rsp+120h] [rbp+20h]
  __int16 v33; // [rsp+124h] [rbp+24h]

  v1 = *a1;
  v2 = (_QWORD *)a1[1];
  v3 = (int *)a1[2];
  v4 = (_BYTE *)a1[3];
  v32 = 92;
  v17 = L"Start";
  v18 = &v11;
  v31[1] = xmmword_14014BAD8;
  v20 = &v10;
  v12 = 0;
  v13 = 0;
  v11 = 0;
  v10 = 0;
  v33 = 0;
  v31[0] = xmmword_14014BAC8;
  v15 = 0LL;
  v16 = 288;
  v19 = 67108868;
  v21 = 4;
  v22 = 0LL;
  v23 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v6 = ((__int64 (__fastcall *)(__int64, _OWORD *, __int64 *, _QWORD, _QWORD))SystemRoutineAddress)(
         2147483650LL,
         v31,
         &v15,
         0LL,
         0LL);
  if ( v6 >= 0 && v11 )
  {
    v15 = 0LL;
    v17 = L"Flags";
    v16 = 288;
    v18 = &v12;
    v20 = &v10;
    v24 = L"Level";
    v25 = &v13;
    v27 = &v10;
    v7 = -1LL;
    v19 = 67108868;
    v21 = 4;
    v22 = 0LL;
    v23 = 288;
    v26 = 67108868;
    v28 = 1;
    v29 = 0LL;
    v30 = 0;
    do
      ++v7;
    while ( *((_WORD *)v31 + v7) );
    sub_140134648((char *)v31 + 2 * v7, v1);
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    v8 = MmGetSystemRoutineAddress(&DestinationString);
    if ( !v8 )
      v8 = RtlQueryRegistryValues;
    v6 = ((__int64 (__fastcall *)(__int64, _OWORD *, __int64 *, _QWORD, _QWORD))v8)(2147483650LL, v31, &v15, 0LL, 0LL);
    if ( v6 >= 0 && v11 == 1 )
    {
      *v2 = 1LL;
      *v3 = v12 & 0x7FFFFFFF;
      LOBYTE(v6) = v13;
      *v4 = v13;
    }
  }
  return v6;
}
