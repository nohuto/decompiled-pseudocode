/*
 * XREFs of ?IsTrustedPublisher@ProtocolLauncher@Utils@@CA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801EEDA8
 * Callers:
 *     ?ValidateTrusted@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@$$QEAV34@V?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@@Z @ 0x1802847DC (-ValidateTrusted@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$default_d.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180033B70 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 */

char __fastcall Utils::ProtocolLauncher::IsTrustedPublisher(__int64 a1)
{
  __int64 *i; // rbx
  size_t v3; // rax
  const wchar_t *v4; // rcx
  int v5; // eax

  for ( i = (__int64 *)off_180721AB8;
        i != (__int64 *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIsGameManager>::`vftable';
        ++i )
  {
    v3 = std::_WChar_traits<wchar_t>::length(*i);
    LOBYTE(v5) = std::_Traits_compare<std::char_traits<unsigned short>>(
                   *(const wchar_t **)a1,
                   *(_QWORD *)(a1 + 8),
                   v4,
                   v3);
    if ( !v5 )
      return 1;
  }
  return 0;
}
