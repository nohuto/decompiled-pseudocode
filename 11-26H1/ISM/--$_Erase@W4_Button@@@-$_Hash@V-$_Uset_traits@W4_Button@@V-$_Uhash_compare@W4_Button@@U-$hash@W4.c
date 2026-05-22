/*
 * XREFs of ??$_Erase@W4_Button@@@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@AEAA_KAEBW4_Button@@@Z @ 0x18005F2FC
 * Callers:
 *     ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x1800D9CB0 (-OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Erase<enum _Button>(
        _QWORD *a1,
        unsigned __int8 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r11
  __int64 *v7; // rax
  __int64 v8; // r11
  __int64 *v9; // rcx
  __int64 v10; // rdx

  v4 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(a2);
  v5 = a1[3];
  v6 = a1[6] & v4;
  v7 = (__int64 *)a1[1];
  v8 = 2 * v6;
  v9 = *(__int64 **)(v5 + 8 * v8 + 8);
  if ( v9 == v7 )
  {
LABEL_5:
    v9 = 0LL;
  }
  else
  {
    while ( *(_DWORD *)a2 != *((_DWORD *)v9 + 4) )
    {
      if ( v9 == *(__int64 **)(v5 + 8 * v8) )
        goto LABEL_5;
      v9 = (__int64 *)v9[1];
    }
  }
  if ( !v9 )
    return 0LL;
  if ( *(__int64 **)(v5 + 8 * v8 + 8) == v9 )
  {
    if ( *(__int64 **)(v5 + 8 * v8) == v9 )
      *(_QWORD *)(v5 + 8 * v8) = v7;
    else
      v7 = (__int64 *)v9[1];
    *(_QWORD *)(v5 + 8 * v8 + 8) = v7;
  }
  else if ( *(__int64 **)(v5 + 8 * v8) == v9 )
  {
    *(_QWORD *)(v5 + 8 * v8) = *v9;
  }
  v10 = *v9;
  --a1[2];
  *(_QWORD *)v9[1] = v10;
  *(_QWORD *)(v10 + 8) = v9[1];
  std::_Deallocate<16>(v9, 24LL);
  return 1LL;
}
