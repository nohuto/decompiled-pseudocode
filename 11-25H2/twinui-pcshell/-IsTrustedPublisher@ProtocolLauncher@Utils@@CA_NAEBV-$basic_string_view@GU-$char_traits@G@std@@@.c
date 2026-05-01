/*
 * XREFs of ?IsTrustedPublisher@ProtocolLauncher@Utils@@CA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B05C8
 * Callers:
 *     ?ValidateTrusted@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@$$QEAV34@V?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@@Z @ 0x180288814 (-ValidateTrusted@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$default_d.c)
 * Callees:
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1800B062C (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 */

char __fastcall Utils::ProtocolLauncher::IsTrustedPublisher(_QWORD *a1)
{
  void **i; // r11
  _WORD *v3; // r8
  __int64 v4; // r9
  __int64 v5; // r11

  for ( i = (void **)off_1806EB2C8; i != &IsGameManager::`vftable'; i = (void **)(v5 + 8) )
  {
    v3 = *i;
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
    if ( !(unsigned int)std::_Traits_compare<std::char_traits<unsigned short>>(*a1, a1[1], v3, v4) )
      return 1;
  }
  return 0;
}
