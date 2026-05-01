/*
 * XREFs of ?ShoulderTap_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG00HHH@Z @ 0x18037E1D4
 * Callers:
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x18037E030 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1800034D4 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?Provider@ShoulderTapExperienceManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18037D9C8 (-Provider@ShoulderTapExperienceManagerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall ShoulderTapExperienceManagerTelemetry::ShoulderTap_(
        ShoulderTapExperienceManagerTelemetry *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  const unsigned __int16 *v11; // [rsp+58h] [rbp-18h] BYREF
  const unsigned __int16 *v12; // [rsp+60h] [rbp-10h] BYREF
  const unsigned __int16 *v13; // [rsp+68h] [rbp-8h] BYREF

  v7 = ShoulderTapExperienceManagerLogging::Provider((__int64)this);
  if ( *(_DWORD *)v7 > 5u )
  {
    if ( tlgKeywordOn((__int64)v7, 0x400000000000LL) )
    {
      v11 = a4;
      v12 = a3;
      v13 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        (__int64)&unk_1807C2A70,
        v8,
        v9,
        &v13,
        &v12,
        &v11);
    }
  }
}
