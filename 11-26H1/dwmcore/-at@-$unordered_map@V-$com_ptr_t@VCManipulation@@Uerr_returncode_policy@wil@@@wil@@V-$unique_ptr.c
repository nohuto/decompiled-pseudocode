/*
 * XREFs of ?at@?$unordered_map@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@@std@@QEAAAEAV?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@2@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18013DB98
 * Callers:
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x18013D9E8 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall std::unordered_map<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>>::at(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  v10 = *a2;
  v3 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()((unsigned __int8 *)&v10);
  v5 = v4[3];
  v6 = 2 * (v4[6] & v3);
  v7 = *(_QWORD *)(v5 + 16 * (v4[6] & v3) + 8);
  if ( v7 != v4[1] )
  {
    v8 = *(_QWORD *)(v5 + 8 * v6);
    while ( 1 )
    {
      if ( v2 == *(_QWORD *)(v7 + 16) )
        goto LABEL_6;
      if ( v7 == v8 )
        break;
      v7 = *(_QWORD *)(v7 + 8);
    }
  }
  do
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
LABEL_6:
    ;
  }
  while ( !v7 );
  return v7 + 24;
}
