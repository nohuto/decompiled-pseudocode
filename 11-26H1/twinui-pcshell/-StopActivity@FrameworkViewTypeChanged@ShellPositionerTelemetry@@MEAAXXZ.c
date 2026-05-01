/*
 * XREFs of ?StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ @ 0x18006F420
 * Callers:
 *     <none>
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180018644 (-IgnoreCurrentThread@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Instance@WindowManagementLogging@@KAPEAV1@XZ @ 0x1800704FC (-Instance@WindowManagementLogging@@KAPEAV1@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800709CC (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18020D158 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18020D158.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall ShellPositionerTelemetry::FrameworkViewTypeChanged::StopActivity(
        ShellPositionerTelemetry::FrameworkViewTypeChanged *this)
{
  __int64 v1; // rdi
  int v3; // eax
  __int64 v4; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v6; // r8
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  unsigned int v11; // [rsp+C0h] [rbp-80h] BYREF
  int v12; // [rsp+C4h] [rbp-7Ch] BYREF
  DWORD v13; // [rsp+C8h] [rbp-78h] BYREF
  int v14; // [rsp+CCh] [rbp-74h] BYREF
  int v15; // [rsp+D0h] [rbp-70h] BYREF
  int v16; // [rsp+D4h] [rbp-6Ch] BYREF
  int v17; // [rsp+D8h] [rbp-68h] BYREF
  int v18; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v19; // [rsp+E0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v21; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v22; // [rsp+100h] [rbp-40h] BYREF
  __int64 v23; // [rsp+108h] [rbp-38h] BYREF
  __int64 v24; // [rsp+110h] [rbp-30h] BYREF
  __int64 v25; // [rsp+118h] [rbp-28h] BYREF
  __int64 v26; // [rsp+120h] [rbp-20h] BYREF
  __int64 v27; // [rsp+128h] [rbp-18h] BYREF
  __int64 v28; // [rsp+130h] [rbp-10h] BYREF
  __int64 v29; // [rsp+138h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+0h] BYREF
  void *v31; // [rsp+150h] [rbp+10h]
  int v32; // [rsp+158h] [rbp+18h]
  int v33; // [rsp+15Ch] [rbp+1Ch]
  __int64 *v34; // [rsp+160h] [rbp+20h]
  __int64 v35; // [rsp+168h] [rbp+28h]
  int *v36; // [rsp+170h] [rbp+30h]
  __int64 v37; // [rsp+178h] [rbp+38h]
  DWORD *v38; // [rsp+180h] [rbp+40h]
  __int64 v39; // [rsp+188h] [rbp+48h]

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 < 0 && (v10 = v1 + 80, v3 == *(_DWORD *)(v10 + 8)) && v10 )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v7 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      v8 = *(_QWORD *)(v10 + 48);
      v9 = *((_QWORD *)this + 34);
      v16 = *(_DWORD *)(v10 + 104);
      v24 = *(_QWORD *)(v10 + 96);
      v25 = *(_QWORD *)(v10 + 88);
      v17 = *(_DWORD *)(v10 + 80);
      v26 = *(_QWORD *)(v10 + 72);
      v18 = *(_DWORD *)(v10 + 32);
      v27 = *(_QWORD *)(v10 + 24);
      v11 = *(_DWORD *)v10;
      v28 = *(_QWORD *)(v10 + 128);
      v12 = *(_DWORD *)(v10 + 64);
      v29 = *(_QWORD *)(v10 + 56);
      v13 = *(_DWORD *)(v10 + 8);
      v21 = v8;
      v14 = *(_DWORD *)(v10 + 68);
      v15 = *(_DWORD *)(v10 + 16);
      v22 = *(_QWORD *)(v10 + 120);
      v23 = *(_QWORD *)(v10 + 112);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v19 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (_DWORD)v7,
        (unsigned int)&unk_180813147,
        v9 + 8,
        (_DWORD)v7,
        (__int64)&v19,
        (__int64)&EventDescriptor,
        (__int64)&v13,
        (__int64)&v29,
        (__int64)&v12,
        (__int64)&v28,
        (__int64)&v11,
        (__int64)&v27,
        (__int64)&v18,
        (__int64)&v26,
        (__int64)&v17,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v16,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v21);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v4 = *((_QWORD *)WindowManagementLogging::Instance() + 1);
    if ( *(_DWORD *)v4 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = *((_QWORD *)this + 34);
      v13 = CurrentThreadId;
      v39 = 4LL;
      v37 = 4LL;
      v12 = *(_DWORD *)(v6 + 72);
      v38 = &v13;
      v36 = &v12;
      v34 = &v19;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v4 + 8);
      v19 = 0LL;
      v35 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v31 = &unk_1808132A5;
      UserData.Reserved = 2;
      v32 = 77;
      v33 = 1;
      v11 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v4 + 32), &EventDescriptor, (LPCGUID)(v6 + 8), 0LL, 5u, &UserData);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
