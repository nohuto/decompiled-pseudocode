/*
 * XREFs of ?InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z @ 0x14009E580
 * Callers:
 *     rimInputApc @ 0x14009DFA0 (rimInputApc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x1400F22C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400F4F78 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x140140488 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::InputApc(const struct RIMDEV *a1, const struct _IO_STATUS_BLOCK *a2)
{
  int v2; // eax
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // rcx
  int v7; // eax
  int *v8; // r9
  ULONGLONG v9; // rdx
  const char *v10; // r10
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  NTSTATUS v16; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v17; // [rsp+54h] [rbp-ACh] BYREF
  NTSTATUS Status; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR Information; // [rsp+60h] [rbp-A0h] BYREF
  const struct RIMDEV *v20; // [rsp+68h] [rbp-98h] BYREF
  const struct RIMDEV *v21; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR v23; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+BCh] [rbp-44h]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  const struct RIMDEV **v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  const struct RIMDEV **p_Information; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  const char *v34; // [rsp+F0h] [rbp-10h]
  int v35; // [rsp+F8h] [rbp-8h]
  int v36; // [rsp+FCh] [rbp-4h]
  NTSTATUS *p_Status; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  NTSTATUS *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  unsigned int *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]

  v2 = *((_DWORD *)a1 + 12);
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      if ( (*((_DWORD *)a1 + 46) & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_1402A9E40 > 4
          && (qword_1402A9E50 & 0x100) != 0
          && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
        {
          v15 = *((_QWORD *)a1 + 56);
          LODWORD(Information) = *(unsigned __int16 *)(v15 + 18);
          LODWORD(v20) = *(unsigned __int16 *)(v15 + 16);
          *(_QWORD *)&EventDescriptor.Id = a2->Information;
          Status = a2->Status;
          v21 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1402A9E40,
            (unsigned int)&unk_140286A44,
            (_DWORD)a1,
            (_DWORD)a2,
            (__int64)&v21,
            (__int64)&Status,
            (__int64)&EventDescriptor,
            (__int64)&v20,
            (__int64)&Information);
        }
      }
      else
      {
        v4 = *((_QWORD *)a1 + 57);
        v5 = *(_QWORD *)(v4 + 768);
        if ( (unsigned int)dword_1402A9E40 > 4
          && (qword_1402A9E50 & 0x100) != 0
          && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
        {
          v6 = *((_QWORD *)a1 + 56);
          v17 = *(unsigned __int16 *)(v6 + 18);
          v16 = *(unsigned __int16 *)(v6 + 16);
          if ( !v5 || (v7 = 0, !*(_DWORD *)(v5 + 36)) )
            v7 = 1;
          Status = v7;
          v10 = InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v4 + 24));
          v21 = (const struct RIMDEV *)*((_QWORD *)v8 + 1);
          v11 = *v8;
          v41 = &v17;
          v39 = &v16;
          p_Status = &Status;
          LODWORD(v20) = v11;
          *(_QWORD *)&EventDescriptor.Id = v12;
          v42 = 4LL;
          v40 = 4LL;
          v38 = 4LL;
          if ( v10 )
          {
            v13 = -1LL;
            do
              ++v13;
            while ( v10[v13] );
            v14 = v13 + 1;
          }
          else
          {
            v10 = (const char *)&unk_140269890;
            v14 = 1;
          }
          v35 = v14;
          v30 = &v20;
          p_Information = &v21;
          p_EventDescriptor = &EventDescriptor;
          UserData.Ptr = (ULONGLONG)off_1402A9E48;
          *(_DWORD *)&v23.Level = 4;
          v23.Keyword = v9;
          v34 = v10;
          v36 = 0;
          v33 = 8LL;
          v31 = 4LL;
          v29 = 8LL;
          *(_DWORD *)&v23.Id = 184549376;
          UserData.Size = *(unsigned __int16 *)off_1402A9E48;
          v25 = &unk_1402869DC;
          UserData.Reserved = 2;
          v26 = 103;
          v27 = 1;
          LODWORD(Information) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          EtwWriteTransfer(qword_1402A9E60, &v23, 0LL, 0LL, 9u, &UserData);
        }
      }
    }
    else if ( (unsigned int)dword_1402A9E40 > 4
           && v2 == 1
           && (qword_1402A9E50 & 0x100) != 0
           && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
    {
      *(_QWORD *)&EventDescriptor.Id = a2->Information;
      LODWORD(Information) = a2->Status;
      v21 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1402A9E40,
        (unsigned int)&unk_14028694A,
        (_DWORD)a1,
        (_DWORD)a2,
        (__int64)&v21,
        (__int64)&Information,
        (__int64)&EventDescriptor);
    }
  }
  else if ( (unsigned int)dword_1402A9E40 > 4
         && (qword_1402A9E50 & 0x100) != 0
         && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
  {
    Information = a2->Information;
    v16 = a2->Status;
    p_Information = (const struct RIMDEV **)&Information;
    v30 = (const struct RIMDEV **)&v16;
    p_EventDescriptor = (EVENT_DESCRIPTOR *)&v20;
    UserData.Ptr = (ULONGLONG)off_1402A9E48;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = 256LL;
    v20 = a1;
    v33 = 8LL;
    v31 = 4LL;
    v29 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1402A9E48;
    v25 = &unk_14028699A;
    UserData.Reserved = 2;
    v26 = 54;
    v27 = 1;
    v17 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
}
