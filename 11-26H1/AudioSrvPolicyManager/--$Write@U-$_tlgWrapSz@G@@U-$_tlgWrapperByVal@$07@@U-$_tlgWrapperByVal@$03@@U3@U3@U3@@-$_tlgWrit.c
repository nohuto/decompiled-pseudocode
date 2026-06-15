/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x180022540
 * Callers:
 *     ?UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z @ 0x180019DF0 (-UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z.c)
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18003A5B8 (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x18003BC24 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        _BYTE **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _BYTE *v11; // rcx
  __int64 v12; // rax
  int v14; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int8 *v18; // [rsp+60h] [rbp-59h]
  int v19; // [rsp+68h] [rbp-51h]
  int v20; // [rsp+6Ch] [rbp-4Dh]
  _BYTE *v21; // [rsp+70h] [rbp-49h]
  int v22; // [rsp+78h] [rbp-41h]
  int v23; // [rsp+7Ch] [rbp-3Dh]
  __int64 v24; // [rsp+80h] [rbp-39h]
  __int64 v25; // [rsp+88h] [rbp-31h]
  __int64 v26; // [rsp+90h] [rbp-29h]
  __int64 v27; // [rsp+98h] [rbp-21h]
  __int64 v28; // [rsp+A0h] [rbp-19h]
  __int64 v29; // [rsp+A8h] [rbp-11h]
  __int64 v30; // [rsp+B0h] [rbp-9h]
  __int64 v31; // [rsp+B8h] [rbp-1h]
  __int64 v32; // [rsp+C0h] [rbp+7h]
  __int64 v33; // [rsp+C8h] [rbp+Fh]

  v32 = a10;
  v30 = a9;
  v28 = a8;
  v26 = a7;
  v24 = a6;
  v33 = 4LL;
  v31 = 4LL;
  v29 = 4LL;
  v11 = *a5;
  v27 = 4LL;
  v25 = 8LL;
  if ( v11 )
  {
    v12 = -1LL;
    while ( *(_WORD *)&v11[2 * v12++ + 2] != 0 )
      ;
    v14 = 2 * v12 + 2;
  }
  else
  {
    v11 = byte_180056CEC;
    v14 = 2;
  }
  v22 = v14;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v21 = v11;
  v23 = 0;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v19 = *(unsigned __int16 *)(a2 + 11);
  v18 = a2 + 11;
  UserData.Reserved = 2;
  v20 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 8u, &UserData);
}
