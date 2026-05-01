/*
 * XREFs of ??$StoryboardCompleted@AEAU?$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@I@std@@$$QEA_N1@Z @ 0x1801E31F4
 * Callers:
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180144D00 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x1801E2E50 (-OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ.c)
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x1802086D0 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800E680C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801779F0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWr.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(
        unsigned int *a1,
        char *a2,
        char *a3)
{
  const struct _tlgProvider_t *v6; // rax
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v11[4]; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+44h] [rbp-14h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h] BYREF
  char v14; // [rsp+78h] [rbp+20h] BYREF

  v6 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 16LL);
    if ( (_BYTE)v6 )
    {
      v7 = *a2;
      v14 = *a3;
      v13 = 0x1000000LL;
      v11[0] = v7;
      v12 = std::_Atomic_storage<unsigned int,4>::load(a1);
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                     v9,
                     byte_1808080AA,
                     v8,
                     v9,
                     (__int64)&v12,
                     (__int64)v11,
                     (__int64)&v14,
                     (__int64)&v13);
    }
  }
  return (char)v6;
}
