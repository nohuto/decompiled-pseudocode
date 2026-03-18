/*
 * XREFs of ?UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z @ 0x140126D64
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1401266A0 (rimUpdatePointerDeviceFrameScanTime.c)
 *     rimExtractScantime @ 0x140126794 (rimExtractScantime.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::UpdateScantime(
        const struct tagHPD_FRAME_SCAN_TIME *a1,
        unsigned __int8 a2,
        int a3)
{
  char v3; // cf
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  int v7; // [rsp+3Ch] [rbp-C4h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+44h] [rbp-BCh] BYREF
  int v10; // [rsp+48h] [rbp-B8h] BYREF
  int v11; // [rsp+4Ch] [rbp-B4h] BYREF
  int v12; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+54h] [rbp-ACh] BYREF
  _DWORD v14[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v19; // [rsp+90h] [rbp-70h]
  int v20; // [rsp+98h] [rbp-68h]
  int v21; // [rsp+9Ch] [rbp-64h]
  _DWORD *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  int *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  int *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  int *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  int *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  int *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  int *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  int *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  int *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  int *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  int *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  __int64 *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  __int64 *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]

  if ( (unsigned int)dword_1402A9E40 > 5
    && (qword_1402A9E50 & 0x100) != 0
    && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
  {
    v15 = *((_QWORD *)a1 + 5);
    v16 = *((_QWORD *)a1 + 4);
    v4 = *((_DWORD *)a1 + 7);
    v5 = *((_DWORD *)a1 + 6);
    v6 = *((_DWORD *)a1 + 5);
    v7 = *((_DWORD *)a1 + 4);
    v8 = *((_DWORD *)a1 + 3);
    v9 = *((_DWORD *)a1 + 2);
    v10 = *((_DWORD *)a1 + 1);
    v11 = *(_DWORD *)a1;
    v3 = *((_DWORD *)a1 + 12) & 1;
    v13 = a3;
    v47 = 8LL;
    v12 = -v3;
    v14[0] = a2;
    v46 = &v15;
    v44 = &v16;
    v42 = &v4;
    v40 = &v5;
    v38 = &v6;
    v36 = &v7;
    v34 = &v8;
    v32 = &v9;
    v30 = &v10;
    v28 = &v11;
    v26 = &v12;
    v24 = &v13;
    v22 = v14;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    v45 = 8LL;
    v43 = 4LL;
    v41 = 4LL;
    v39 = 4LL;
    v37 = 4LL;
    v35 = 4LL;
    v33 = 4LL;
    v31 = 4LL;
    v29 = 4LL;
    v27 = 4LL;
    v25 = 4LL;
    v23 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 256LL;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v19 = &unk_1402873FE;
    UserData.Reserved = 2;
    v20 = 227;
    v21 = 1;
    v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 0xFu, &UserData);
  }
}
