/*
 * XREFs of CarEtwCrashEvent @ 0x14064C4AC
 * Callers:
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char CarEtwCrashEvent()
{
  unsigned int v0; // r8d
  char result; // al
  __int64 v2; // r10
  const CHAR *v3; // r9
  int *v4; // r10
  int v5; // ecx
  char v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+34h] [rbp-CCh] BYREF
  int v8; // [rsp+38h] [rbp-C8h] BYREF
  int v9; // [rsp+3Ch] [rbp-C4h] BYREF
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+44h] [rbp-BCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-B0h] BYREF
  int *v13; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  int *v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  int *v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  char *v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  _BYTE v21[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v22[16]; // [rsp+C0h] [rbp-40h] BYREF
  int *v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  int *v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  __int64 v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]

  v0 = dword_140E08E50;
  result = dword_140E08E50 && tlgKeywordOn((__int64)&dword_140E08E50, 0x800000000000LL);
  if ( CarLogInitialized && result && v0 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E08E50, 0x800000000000LL);
    if ( result )
    {
      v7 = 0;
      v13 = &v7;
      v8 = *(_DWORD *)(v2 + 56);
      v15 = &v8;
      v9 = CarTipTag;
      v17 = &v9;
      v19 = &v6;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v6 = 0;
      v20 = 1LL;
      tlgCreate1Sz_wchar_t((__int64)v21, L"POSTMORTEM");
      tlgCreate1Sz_char((__int64)v22, v3);
      v5 = *v4;
      v23 = &v10;
      v11 = v4[2];
      v10 = v5;
      v25 = &v11;
      v27 = *((_QWORD *)v4 + 5);
      v24 = 4LL;
      v26 = 4LL;
      v28 = 8LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E08E50,
               (unsigned __int8 *)byte_140053AFD,
               0LL,
               0LL,
               0xBu,
               &v12);
    }
  }
  return result;
}
