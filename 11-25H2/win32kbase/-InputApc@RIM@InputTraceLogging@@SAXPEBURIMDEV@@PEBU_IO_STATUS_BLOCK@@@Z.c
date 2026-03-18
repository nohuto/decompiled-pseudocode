/*
 * XREFs of ?InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z @ 0x140078A88
 * Callers:
 *     rimInputApc @ 0x140182D20 (rimInputApc.c)
 * Callees:
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x140078E58 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x14007B520 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1400F84A0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::InputApc(const struct RIMDEV *a1, const struct _IO_STATUS_BLOCK *a2)
{
  int v2; // eax
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // rcx
  BOOL v7; // eax
  const char *v8; // rax
  ULONGLONG v9; // r8
  __int64 v10; // rdx
  const struct RIMDEV *v11; // rcx
  const char *v12; // r10
  ULONG_PTR v13; // r9
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  NTSTATUS v17; // [rsp+50h] [rbp-B0h] BYREF
  NTSTATUS Status; // [rsp+54h] [rbp-ACh] BYREF
  ULONG_PTR v19; // [rsp+58h] [rbp-A8h] BYREF
  const struct RIMDEV *v20; // [rsp+60h] [rbp-A0h] BYREF
  const struct RIMDEV *v21; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR Information; // [rsp+70h] [rbp-90h] BYREF
  int v23; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+ACh] [rbp-54h]
  ULONG_PTR *p_Information; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  const struct RIMDEV **v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  const struct RIMDEV **v35; // [rsp+D0h] [rbp-30h]
  int v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+DCh] [rbp-24h]
  const char *v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+ECh] [rbp-14h]
  NTSTATUS *p_Status; // [rsp+F0h] [rbp-10h]
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]
  int *v44; // [rsp+100h] [rbp+0h]
  int v45; // [rsp+108h] [rbp+8h]
  int v46; // [rsp+10Ch] [rbp+Ch]
  NTSTATUS *v47; // [rsp+110h] [rbp+10h]
  int v48; // [rsp+118h] [rbp+18h]
  int v49; // [rsp+11Ch] [rbp+1Ch]

  v2 = *((_DWORD *)a1 + 12);
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      if ( (*((_DWORD *)a1 + 46) & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_14029EE20 > 4
          && (qword_14029EE30 & 0x100) != 0
          && (qword_14029EE38 & 0x100) == qword_14029EE38 )
        {
          v16 = *((_QWORD *)a1 + 56);
          LODWORD(v19) = *(unsigned __int16 *)(v16 + 18);
          LODWORD(v20) = *(unsigned __int16 *)(v16 + 16);
          Information = a2->Information;
          Status = a2->Status;
          v21 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_14029EE20,
            (unsigned int)&unk_14027C575,
            256,
            (_DWORD)a1,
            (__int64)&v21,
            (__int64)&Status,
            (__int64)&Information,
            (__int64)&v20,
            (__int64)&v19);
        }
      }
      else
      {
        v4 = *((_QWORD *)a1 + 57);
        v5 = *(_QWORD *)(v4 + 768);
        if ( (unsigned int)dword_14029EE20 > 4
          && (qword_14029EE30 & 0x100) != 0
          && (qword_14029EE38 & 0x100) == qword_14029EE38 )
        {
          v6 = *((_QWORD *)a1 + 56);
          v17 = *(unsigned __int16 *)(v6 + 18);
          v23 = *(unsigned __int16 *)(v6 + 16);
          v7 = !v5 || !*(_DWORD *)(v5 + 36);
          Status = v7;
          v8 = InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v4 + 24));
          v11 = *(const struct RIMDEV **)(v10 + 8);
          v12 = v8;
          v49 = 0;
          v46 = 0;
          v43 = 0;
          v47 = &v17;
          v44 = &v23;
          v21 = v11;
          LODWORD(v11) = *(_DWORD *)v10;
          p_Status = &Status;
          LODWORD(v20) = (_DWORD)v11;
          Information = v13;
          v48 = 4;
          v45 = 4;
          v42 = 4;
          if ( v8 )
          {
            v14 = -1LL;
            do
              ++v14;
            while ( v12[v14] );
            v15 = v14 + 1;
          }
          else
          {
            v12 = (const char *)&unk_14025EF20;
            v15 = 1;
          }
          v40 = 0;
          v37 = 0;
          v34 = 0;
          v31 = 0;
          v39 = v15;
          v35 = &v21;
          v32 = &v20;
          p_Information = &Information;
          v36 = 8;
          v30 = 8;
          UserData.Ptr = (ULONGLONG)off_14029EE28;
          *(_DWORD *)&EventDescriptor.Level = 4;
          EventDescriptor.Keyword = v9;
          v38 = v12;
          v33 = 4;
          *(_DWORD *)&EventDescriptor.Id = 184549376;
          UserData.Size = *(unsigned __int16 *)off_14029EE28;
          v26 = &unk_14027C50D;
          UserData.Reserved = 2;
          v27 = 103;
          v28 = 1;
          LODWORD(v19) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          EtwWriteTransfer(qword_14029EE40, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
        }
      }
    }
    else if ( (unsigned int)dword_14029EE20 > 4
           && v2 == 1
           && (qword_14029EE30 & 0x100) != 0
           && (qword_14029EE38 & 0x100) == qword_14029EE38 )
    {
      Information = a2->Information;
      LODWORD(v19) = a2->Status;
      v21 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_14029EE20,
        (unsigned int)&unk_14027C5C7,
        256,
        (_DWORD)a1,
        (__int64)&v21,
        (__int64)&v19,
        (__int64)&Information);
    }
  }
  else if ( (unsigned int)dword_14029EE20 > 4
         && (qword_14029EE30 & 0x100) != 0
         && (qword_14029EE38 & 0x100) == qword_14029EE38 )
  {
    v19 = a2->Information;
    v17 = a2->Status;
    v20 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_14029EE20,
      (unsigned int)&unk_14027C60C,
      256,
      (_DWORD)a1,
      (__int64)&v20,
      (__int64)&v17,
      (__int64)&v19);
  }
}
