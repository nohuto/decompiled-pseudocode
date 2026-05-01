/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x180009DF0
 * Callers:
 *     ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x180251AD8 (-RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180251D10 (-SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180252070 (-UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x180252228 (-_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z.c)
 *     _lambda_51cbed3b18d30fb7ce15701a996cfe83_::operator() @ 0x18048C1D8 (_lambda_51cbed3b18d30fb7ce15701a996cfe83_--operator().c)
 *     ?FocusEyeControl@AccessibilityExperienceManager@@UEAAJXZ @ 0x18048CAF0 (-FocusEyeControl@AccessibilityExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v6; // rax

  if ( *a6 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(*a6 + v6) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
