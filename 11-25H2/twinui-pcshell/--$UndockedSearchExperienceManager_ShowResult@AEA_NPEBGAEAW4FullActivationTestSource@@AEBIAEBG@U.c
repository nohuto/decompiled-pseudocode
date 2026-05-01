/*
 * XREFs of ??$UndockedSearchExperienceManager_ShowResult@AEA_NPEBGAEAW4FullActivationTestSource@@AEBIAEBG@UndockedSearchExperienceManagerTIPTelemetry@@SAXAEA_N$$QEAPEBGAEAW4FullActivationTestSource@@AEBIAEBG@Z @ 0x18039F6EC
 * Callers:
 *     ?on_result@_tip_SearchFullActivationTest@@QEAAXAEBUTipReportingInfo@@@Z @ 0x1803B3EB4 (-on_result@_tip_SearchFullActivationTest@@QEAAXAEBUTipReportingInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180003B68 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U-$_tlgWrapper.c)
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800384F8 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 */

char __fastcall UndockedSearchExperienceManagerTIPTelemetry::UndockedSearchExperienceManager_ShowResult<bool &,unsigned short const *,enum FullActivationTestSource &,unsigned int const &,unsigned short const &>(
        _BYTE *a1,
        __int64 *a2,
        int *a3,
        int *a4,
        unsigned __int16 *a5)
{
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // edx
  _BYTE v15[4]; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+54h] [rbp-1Ch]
  int v17; // [rsp+58h] [rbp-18h]
  int v18; // [rsp+5Ch] [rbp-14h]
  __int64 v19; // [rsp+60h] [rbp-10h]
  __int64 v20; // [rsp+68h] [rbp-8h] BYREF

  v9 = SearchAppLauncherLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v9 > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn((__int64)v9, 0x400000000000LL);
    if ( (_BYTE)v9 )
    {
      v17 = *a4;
      v18 = *a3;
      v13 = *a5;
      v20 = *a2;
      v15[0] = *a1;
      v16 = v13;
      v19 = 0x1000000LL;
      LOBYTE(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v12,
                     (__int64)&unk_1807C6BCD,
                     v10,
                     v11,
                     (__int64)v15,
                     &v20);
    }
  }
  return (char)v9;
}
