/*
 * XREFs of ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x140090DEC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@434444@Z @ 0x140090154 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@@-$_tlgWriteTemp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U1@U1@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@433344444@Z @ 0x140091530 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U1@U1@U2@U2@U2@U2@U2@@-$_tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U1@U3@U3@U1@U1@U1@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@3553335555@Z @ 0x140091660 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U1@U3@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U1@U1@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344333444@Z @ 0x1400917C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U1@U1@U1@U2@U2@U2@@-$_tlgWri.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Delivery::ScanSysQueue(
        const struct tagQMSG *a1,
        const struct tagMSG *a2,
        const struct tagTHREADINFO *a3,
        __int64 a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v6; // rax
  __int16 v7; // di
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned int v12; // [rsp+90h] [rbp-80h] BYREF
  int v13; // [rsp+94h] [rbp-7Ch] BYREF
  int v14; // [rsp+98h] [rbp-78h] BYREF
  int v15; // [rsp+9Ch] [rbp-74h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp-70h] BYREF
  unsigned int v17; // [rsp+A4h] [rbp-6Ch] BYREF
  __int64 v18; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-60h] BYREF
  int v20; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-38h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-20h] BYREF
  void *v27; // [rsp+100h] [rbp-10h]
  int v28; // [rsp+108h] [rbp-8h]
  int v29; // [rsp+10Ch] [rbp-4h]
  __int64 *v30; // [rsp+110h] [rbp+0h]
  __int64 v31; // [rsp+118h] [rbp+8h]
  __int64 *v32; // [rsp+120h] [rbp+10h]
  __int64 v33; // [rsp+128h] [rbp+18h]
  unsigned int *v34; // [rsp+130h] [rbp+20h]
  __int64 v35; // [rsp+138h] [rbp+28h]
  int *v36; // [rsp+140h] [rbp+30h]
  __int64 v37; // [rsp+148h] [rbp+38h]
  __int64 *v38; // [rsp+150h] [rbp+40h]
  __int64 v39; // [rsp+158h] [rbp+48h]
  __int64 *v40; // [rsp+160h] [rbp+50h]
  __int64 v41; // [rsp+168h] [rbp+58h]
  __int64 *v42; // [rsp+170h] [rbp+60h]
  __int64 v43; // [rsp+178h] [rbp+68h]
  int *v44; // [rsp+180h] [rbp+70h]
  __int64 v45; // [rsp+188h] [rbp+78h]
  int *v46; // [rsp+190h] [rbp+80h]
  __int64 v47; // [rsp+198h] [rbp+88h]
  unsigned int *v48; // [rsp+1A0h] [rbp+90h]
  __int64 v49; // [rsp+1A8h] [rbp+98h]
  __int64 *v50; // [rsp+1B0h] [rbp+A0h]
  __int64 v51; // [rsp+1B8h] [rbp+A8h]

  v4 = *((_DWORD *)a2 + 2);
  if ( v4 >= 0x241 && v4 <= 0x244 )
  {
LABEL_15:
    v7 = *((_WORD *)a2 + 8);
    if ( v7 == 1 )
    {
      if ( (unsigned int)dword_1403AA9C0 > 4
        && (qword_1403AA9D0 & 0x10) != 0
        && (qword_1403AA9D8 & 0x10) == qword_1403AA9D8 )
      {
        v10 = *((_QWORD *)a3 + 170);
        v15 = *((_DWORD *)a2 + 2);
        v20 = (v10 >> 29) & 1;
        v17 = (unsigned __int8)a4;
        v13 = *((unsigned __int16 *)a2 + 9);
        v14 = *((_DWORD *)a2 + 8);
        v18 = *((_QWORD *)a2 + 3);
        *(_QWORD *)&EventDescriptor.Id = *((_QWORD *)a2 + 2);
        v21 = *(_QWORD *)a2;
        v22 = *((_QWORD *)a3 + 58);
        v19 = *((_QWORD *)a1 + 18);
        v12 = (v10 >> 13) & 1;
        v16 = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1403AA9C0,
          (unsigned int)&unk_140373F4F,
          1,
          a4,
          (__int64)&v19,
          (__int64)&v22,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v21,
          (__int64)&EventDescriptor,
          (__int64)&v18,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v17,
          (__int64)&v20);
      }
    }
    else if ( (unsigned int)dword_1403AA9C0 > 4
           && (qword_1403AA9D0 & 0x10) != 0
           && (qword_1403AA9D8 & 0x10) == qword_1403AA9D8 )
    {
      v8 = *((_QWORD *)a3 + 170);
      v12 = *((_DWORD *)a2 + 2);
      v16 = (v8 >> 29) & 1;
      v15 = (unsigned __int8)a4;
      v13 = *((_DWORD *)a2 + 8);
      v19 = *((_QWORD *)a2 + 3);
      v22 = *((_QWORD *)a2 + 2);
      v21 = *(_QWORD *)a2;
      *(_QWORD *)&EventDescriptor.Id = *((_QWORD *)a3 + 58);
      LODWORD(v18) = *((unsigned __int16 *)a2 + 9);
      v23 = *((_QWORD *)a1 + 5);
      v24 = *((_QWORD *)a1 + 18);
      v14 = (v8 >> 13) & 1;
      v17 = v4;
      LOWORD(v20) = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1403AA9C0,
        (unsigned int)&unk_1403740DB,
        1,
        a4,
        (__int64)&v24,
        (__int64)&v20,
        (__int64)&v23,
        (__int64)&v18,
        (__int64)&EventDescriptor,
        (__int64)&v17,
        (__int64)&v12,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v19,
        (__int64)&v13,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v16);
    }
    return;
  }
  if ( v4 >= 0x245 )
  {
    if ( v4 > 0x257 || v4 == 589 )
      return;
    goto LABEL_15;
  }
  if ( v4 >= 0x200 )
  {
    if ( v4 > 0x20E )
      return;
  }
  else if ( v4 - 160 > 0xD )
  {
    if ( v4 >= 0x100 )
    {
      if ( (unsigned int)dword_1403AA9C0 > 4
        && v4 <= 0x109
        && (qword_1403AA9D0 & 0x10) != 0
        && (qword_1403AA9D8 & 0x10) == qword_1403AA9D8 )
      {
        v11 = *((_QWORD *)a3 + 170);
        v13 = *((_DWORD *)a2 + 2);
        LODWORD(v18) = (v11 >> 29) & 1;
        v16 = (unsigned __int8)a4;
        v14 = *((_DWORD *)a2 + 8);
        v24 = *(_QWORD *)a2;
        v23 = *((_QWORD *)a3 + 58);
        v19 = *((_QWORD *)a1 + 18);
        v15 = (v11 >> 13) & 1;
        v12 = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1403AA9C0,
          (__int64)&unk_140374283,
          1LL,
          a4,
          (__int64)&v19,
          (__int64)&v23,
          (__int64)&v12,
          (__int64)&v13,
          (__int64)&v24,
          (__int64)&v14,
          (__int64)&v15,
          (__int64)&v16,
          (__int64)&v18);
      }
    }
    else if ( (unsigned int)dword_1403AA9C0 > 4
           && v4 == 255
           && (qword_1403AA9D0 & 0x10) != 0
           && (qword_1403AA9D8 & 0x10) == qword_1403AA9D8 )
    {
      v6 = *((unsigned int *)a3 + 340);
      v23 = *((_QWORD *)a2 + 2);
      LODWORD(v18) = (v6 >> 29) & 1;
      v16 = (unsigned __int8)a4;
      v15 = *((_DWORD *)a2 + 8);
      v24 = *((_QWORD *)a2 + 3);
      v19 = *(_QWORD *)a2;
      v22 = *((_QWORD *)a3 + 58);
      v14 = 255;
      v13 = 255;
      v21 = *((_QWORD *)a1 + 18);
      v12 = (_BYTE)v23 == 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1403AA9C0,
        (unsigned int)&unk_1403741C4,
        1,
        a4,
        (__int64)&v21,
        (__int64)&v12,
        (__int64)&v22,
        (__int64)&v13,
        (__int64)&v14,
        (__int64)&v19,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v15,
        (__int64)&v16,
        (__int64)&v18);
    }
    return;
  }
  if ( (unsigned int)dword_1403AA9C0 > 4 && (qword_1403AA9D0 & 0x10) != 0 && (qword_1403AA9D8 & 0x10) == qword_1403AA9D8 )
  {
    v9 = *((_QWORD *)a3 + 170);
    v13 = *((_DWORD *)a2 + 2);
    LODWORD(v18) = (v9 >> 29) & 1;
    v16 = (unsigned __int8)a4;
    v14 = *((_DWORD *)a2 + 8);
    v24 = *((_QWORD *)a2 + 3);
    v23 = *((_QWORD *)a2 + 2);
    v19 = *(_QWORD *)a2;
    v22 = *((_QWORD *)a3 + 58);
    v21 = *((_QWORD *)a1 + 18);
    v50 = &v18;
    v48 = &v16;
    v46 = &v15;
    v44 = &v14;
    v42 = &v24;
    v40 = &v23;
    v38 = &v19;
    v36 = &v13;
    v34 = &v12;
    v32 = &v22;
    v30 = &v21;
    v15 = (v9 >> 13) & 1;
    UserData.Ptr = (ULONGLONG)off_1403AA9C8;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v12 = v4;
    v51 = 4LL;
    v49 = 4LL;
    v47 = 4LL;
    v45 = 4LL;
    v43 = 8LL;
    v41 = 8LL;
    v39 = 8LL;
    v37 = 4LL;
    v35 = 4LL;
    v33 = 8LL;
    v31 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 16LL;
    UserData.Size = *(unsigned __int16 *)off_1403AA9C8;
    v27 = &unk_140374026;
    UserData.Reserved = 2;
    v28 = 180;
    v29 = 1;
    v17 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xDu, &UserData);
  }
}
