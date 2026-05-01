/*
 * XREFs of ?ValidateTrusted@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@$$QEAV34@V?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@@Z @ 0x180288814
 * Callers:
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x180283C64 (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     ?TryGetForTrustedPublisherByAssocEnumeration@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@V?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@@Z @ 0x1805D5950 (-TryGetForTrustedPublisherByAssocEnumeration@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocol.c)
 * Callees:
 *     ?IsTrustedPublisher@ProtocolLauncher@Utils@@CA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B05C8 (-IsTrustedPublisher@ProtocolLauncher@Utils@@CA_NAEBV-$basic_string_view@GU-$char_traits@G@std@@@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180287D40 (-reset@-$com_ptr_t@V-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@deta.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@1@XZ @ 0x180288D30 (--C-$tip_test@V-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@t.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180288D8C (--1-$com_ptr_t@V-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180288DAC (-ensure_data@-$tip_test@V-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028A668 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028ADE8 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C921C (--1-$test_data_control@V-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@.c)
 */

_QWORD *__fastcall Utils::ProtocolLauncher::ValidateTrusted(_QWORD *a1, __int64 *a2, __int64 a3)
{
  HSTRING v6; // rcx
  __int64 v7; // r12
  PCWSTR StringRawBuffer; // rax
  __int64 v9; // rcx
  char v10; // bp
  __int64 v11; // rdi
  __int64 v12; // rax
  _QWORD v14[9]; // [rsp+20h] [rbp-48h] BYREF
  void *v15; // [rsp+78h] [rbp+10h] BYREF
  char v16; // [rsp+88h] [rbp+20h] BYREF

  v6 = *(HSTRING *)(*a2 + 16);
  v7 = *(_QWORD *)(*a2 + 24);
  if ( !v6 )
    goto LABEL_5;
  StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
  v14[0] = StringRawBuffer;
  v9 = -1LL;
  do
    ++v9;
  while ( StringRawBuffer[v9] );
  v14[1] = v9;
  v10 = 1;
  if ( !Utils::ProtocolLauncher::IsTrustedPublisher(v14) )
LABEL_5:
    v10 = 0;
  if ( !v7 )
  {
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>>::operator->(
                            a3,
                            &v16)
             + 266LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>>::~test_data_control<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>>(&v16);
  }
  v11 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>>::ensure_data(a3);
  v15 = (void *)v11;
  if ( v10 )
  {
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 272));
    tip2::details::shared_data<0,0,1>::begin_update(v11 + 8);
    *(_BYTE *)(v11 + 267) = 1;
  }
  else
  {
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 272));
    tip2::details::shared_data<0,0,1>::begin_update(v11 + 8);
    *(_BYTE *)(v11 + 265) = 1;
  }
  tip2::details::shared_data<0,0,0>::end_update(v11 + 8);
  wil::com_ptr_t<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>,wil::err_returncode_policy>::reset(&v15);
  wil::com_ptr_t<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>,wil::err_returncode_policy>(&v15);
  if ( v7 && v10 )
  {
    v12 = *a2;
    *a2 = 0LL;
    *a1 = v12;
  }
  else
  {
    *a1 = 0LL;
  }
  wil::com_ptr_t<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>,wil::err_returncode_policy>(a3);
  return a1;
}
