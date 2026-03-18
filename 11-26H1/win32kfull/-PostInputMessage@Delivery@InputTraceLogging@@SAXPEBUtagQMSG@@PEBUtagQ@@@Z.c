/*
 * XREFs of ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1401A7F5C
 * Callers:
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1400923F0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@535@Z @ 0x1401A83E0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@U1@.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Delivery::PostInputMessage(
        const struct tagQMSG *a1,
        const struct tagQ *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  bool v5; // cf
  int v6; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v7; // [rsp+64h] [rbp-9Ch] BYREF
  _WORD v8[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v9; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v10; // [rsp+70h] [rbp-90h] BYREF
  const struct tagQ *v11; // [rsp+78h] [rbp-88h] BYREF
  __int64 v12; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v15; // [rsp+B0h] [rbp-50h]
  int v16; // [rsp+B8h] [rbp-48h]
  int v17; // [rsp+BCh] [rbp-44h]
  __int64 *v18; // [rsp+C0h] [rbp-40h]
  __int64 v19; // [rsp+C8h] [rbp-38h]
  const struct tagQ **v20; // [rsp+D0h] [rbp-30h]
  __int64 v21; // [rsp+D8h] [rbp-28h]
  unsigned int *v22; // [rsp+E0h] [rbp-20h]
  __int64 v23; // [rsp+E8h] [rbp-18h]
  __int64 *v24; // [rsp+F0h] [rbp-10h]
  __int64 v25; // [rsp+F8h] [rbp-8h]
  int *v26; // [rsp+100h] [rbp+0h]
  __int64 v27; // [rsp+108h] [rbp+8h]

  v4 = *((unsigned int *)a1 + 6);
  if ( (unsigned int)v4 >= 0x241 && (unsigned int)v4 <= 0x244 )
  {
LABEL_15:
    if ( (unsigned int)dword_1403AA9C0 > 4
      && (qword_1403AA9D0 & 0x10) != 0
      && (qword_1403AA9D8 & 0x10) == qword_1403AA9D8 )
    {
      v5 = __CFSHR__(*((_DWORD *)a1 + 25), 6);
      v11 = a2;
      v7 = v4;
      v9 = -v5;
      *(_QWORD *)&EventDescriptor.Id = *((_QWORD *)a1 + 2);
      v6 = *((unsigned __int16 *)a1 + 17);
      v10 = *((_QWORD *)a1 + 5);
      v8[0] = *((_WORD *)a1 + 16);
      v12 = *((_QWORD *)a1 + 18);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1403AA9C0,
        (unsigned int)&unk_140374686,
        v4,
        a4,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)v8,
        (__int64)&v10,
        (__int64)&v6,
        (__int64)&v7,
        (__int64)&EventDescriptor,
        (__int64)&v9);
    }
    return;
  }
  if ( (unsigned int)v4 >= 0x245 )
  {
    if ( (unsigned int)v4 > 0x257 || (_DWORD)v4 == 589 )
      return;
    goto LABEL_15;
  }
  if ( (unsigned int)v4 >= 0x200 )
  {
    if ( (unsigned int)v4 > 0x20E )
      return;
  }
  else if ( (unsigned int)(v4 - 160) > 0xD )
  {
    if ( (unsigned int)v4 >= 0x100 )
    {
      if ( (unsigned int)dword_1403AA9C0 > 4
        && (unsigned int)v4 <= 0x109
        && (qword_1403AA9D0 & 0x10) != 0
        && (qword_1403AA9D8 & 0x10) == qword_1403AA9D8 )
      {
        v12 = *((_QWORD *)a1 + 2);
        v10 = *((_QWORD *)a1 + 18);
        v11 = a2;
        v6 = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (__int64)&dword_1403AA9C0,
          byte_140374712,
          v4,
          a4,
          (__int64)&v10,
          (__int64)&v11,
          (__int64)&v6,
          (__int64)&v12);
      }
    }
    else if ( (unsigned int)dword_1403AA9C0 > 4
           && (_DWORD)v4 == 255
           && (qword_1403AA9D0 & 0x10) != 0
           && (qword_1403AA9D8 & 0x10) == qword_1403AA9D8 )
    {
      v12 = *((_QWORD *)a1 + 2);
      v10 = *((_QWORD *)a1 + 18);
      v24 = &v12;
      UserData.Ptr = (ULONGLONG)off_1403AA9C8;
      v11 = a2;
      v22 = (unsigned int *)&v6;
      v20 = &v11;
      *(_DWORD *)&EventDescriptor.Level = 4;
      v6 = 255;
      v25 = 8LL;
      v23 = 4LL;
      v21 = 8LL;
      v18 = &v10;
      v19 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 16LL;
      UserData.Size = *(unsigned __int16 *)off_1403AA9C8;
      v15 = &unk_1403747DB;
      UserData.Reserved = 2;
      v16 = 79;
      v17 = 1;
      v7 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
    return;
  }
  if ( (unsigned int)dword_1403AA9C0 > 4 && (qword_1403AA9D0 & 0x10) != 0 && (qword_1403AA9D8 & 0x10) == qword_1403AA9D8 )
  {
    v5 = __CFSHR__(*((_DWORD *)a1 + 25), 6);
    v11 = a2;
    v22 = &v7;
    v6 = -v5;
    v12 = *((_QWORD *)a1 + 2);
    v10 = *((_QWORD *)a1 + 18);
    v26 = &v6;
    v24 = &v12;
    UserData.Ptr = (ULONGLONG)off_1403AA9C8;
    v20 = &v11;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v7 = v4;
    v27 = 4LL;
    v25 = 8LL;
    v23 = 4LL;
    v21 = 8LL;
    v18 = &v10;
    v19 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 16LL;
    UserData.Size = *(unsigned __int16 *)off_1403AA9C8;
    v15 = &unk_140374778;
    UserData.Reserved = 2;
    v16 = 87;
    v17 = 1;
    v9 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
}
