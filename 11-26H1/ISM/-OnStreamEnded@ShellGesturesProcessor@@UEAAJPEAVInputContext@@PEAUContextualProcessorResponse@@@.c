/*
 * XREFs of ?OnStreamEnded@ShellGesturesProcessor@@UEAAJPEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18007FA90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x180048290 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@V?$allocator@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@2@QEAU32@@Z @ 0x18007DBE8 (-_Unchecked_erase@-$list@U-$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@V-$alloca.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18008B328 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     ?StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4GestureRecognizerState@@1W4GestureOperationState@@@Z @ 0x18015D464 (-StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4Gest.c)
 */

__int64 __fastcall ShellGesturesProcessor::OnStreamEnded(
        ShellGesturesProcessor *this,
        struct InputContext *a2,
        struct ContextualProcessorResponse *a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // rsi
  __int64 i; // rbx
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rdx

  v3 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 )
  {
    v6 = (_QWORD *)((char *)this + 128);
    i = *((_QWORD *)this + 16);
LABEL_3:
    for ( i = *(_QWORD *)i;
          i != *v6;
          i = std::list<std::pair<unsigned int const,ShellGesturesProcessor::ActiveContactData>>::_Unchecked_erase(
                (__int64)v6,
                v12) )
    {
      if ( *(_QWORD *)(i + 24) != v3 )
        goto LABEL_3;
      if ( *(_BYTE *)(v3 + 456) )
        v8 = *(_DWORD *)(v3 + 428);
      else
        v8 = 0;
      if ( *(_BYTE *)(v3 + 416) )
        v9 = *(_DWORD *)(v3 + 272);
      else
        v9 = 0;
      InputTraceLogging::ShellGestures::StaleActiveContacts(
        *(unsigned int *)(i + 36),
        *(unsigned int *)(i + 44),
        *((unsigned int *)a2 + 26),
        *(unsigned int *)(v3 + 24),
        v9,
        v8);
      MicrosoftTelemetryAssertTriggeredArgs(v10, 0x20000LL, 901LL);
      v11 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)(i + 16));
      std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
        (__int64)this + 120,
        (_QWORD *)i,
        *((_QWORD *)this + 21) & v11);
    }
  }
  return 0LL;
}
