/*
 * XREFs of EtwpWriteAppStateChangeWithStats @ 0x140AFF404
 * Callers:
 *     EtwTraceAppStateChange @ 0x1409CF9F8 (EtwTraceAppStateChange.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetProcessStartKey @ 0x14047D210 (PsGetProcessStartKey.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall EtwpWriteAppStateChangeWithStats(__int64 a1, __int64 a2)
{
  unsigned __int64 ProcessStartKey; // rax
  __int64 v3; // r10
  unsigned __int8 v4; // cl
  __int64 v5; // r8
  char v6; // [rsp+30h] [rbp-D0h] BYREF
  char v7; // [rsp+31h] [rbp-CFh] BYREF
  char v8; // [rsp+32h] [rbp-CEh] BYREF
  bool v9; // [rsp+33h] [rbp-CDh] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  int *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  int *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  char *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  char *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  char *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  bool *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  __int64 v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  int *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  __int64 *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]

  if ( (unsigned int)dword_140E08F40 > 5
    && (qword_140E08F50 & 0x200000000003LL) != 0
    && (qword_140E08F58 & 0x200000000003LL) == qword_140E08F58 )
  {
    v10 = *(_DWORD *)(a1 + 464);
    v18 = &v10;
    v16 = a2;
    v17 = 98LL;
    v19 = 4LL;
    ProcessStartKey = PsGetProcessStartKey(a1);
    v4 = *(_BYTE *)(v3 + 1531);
    v13 = ProcessStartKey;
    v25 = 1LL;
    v20 = &v13;
    v11 = *(_DWORD *)(v3 + 1364);
    v22 = &v11;
    LOBYTE(ProcessStartKey) = (*(_DWORD *)(v3 + 1532) & 4) != 0;
    v27 = 1LL;
    v6 = ProcessStartKey;
    v24 = &v6;
    v29 = 1LL;
    v7 = v4 & 7;
    v26 = &v7;
    v8 = (v4 >> 3) & 7;
    v9 = (v4 & 0x40) != 0;
    v28 = &v8;
    v31 = 1LL;
    v30 = &v9;
    v12 = *(_DWORD *)(v3 + 1192);
    v34 = &v12;
    v14 = *(_QWORD *)(v3 + 1704) << 12;
    v36 = &v14;
    v32 = v5;
    v21 = 8LL;
    v23 = 4LL;
    v33 = 44LL;
    v35 = 4LL;
    v37 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08F40,
      (unsigned __int8 *)&word_1400550A6,
      0LL,
      0LL,
      0xDu,
      &v15);
  }
}
