/*
 * XREFs of HvpLogInvalidLogHeader @ 0x140ADD594
 * Callers:
 *     HvAnalyzeLogFiles @ 0x140ADCF88 (HvAnalyzeLogFiles.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HvpHeaderCheckSum @ 0x140C5E720 (HvpHeaderCheckSum.c)
 */

void __fastcall HvpLogInvalidLogHeader(__int64 *a1, char a2, int *a3)
{
  char v3; // [rsp+30h] [rbp-D0h] BYREF
  int v4; // [rsp+34h] [rbp-CCh] BYREF
  int v5; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+3Ch] [rbp-C4h] BYREF
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+44h] [rbp-BCh] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  int v10; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+60h] [rbp-A0h] BYREF
  char *v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  int *v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  int *v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  int *v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  __int64 *v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  __int64 *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  int *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  int *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  int *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  int *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]

  if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 8) != 0 && (qword_140E09F00 & 8) == qword_140E09F00 )
  {
    v3 = a2;
    v14 = &v3;
    v4 = *a3;
    v16 = &v4;
    v5 = a3[1];
    v18 = &v5;
    v6 = a3[2];
    v20 = &v6;
    v11 = *(_QWORD *)(a3 + 3);
    v22 = &v11;
    v12 = *a1;
    v24 = &v12;
    v7 = a3[7];
    v26 = &v7;
    v8 = a3[10];
    v28 = &v8;
    v9 = a3[127];
    v30 = &v9;
    v15 = 1LL;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 4LL;
    v23 = 8LL;
    v25 = 8LL;
    v27 = 4LL;
    v29 = 4LL;
    v31 = 4LL;
    v10 = HvpHeaderCheckSum(a3);
    v33 = 4LL;
    v32 = &v10;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E09EE8,
      (unsigned __int8 *)byte_1400583B5,
      0LL,
      0LL,
      0xCu,
      &v13);
  }
}
