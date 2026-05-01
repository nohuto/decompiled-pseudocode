/*
 * XREFs of ?StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ @ 0x180057080
 * Callers:
 *     <none>
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180040A58 (-IgnoreCurrentThread@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180058400 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1800908D8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800908D8.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall ShellPositionerTelemetry::FrameworkViewTypeChanged::StopActivity(
        ShellPositionerTelemetry::FrameworkViewTypeChanged *this)
{
  __int64 v1; // rax
  int v3; // ecx
  const struct _tlgProvider_t *v4; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rdi
  const struct _tlgProvider_t *v9; // rax
  int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int v14; // [rsp+C0h] [rbp-80h] BYREF
  int v15; // [rsp+C4h] [rbp-7Ch] BYREF
  DWORD v16; // [rsp+C8h] [rbp-78h] BYREF
  int v17; // [rsp+CCh] [rbp-74h] BYREF
  int v18; // [rsp+D0h] [rbp-70h] BYREF
  int v19; // [rsp+D4h] [rbp-6Ch] BYREF
  int v20; // [rsp+D8h] [rbp-68h] BYREF
  int v21; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+100h] [rbp-40h] BYREF
  __int64 v26; // [rsp+108h] [rbp-38h] BYREF
  __int64 v27; // [rsp+110h] [rbp-30h] BYREF
  __int64 v28; // [rsp+118h] [rbp-28h] BYREF
  __int64 v29; // [rsp+120h] [rbp-20h] BYREF
  __int64 v30; // [rsp+128h] [rbp-18h] BYREF
  __int64 v31; // [rsp+130h] [rbp-10h] BYREF
  __int64 v32; // [rsp+138h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+0h] BYREF
  void *v34; // [rsp+150h] [rbp+10h]
  int v35; // [rsp+158h] [rbp+18h]
  int v36; // [rsp+15Ch] [rbp+1Ch]
  __int64 *v37; // [rsp+160h] [rbp+20h]
  int v38; // [rsp+168h] [rbp+28h]
  int v39; // [rsp+16Ch] [rbp+2Ch]
  int *v40; // [rsp+170h] [rbp+30h]
  int v41; // [rsp+178h] [rbp+38h]
  int v42; // [rsp+17Ch] [rbp+3Ch]
  DWORD *v43; // [rsp+180h] [rbp+40h]
  int v44; // [rsp+188h] [rbp+48h]
  int v45; // [rsp+18Ch] [rbp+4Ch]

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 >= 0 || v3 != *(_DWORD *)(v1 + 88) || (v8 = v1 + 80, v1 == -80) )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v4 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v4 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = *((_QWORD *)this + 34);
      v45 = 0;
      v42 = 0;
      v39 = 0;
      EventDescriptor.Keyword = 0LL;
      v16 = CurrentThreadId;
      v7 = *(_DWORD *)(v6 + 72);
      v22 = 0LL;
      v43 = &v16;
      v40 = &v15;
      v37 = &v22;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v4 + 1);
      v15 = v7;
      v44 = 4;
      v41 = 4;
      v38 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v34 = &unk_1807DBC91;
      UserData.Reserved = 2;
      v35 = 77;
      v36 = 1;
      v14 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v4 + 4), &EventDescriptor, (LPCGUID)(v6 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v9 = WindowManagementLogging::Provider();
    v10 = (int)v9;
    if ( *(_DWORD *)v9 > 5u )
    {
      v11 = *(_QWORD *)(v8 + 48);
      v12 = *((_QWORD *)this + 34);
      v19 = *(_DWORD *)(v8 + 104);
      v13 = *(_QWORD *)(v8 + 96);
      v22 = 0LL;
      v27 = v13;
      v28 = *(_QWORD *)(v8 + 88);
      v20 = *(_DWORD *)(v8 + 80);
      v29 = *(_QWORD *)(v8 + 72);
      v21 = *(_DWORD *)(v8 + 32);
      v30 = *(_QWORD *)(v8 + 24);
      v14 = *(_DWORD *)v8;
      v31 = *(_QWORD *)(v8 + 128);
      v15 = *(_DWORD *)(v8 + 64);
      v32 = *(_QWORD *)(v8 + 56);
      v16 = *(_DWORD *)(v8 + 8);
      v24 = v11;
      v17 = *(_DWORD *)(v8 + 68);
      v18 = *(_DWORD *)(v8 + 16);
      v25 = *(_QWORD *)(v8 + 120);
      v26 = *(_QWORD *)(v8 + 112);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v10,
        (unsigned int)&unk_1807DBB33,
        v12 + 8,
        v10,
        (__int64)&v22,
        (__int64)&EventDescriptor,
        (__int64)&v16,
        (__int64)&v32,
        (__int64)&v15,
        (__int64)&v31,
        (__int64)&v14,
        (__int64)&v30,
        (__int64)&v21,
        (__int64)&v29,
        (__int64)&v20,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v19,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v24);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
