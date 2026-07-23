/*
 * XREFs of PopSqmThermalZoneEnumeration @ 0x1407E8650
 * Callers:
 *     PopDiagTraceThermalZoneEnumeration @ 0x14060C084 (PopDiagTraceThermalZoneEnumeration.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopSqmThermalZoneEnumeration(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // r11d
  int v15; // r9d
  const WCHAR *v16; // r10
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[16]; // [rsp+80h] [rbp-80h] BYREF
  int *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  int *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  int *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  int *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  int *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  int *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  _BYTE v48[16]; // [rsp+120h] [rbp+20h] BYREF
  int *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]

  v12 = *(_QWORD *)(a2 + 8);
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    LOBYTE(v12) = tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL);
    if ( (_BYTE)v12 )
    {
      tlgCreate1Sz_wchar_t((__int64)v29, *(const WCHAR **)(v13 + 8));
      v30 = &v18;
      v19 = a8;
      v32 = &v19;
      v20 = a9;
      v34 = &v20;
      v36 = &v21;
      v22 = a11;
      v38 = &v22;
      v23 = a10;
      v40 = &v23;
      v24 = a6;
      v42 = &v24;
      v44 = &v25;
      v26 = a5;
      v18 = a7;
      v46 = &v26;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v21 = v14;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v25 = v15;
      v45 = 4LL;
      v47 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v48, v16);
      v49 = &v27;
      v27 = a12;
      v50 = 4LL;
      LOBYTE(v12) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140E07560,
                      (unsigned __int8 *)&word_1400519A6,
                      0LL,
                      0LL,
                      0xEu,
                      &v28);
    }
  }
  return v12;
}
