/*
 * XREFs of PnpTraceDeviceRemovalForResetComplete @ 0x1407B47C0
 * Callers:
 *     IopLogDeviceResetComplete @ 0x1407A5314 (IopLogDeviceResetComplete.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PnpTraceDeviceRemovalForResetComplete()
{
  __int64 v0; // rdx
  unsigned int v1; // r8d
  __int64 v2; // r9
  int v3; // r10d
  __int64 v4; // r11
  int v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v12; // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  _DWORD *v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  __int64 v16; // [rsp+90h] [rbp-70h]
  _DWORD v17[2]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  __int64 v20; // [rsp+B0h] [rbp-50h]
  _DWORD v21[2]; // [rsp+B8h] [rbp-48h] BYREF
  int *v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  int *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  int *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  __int64 *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  int *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  _DWORD *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  __int16 *v34; // [rsp+120h] [rbp+20h]
  _DWORD v35[2]; // [rsp+128h] [rbp+28h] BYREF

  if ( dword_140E06E48
    && tlgKeywordOn((__int64)&dword_140E06E48, 0x400000000000LL)
    && v1 > 5
    && tlgKeywordOn((__int64)&dword_140E06E48, v0) )
  {
    v9 = 0x1000000LL;
    v12 = &v9;
    v13 = 8LL;
    v14 = v17;
    v16 = *(_QWORD *)(v2 + 48);
    v17[0] = *(unsigned __int16 *)(v2 + 40);
    v18 = v21;
    v20 = *(_QWORD *)(v2 + 64);
    v21[0] = *(unsigned __int16 *)(v2 + 56);
    v5 = *(_DWORD *)(v2 + 300);
    v22 = &v5;
    v24 = &v6;
    v26 = &v7;
    v28 = &v10;
    v30 = &v8;
    v32 = v35;
    v34 = off_140E06E40;
    v35[0] = (unsigned __int16)PnpEmptyUnicodeString;
    v15 = 2LL;
    v17[1] = v4;
    v19 = 2LL;
    v21[1] = v4;
    v23 = 4LL;
    v6 = v3;
    v25 = 4LL;
    v7 = v4;
    v27 = 4LL;
    v10 = v4;
    v29 = 8LL;
    v8 = v4;
    v31 = 4LL;
    v33 = 2LL;
    v35[1] = v4;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06E48,
      (unsigned __int8 *)&dword_140048784,
      0LL,
      0LL,
      0xEu,
      &v11);
  }
}
