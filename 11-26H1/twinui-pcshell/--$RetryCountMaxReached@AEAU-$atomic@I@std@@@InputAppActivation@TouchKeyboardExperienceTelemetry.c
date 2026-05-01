/*
 * XREFs of ??$RetryCountMaxReached@AEAU?$atomic@I@std@@@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEAU?$atomic@I@std@@@Z @ 0x18046594C
 * Callers:
 *     _lambda_c5b63f338e787c1dc9ce32ee8c9a5927_::operator() @ 0x18046AE20 (_lambda_c5b63f338e787c1dc9ce32ee8c9a5927_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800998DC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800E680C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppActivation::RetryCountMaxReached<std::atomic<unsigned int> &>(
        __int64 a1,
        unsigned int *a2)
{
  const struct _tlgProvider_t *v4; // rax
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v10 = 0x1000000LL;
      v5 = std::_Atomic_storage<unsigned int,4>::load(a2);
      v6 = *(_QWORD *)(a1 + 272);
      v9 = v5;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v7,
                     byte_180807A32,
                     (const GUID *)(v6 + 8),
                     v7,
                     (__int64)&v9,
                     (__int64)&v10);
    }
  }
  return (char)v4;
}
