/*
 * XREFs of ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18003A5B8
 * Callers:
 *     ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x1800199E4 (-OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18003C010 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x180022540 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 */

void __fastcall CApplication::UpdateAppState(CApplication *this, int a2, int *a3)
{
  int v3; // r10d
  int v4; // r14d
  unsigned int v5; // r9d
  int v6; // ebx
  int v9; // ebx
  const struct _tlgProvider_t *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  _BYTE *v15; // [rsp+58h] [rbp-8h] BYREF
  int v16; // [rsp+90h] [rbp+30h] BYREF
  int v17; // [rsp+98h] [rbp+38h] BYREF
  int v18; // [rsp+A0h] [rbp+40h] BYREF
  int v19; // [rsp+A8h] [rbp+48h] BYREF

  v3 = *((_DWORD *)this + 52);
  v4 = 0;
  v5 = v3 | 2;
  v6 = 0;
  if ( !a2 )
    v5 = v3 & 0xFFFFFFFD;
  *((_DWORD *)this + 52) = v5;
  LOBYTE(v4) = (v5 & 6) != 0;
  LOBYTE(v6) = (v3 & 6) != 0;
  v9 = v4 ^ v6;
  if ( (((unsigned __int8)v5 ^ (unsigned __int8)v3) & 2) != 0 && !a2 )
    *((_QWORD *)this + 83) = GetTickCount64();
  if ( a3 )
    *a3 = v9;
  if ( v9 )
  {
    v10 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v10 > 4u && tlgKeywordOn((__int64)v10, 0x8000LL) )
    {
      v19 = v4;
      v17 = -1;
      v16 = -1;
      v18 = -1;
      v14 = *((_QWORD *)this + 87);
      v15 = (_BYTE *)*((_QWORD *)this + 3);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        byte_18005A3CD,
        v12,
        v13,
        &v15,
        (__int64)&v14,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v16,
        (__int64)&v17);
    }
  }
}
