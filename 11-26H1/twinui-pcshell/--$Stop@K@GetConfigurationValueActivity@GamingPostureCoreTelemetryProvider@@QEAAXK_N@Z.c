/*
 * XREFs of ??$Stop@K@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXK_N@Z @ 0x180334650
 * Callers:
 *     _anonymous_namespace_::GetConfigurationValue_unsigned_long_ @ 0x180333A04 (_anonymous_namespace_--GetConfigurationValue_unsigned_long_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180002770 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180002770.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180003114 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$00@@@-$_tl.c)
 *     ?Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18032D19C (-Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180333714 (-zInternalStop@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAA.c)
 */

void __fastcall GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::Stop<unsigned long>(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // eax
  int *v4; // rdi
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v12; // r8
  int v13; // [rsp+D0h] [rbp-80h] BYREF
  DWORD v14; // [rsp+D4h] [rbp-7Ch] BYREF
  int v15; // [rsp+D8h] [rbp-78h] BYREF
  int v16; // [rsp+DCh] [rbp-74h] BYREF
  int v17; // [rsp+E0h] [rbp-70h] BYREF
  int v18; // [rsp+E4h] [rbp-6Ch] BYREF
  int v19; // [rsp+E8h] [rbp-68h] BYREF
  int v20; // [rsp+ECh] [rbp-64h] BYREF
  __int64 v21; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+100h] [rbp-50h] BYREF
  __int64 v24; // [rsp+108h] [rbp-48h] BYREF
  __int64 v25; // [rsp+110h] [rbp-40h] BYREF
  __int64 v26; // [rsp+118h] [rbp-38h] BYREF
  __int64 v27; // [rsp+120h] [rbp-30h] BYREF
  __int64 v28; // [rsp+128h] [rbp-28h] BYREF
  __int64 v29; // [rsp+130h] [rbp-20h] BYREF
  __int64 v30; // [rsp+138h] [rbp-18h] BYREF
  __int64 v31; // [rsp+140h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 272);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 < 0 && (v4 = (int *)(v1 + 80), v3 == v4[2]) && v4 )
  {
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v6 = GamingPostureCoreTelemetryProvider::Provider(v5);
    if ( *(_DWORD *)v6 > 5u )
    {
      v24 = *((_QWORD *)v4 + 14);
      v7 = *((_QWORD *)v4 + 6);
      v17 = v4[26];
      v25 = *((_QWORD *)v4 + 12);
      v8 = *(_QWORD *)(a1 + 272);
      v26 = *((_QWORD *)v4 + 11);
      v18 = v4[20];
      v27 = *((_QWORD *)v4 + 9);
      v19 = v4[8];
      v28 = *((_QWORD *)v4 + 3);
      v20 = *v4;
      v29 = *((_QWORD *)v4 + 16);
      v13 = v4[16];
      v30 = *((_QWORD *)v4 + 7);
      v14 = v4[2];
      v22 = v7;
      v15 = v4[17];
      v16 = v4[4];
      v23 = *((_QWORD *)v4 + 15);
      v31 = 0x1000000LL;
      v21 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v6,
        (__int64)&unk_1807EAB6E,
        v8 + 8,
        (__int64)v6,
        (__int64)&v21,
        (__int64)&v31,
        (__int64)&v14,
        &v30,
        (__int64)&v13,
        &v29,
        (__int64)&v20,
        &v28,
        (__int64)&v19,
        &v27,
        (__int64)&v18,
        &v26,
        &v25,
        (__int64)&v17,
        &v24,
        &v23,
        (__int64)&v16,
        (__int64)&v15,
        &v22);
    }
  }
  else
  {
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v10 = GamingPostureCoreTelemetryProvider::Provider(v9);
    if ( *(_DWORD *)v10 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v12 = *(_QWORD *)(a1 + 272);
      v14 = CurrentThreadId;
      v13 = *(_DWORD *)(v12 + 72);
      v21 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v10,
        (__int64)&unk_1807EAAFA);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
