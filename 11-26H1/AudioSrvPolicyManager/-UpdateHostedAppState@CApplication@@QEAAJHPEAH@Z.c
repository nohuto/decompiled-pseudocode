/*
 * XREFs of ?UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z @ 0x180019DF0
 * Callers:
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEBG_KKH@Z @ 0x180019B84 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEBG_KKH@Z.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x180022540 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 */

__int64 __fastcall CApplication::UpdateHostedAppState(CApplication *this, int a2, int *a3)
{
  int v3; // r10d
  int v4; // edi
  unsigned int v5; // r9d
  const struct _tlgProvider_t *v7; // rcx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF
  __int64 v13; // [rsp+58h] [rbp-8h] BYREF
  int v14; // [rsp+80h] [rbp+20h] BYREF
  int v15; // [rsp+88h] [rbp+28h] BYREF
  int v16; // [rsp+90h] [rbp+30h] BYREF
  int v17; // [rsp+98h] [rbp+38h] BYREF

  v3 = *((_DWORD *)this + 52);
  v4 = 0;
  v5 = v3 | 4;
  if ( !a2 )
    v5 = v3 & 0xFFFFFFFB;
  *((_DWORD *)this + 52) = v5;
  LOBYTE(v4) = (v5 & 6) != 0;
  if ( ((v3 & 6) != 0) == v4 )
  {
    *a3 = 0;
  }
  else
  {
    *a3 = 1;
    v7 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v7 > 4u && (unsigned __int8)tlgKeywordOn(v7, 0x8000LL) )
    {
      v17 = v4;
      v15 = -1;
      v14 = -1;
      v16 = -1;
      v12 = *((_QWORD *)this + 87);
      v13 = *((_QWORD *)this + 3);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        (unsigned int)&unk_18005A35D,
        v9,
        v10,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v14,
        (__int64)&v15);
    }
  }
  return 0LL;
}
