/*
 * XREFs of ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@@std@@V_lambda_a5fcd431b6a5ef671993691a41929e10_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@@0@V10@V10@V_lambda_a5fcd431b6a5ef671993691a41929e10_@@@Z @ 0x1800D1AF4
 * Callers:
 *     ?DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800D21A0 (-DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007C300 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??R_lambda_a5fcd431b6a5ef671993691a41929e10_@@QEBA@AEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@Z @ 0x1800D1E38 (--R_lambda_a5fcd431b6a5ef671993691a41929e10_@@QEBA@AEAULockedListEntry@-$CLockedList_UniqueValue.c)
 */

_QWORD *__fastcall std::remove_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>>,_lambda_a5fcd431b6a5ef671993691a41929e10_>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rdi
  __int64 j; // rsi
  _QWORD *result; // rax

  for ( i = a2; i != a3; i += 16LL )
  {
    if ( (unsigned __int8)_lambda_a5fcd431b6a5ef671993691a41929e10_::operator()(a4, i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 16; j != a3; j += 16LL )
    {
      if ( !(unsigned __int8)_lambda_a5fcd431b6a5ef671993691a41929e10_::operator()(a4, j) )
      {
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)i, (__int64 *)j);
        *(_DWORD *)(i + 8) = *(_DWORD *)(j + 8);
        i += 16LL;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
