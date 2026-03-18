/*
 * XREFs of ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x140169658
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U1@U3@U3@U1@U1@U1@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@3553335555@Z @ 0x1400017E0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U1@U3@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@434444@Z @ 0x140001AF0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@@-$_tlgWriteTemp.c)
 *     IsPointerInputClientMessage @ 0x140143F90 (IsPointerInputClientMessage.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U1@U1@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@433344444@Z @ 0x140169D64 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U1@U1@U2@U2@U2@U2@U2@@-$_tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U1@U1@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344333444@Z @ 0x140169E94 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U1@U1@U1@U2@U2@U2@@-$_tlgWri.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Delivery::ScanSysQueue(
        const struct tagQMSG *a1,
        const struct tagMSG *a2,
        const struct tagTHREADINFO *a3,
        unsigned __int8 a4)
{
  unsigned int v4; // r10d
  const struct tagTHREADINFO *v5; // r11
  int v6; // edi
  int v8; // r9d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  BOOL v14; // eax
  __int64 v15; // r8
  unsigned int v16; // r9d
  unsigned int v17; // [rsp+90h] [rbp-80h] BYREF
  int v18; // [rsp+94h] [rbp-7Ch] BYREF
  int v19; // [rsp+98h] [rbp-78h] BYREF
  int v20; // [rsp+9Ch] [rbp-74h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp-70h] BYREF
  unsigned int v22; // [rsp+A4h] [rbp-6Ch] BYREF
  __int64 v23; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-20h] BYREF
  void *v32; // [rsp+100h] [rbp-10h]
  int v33; // [rsp+108h] [rbp-8h]
  int v34; // [rsp+10Ch] [rbp-4h]
  __int64 *v35; // [rsp+110h] [rbp+0h]
  __int64 v36; // [rsp+118h] [rbp+8h]
  __int64 *v37; // [rsp+120h] [rbp+10h]
  __int64 v38; // [rsp+128h] [rbp+18h]
  unsigned int *v39; // [rsp+130h] [rbp+20h]
  __int64 v40; // [rsp+138h] [rbp+28h]
  int *v41; // [rsp+140h] [rbp+30h]
  __int64 v42; // [rsp+148h] [rbp+38h]
  __int64 *v43; // [rsp+150h] [rbp+40h]
  __int64 v44; // [rsp+158h] [rbp+48h]
  __int64 *v45; // [rsp+160h] [rbp+50h]
  __int64 v46; // [rsp+168h] [rbp+58h]
  __int64 *v47; // [rsp+170h] [rbp+60h]
  __int64 v48; // [rsp+178h] [rbp+68h]
  int *v49; // [rsp+180h] [rbp+70h]
  __int64 v50; // [rsp+188h] [rbp+78h]
  int *v51; // [rsp+190h] [rbp+80h]
  __int64 v52; // [rsp+198h] [rbp+88h]
  unsigned int *v53; // [rsp+1A0h] [rbp+90h]
  __int64 v54; // [rsp+1A8h] [rbp+98h]
  unsigned int *v55; // [rsp+1B0h] [rbp+A0h]
  __int64 v56; // [rsp+1B8h] [rbp+A8h]

  v4 = *((_DWORD *)a2 + 2);
  v5 = a3;
  v6 = a4;
  if ( v4 - 577 <= 3 || (v14 = IsPointerInputClientMessage(v4), v16 = 0, v14) )
  {
    v8 = *((unsigned __int16 *)a2 + 8);
    if ( (_WORD)v8 == 1 )
    {
      if ( (unsigned int)dword_14039BB50 > 4
        && (qword_14039BB60 & 0x10) != 0
        && (qword_14039BB68 & 0x10) == qword_14039BB68 )
      {
        v10 = *((_QWORD *)v5 + 170);
        v22 = v6;
        LODWORD(v23) = (v10 >> 29) & 1;
        v20 = *((unsigned __int16 *)a2 + 9);
        v19 = *((_DWORD *)a2 + 8);
        v28 = *((_QWORD *)a2 + 3);
        v27 = *((_QWORD *)a2 + 2);
        v26 = *(_QWORD *)a2;
        v25 = *((_QWORD *)v5 + 59);
        v24 = *((_QWORD *)a1 + 18);
        v21 = (v10 >> 13) & 1;
        v18 = v4;
        v17 = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_14039BB50,
          (unsigned int)&unk_1403670EC,
          1,
          v8,
          (__int64)&v24,
          (__int64)&v25,
          (__int64)&v17,
          (__int64)&v18,
          (__int64)&v26,
          (__int64)&v27,
          (__int64)&v28,
          (__int64)&v19,
          (__int64)&v20,
          (__int64)&v21,
          (__int64)&v22,
          (__int64)&v23);
      }
    }
    else if ( (unsigned int)dword_14039BB50 > 4
           && (qword_14039BB60 & 0x10) != 0
           && (qword_14039BB68 & 0x10) == qword_14039BB68 )
    {
      v9 = *((_QWORD *)v5 + 170);
      v22 = v6;
      LODWORD(v23) = (v9 >> 29) & 1;
      v20 = *((_DWORD *)a2 + 8);
      v28 = *((_QWORD *)a2 + 3);
      v27 = *((_QWORD *)a2 + 2);
      v26 = *(_QWORD *)a2;
      v25 = *((_QWORD *)v5 + 59);
      LODWORD(v24) = *((unsigned __int16 *)a2 + 9);
      v30 = *((_QWORD *)a1 + 5);
      *(_QWORD *)&EventDescriptor.Id = *((_QWORD *)a1 + 18);
      v21 = (v9 >> 13) & 1;
      v19 = v4;
      v18 = v4;
      LOWORD(v17) = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14039BB50,
        (__int64)&unk_140367003);
    }
  }
  else if ( v4 - 512 <= 0xE || v4 - 160 <= 0xD )
  {
    if ( (unsigned int)dword_14039BB50 > 4
      && (qword_14039BB60 & 0x10) != 0
      && (qword_14039BB68 & 0x10) == qword_14039BB68 )
    {
      v11 = *(_QWORD *)(v15 + 1360);
      v21 = v6;
      v22 = (v11 >> 29) & 1;
      v19 = *((_DWORD *)a2 + 8);
      v27 = *((_QWORD *)a2 + 3);
      v26 = *((_QWORD *)a2 + 2);
      v25 = *(_QWORD *)a2;
      v24 = *((_QWORD *)v5 + 59);
      v28 = *((_QWORD *)a1 + 18);
      v55 = &v22;
      v53 = &v21;
      v51 = &v20;
      v49 = &v19;
      v47 = &v27;
      v45 = &v26;
      v43 = &v25;
      v41 = &v18;
      v39 = &v17;
      v37 = &v24;
      v35 = &v28;
      v20 = (v11 >> 13) & 1;
      UserData.Ptr = (ULONGLONG)off_14039BB58;
      *(_DWORD *)&EventDescriptor.Level = 4;
      v18 = v4;
      v17 = v4;
      v56 = 4LL;
      v54 = 4LL;
      v52 = 4LL;
      v50 = 4LL;
      v48 = 8LL;
      v46 = 8LL;
      v44 = 8LL;
      v42 = 4LL;
      v40 = 4LL;
      v38 = 8LL;
      v36 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 16LL;
      UserData.Size = *(unsigned __int16 *)off_14039BB58;
      v32 = &unk_140367276;
      v34 = 1;
      UserData.Reserved = 2;
      v33 = 180;
      LODWORD(v23) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xDu, &UserData);
    }
  }
  else if ( v4 >= 0x100 )
  {
    if ( (unsigned int)dword_14039BB50 > 4
      && v4 <= 0x109
      && (qword_14039BB60 & 0x10) != 0
      && (qword_14039BB68 & 0x10) == qword_14039BB68 )
    {
      v13 = *(_QWORD *)(v15 + 1360);
      v18 = v6;
      v17 = (v13 >> 29) & 1;
      v20 = *((_DWORD *)a2 + 8);
      v24 = *(_QWORD *)a2;
      v23 = *((_QWORD *)v5 + 59);
      v25 = *((_QWORD *)a1 + 18);
      v19 = (v13 >> 13) & 1;
      v21 = v4;
      v22 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14039BB50,
        (__int64)&unk_1403671B8);
    }
  }
  else if ( (unsigned int)dword_14039BB50 > 4
         && v4 == 255
         && (qword_14039BB60 & 0x10) != 0
         && (qword_14039BB68 & 0x10) == qword_14039BB68 )
  {
    v12 = *(unsigned int *)(v15 + 1360);
    v24 = *((_QWORD *)a2 + 2);
    v22 = (v12 >> 29) & 1;
    v20 = *((_DWORD *)a2 + 8);
    LOBYTE(v16) = (_BYTE)v24 == 1;
    v25 = *((_QWORD *)a2 + 3);
    v23 = *(_QWORD *)a2;
    v26 = *((_QWORD *)v5 + 59);
    v27 = *((_QWORD *)a1 + 18);
    v21 = v6;
    v19 = 255;
    v18 = 255;
    v17 = v16;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_14039BB50,
      (unsigned int)&unk_14036732B,
      1,
      v16,
      (__int64)&v27,
      (__int64)&v17,
      (__int64)&v26,
      (__int64)&v18,
      (__int64)&v19,
      (__int64)&v23,
      (__int64)&v24,
      (__int64)&v25,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)&v22);
  }
}
