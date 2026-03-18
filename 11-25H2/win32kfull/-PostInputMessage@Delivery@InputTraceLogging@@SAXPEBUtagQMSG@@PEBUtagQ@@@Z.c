/*
 * XREFs of ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x14016F640
 * Callers:
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@535@Z @ 0x140001BD8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@U1@.c)
 *     IsPointerInputClientMessage @ 0x140143F90 (IsPointerInputClientMessage.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@34@Z @ 0x14016F8FC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x14016F9A0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall InputTraceLogging::Delivery::PostInputMessage(const struct tagQMSG *a1, const struct tagQ *a2)
{
  unsigned int v2; // r8d
  const struct tagQMSG *v3; // r9
  bool v4; // cf
  void *v5; // rdx
  const struct tagQ *v6; // [rsp+60h] [rbp+27h] BYREF
  _QWORD v7[5]; // [rsp+68h] [rbp+2Fh] BYREF
  int v8; // [rsp+A0h] [rbp+67h] BYREF
  __int64 v9; // [rsp+B0h] [rbp+77h] BYREF
  const struct tagQ *v10; // [rsp+B8h] [rbp+7Fh] BYREF

  v2 = *((_DWORD *)a1 + 6);
  v3 = a1;
  if ( v2 - 577 <= 3 || IsPointerInputClientMessage(v2) )
  {
    if ( (unsigned int)dword_14039BB50 > 4
      && (qword_14039BB60 & 0x10) != 0
      && (qword_14039BB68 & 0x10) == qword_14039BB68 )
    {
      v4 = __CFSHR__(*((_DWORD *)v3 + 25), 6);
      v7[2] = a2;
      LODWORD(v10) = v2;
      LODWORD(v9) = -v4;
      v7[0] = *((_QWORD *)v3 + 2);
      LODWORD(v6) = *((unsigned __int16 *)v3 + 17);
      v7[1] = *((_QWORD *)v3 + 5);
      LOWORD(v8) = *((_WORD *)v3 + 16);
      v7[3] = *((_QWORD *)v3 + 18);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14039BB50,
        (__int64)&unk_14036779D);
    }
  }
  else if ( v2 - 512 <= 0xE || v2 - 160 <= 0xD )
  {
    if ( (unsigned int)dword_14039BB50 > 4
      && (qword_14039BB60 & 0x10) != 0
      && (qword_14039BB68 & 0x10) == qword_14039BB68 )
    {
      v4 = __CFSHR__(*((_DWORD *)v3 + 25), 6);
      v6 = a2;
      LODWORD(v9) = v2;
      v8 = -v4;
      v10 = (const struct tagQ *)*((_QWORD *)v3 + 2);
      v7[0] = *((_QWORD *)v3 + 18);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_14039BB50,
        (unsigned int)&unk_14036773A,
        v2,
        (_DWORD)v3,
        (__int64)v7,
        (__int64)&v6,
        (__int64)&v9,
        (__int64)&v10,
        (__int64)&v8);
    }
  }
  else if ( v2 >= 0x100 )
  {
    if ( (unsigned int)dword_14039BB50 > 4
      && v2 <= 0x109
      && (qword_14039BB60 & 0x10) != 0
      && (qword_14039BB68 & 0x10) == qword_14039BB68 )
    {
      v10 = a2;
      v5 = &unk_140367884;
      goto LABEL_19;
    }
  }
  else if ( (unsigned int)dword_14039BB50 > 4
         && v2 == 255
         && (qword_14039BB60 & 0x10) != 0
         && (qword_14039BB68 & 0x10) == qword_14039BB68 )
  {
    v10 = a2;
    v5 = &unk_140367829;
LABEL_19:
    v9 = *((_QWORD *)v3 + 2);
    v6 = (const struct tagQ *)*((_QWORD *)v3 + 18);
    v8 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_14039BB50,
      (_DWORD)v5,
      v2,
      (_DWORD)v3,
      (__int64)&v6,
      (__int64)&v10,
      (__int64)&v8,
      (__int64)&v9);
  }
}
