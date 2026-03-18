/*
 * XREFs of ?ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140099050
 * Callers:
 *     rimSignalReadComplete @ 0x140098988 (rimSignalReadComplete.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4344@Z @ 0x1400F1C98 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400F4F78 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x140141120 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::ReadComplete(
        const struct RawInputManagerObject *a1,
        const struct RIMDEV *a2,
        struct _IO_STATUS_BLOCK *a3)
{
  int v3; // eax
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r10
  ULONGLONG v9; // rdx
  __int64 v10; // r9
  const char *v11; // r11
  _DWORD *v12; // r8
  int v13; // ecx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  NTSTATUS Status; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int Information; // [rsp+64h] [rbp-9Ch] BYREF
  int v19; // [rsp+68h] [rbp-98h] BYREF
  const struct RawInputManagerObject *v20; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h] BYREF
  const struct RIMDEV *v22; // [rsp+80h] [rbp-80h] BYREF
  const struct RawInputManagerObject *v23; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR v25; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  void *v27; // [rsp+C0h] [rbp-40h]
  int v28; // [rsp+C8h] [rbp-38h]
  int v29; // [rsp+CCh] [rbp-34h]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  const struct RawInputManagerObject **v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  const struct RawInputManagerObject **v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  int *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  const struct RIMDEV **v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  const char *v40; // [rsp+120h] [rbp+20h]
  int v41; // [rsp+128h] [rbp+28h]
  int v42; // [rsp+12Ch] [rbp+2Ch]
  NTSTATUS *p_Status; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  unsigned int *p_Information; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]

  v3 = *((_DWORD *)a2 + 12);
  if ( v3 )
  {
    if ( v3 == 2 )
    {
      if ( (*((_DWORD *)a2 + 46) & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_1402A9E40 > 4
          && (qword_1402A9E50 & 0x100) != 0
          && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
        {
          v16 = *((_QWORD *)a2 + 56);
          LODWORD(v21) = *(unsigned __int16 *)(v16 + 18);
          LODWORD(v20) = *(unsigned __int16 *)(v16 + 16);
          *(_QWORD *)&EventDescriptor.Id = *((_QWORD *)a2 + 2);
          Information = a3->Information;
          Status = a3->Status;
          v23 = a1;
          v22 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1402A9E40,
            (unsigned int)&unk_140287270,
            (_DWORD)a3,
            4,
            (__int64)&v22,
            (__int64)&v23,
            (__int64)&Status,
            (__int64)&Information,
            (__int64)&EventDescriptor,
            (__int64)&v20,
            (__int64)&v21);
        }
      }
      else if ( (unsigned int)dword_1402A9E40 > 4
             && (qword_1402A9E50 & 0x100) != 0
             && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
      {
        v5 = *((_QWORD *)a2 + 56);
        Information = *(unsigned __int16 *)(v5 + 18);
        v6 = *(unsigned __int16 *)(v5 + 16);
        v7 = *((_QWORD *)a2 + 57);
        Status = v6;
        v11 = InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v7 + 24));
        v22 = *(const struct RIMDEV **)(v8 + 16);
        v13 = v12[2];
        p_Information = &Information;
        v19 = v13;
        LODWORD(v20) = *v12;
        p_Status = &Status;
        v23 = a1;
        *(_QWORD *)&EventDescriptor.Id = v8;
        v46 = v10;
        v44 = v10;
        if ( v11 )
        {
          v14 = -1LL;
          do
            ++v14;
          while ( v11[v14] );
          v15 = v14 + 1;
        }
        else
        {
          v11 = (const char *)&unk_140269890;
          v15 = 1;
        }
        v41 = v15;
        v36 = &v19;
        v38 = &v22;
        v34 = &v20;
        v32 = &v23;
        p_EventDescriptor = &EventDescriptor;
        UserData.Ptr = (ULONGLONG)off_1402A9E48;
        *(_DWORD *)&v25.Level = 4;
        v25.Keyword = v9;
        v40 = v11;
        v42 = 0;
        v39 = 8LL;
        v37 = v10;
        v35 = v10;
        v33 = 8LL;
        v31 = 8LL;
        *(_DWORD *)&v25.Id = 184549376;
        UserData.Size = *(unsigned __int16 *)off_1402A9E48;
        v27 = &unk_1402871FC;
        UserData.Reserved = 2;
        v28 = 115;
        v29 = 1;
        LODWORD(v21) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwWriteTransfer(qword_1402A9E60, &v25, 0LL, 0LL, 0xAu, &UserData);
      }
    }
    else if ( v3 == 1
           && (unsigned int)dword_1402A9E40 > 4
           && (qword_1402A9E50 & 0x100) != 0
           && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
    {
      *(_QWORD *)&EventDescriptor.Id = *((_QWORD *)a2 + 2);
      LODWORD(v21) = a3->Information;
      LODWORD(v20) = a3->Status;
      v23 = a1;
      v22 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1402A9E40,
        (unsigned int)&unk_14028713E,
        (_DWORD)a3,
        4,
        (__int64)&v22,
        (__int64)&v23,
        (__int64)&v20,
        (__int64)&v21,
        (__int64)&EventDescriptor);
    }
  }
  else if ( (unsigned int)dword_1402A9E40 > 4
         && (qword_1402A9E50 & 0x100) != 0
         && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
  {
    v21 = *((_QWORD *)a2 + 2);
    v19 = a3->Information;
    Status = a3->Status;
    v38 = (const struct RIMDEV **)&v21;
    v36 = &v19;
    v34 = (const struct RawInputManagerObject **)&Status;
    v32 = &v20;
    p_EventDescriptor = (EVENT_DESCRIPTOR *)&v22;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = 256LL;
    v20 = a1;
    v22 = a2;
    v39 = 8LL;
    v37 = 4LL;
    v35 = 4LL;
    v33 = 8LL;
    v31 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v27 = &unk_1402871A4;
    UserData.Reserved = 2;
    v28 = 76;
    v29 = 1;
    Information = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
}
