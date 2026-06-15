/*
 * XREFs of ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x18003BC24
 * Callers:
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18003BD1C (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180014990 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x180022540 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800389C0 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?HasPLMExemption@CApplication@@QEAAHXZ @ 0x180038A90 (-HasPLMExemption@CApplication@@QEAAHXZ.c)
 */

__int64 __fastcall CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(
        CApplicationManager *this,
        struct CApplication *a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+50h] [rbp-10h] BYREF
  _BYTE *v9; // [rsp+58h] [rbp-8h] BYREF
  CApplicationManager *v10; // [rsp+80h] [rbp+20h] BYREF
  int HasPLMExemption; // [rsp+88h] [rbp+28h] BYREF
  BOOL v12; // [rsp+90h] [rbp+30h] BYREF
  int v13; // [rsp+98h] [rbp+38h] BYREF

  v10 = this;
  v3 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  v4 = (__int64)v3;
  if ( *(_DWORD *)v3 > 4u && tlgKeywordOn((__int64)v3, 0x20000LL) )
  {
    LODWORD(v10) = CApplication::HasBackgroundAudioTask(a2);
    HasPLMExemption = CApplication::HasPLMExemption(a2);
    v12 = *((_DWORD *)a2 + 52) != 0;
    v13 = *((_DWORD *)a2 + 53);
    v8 = *((_QWORD *)a2 + 87);
    v9 = (_BYTE *)*((_QWORD *)a2 + 3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      byte_18005ACFB,
      v5,
      v6,
      &v9,
      (__int64)&v8,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&HasPLMExemption,
      (__int64)&v10);
  }
  if ( !*((_DWORD *)a2 + 52)
    && !(unsigned int)CApplication::HasPLMExemption(a2)
    && !(unsigned int)CApplication::HasBackgroundAudioTask(a2) )
  {
    CApplication::GrantGoodFaithPLMExemption(a2);
  }
  return 0LL;
}
