/*
 * XREFs of ?IsContactInBuffer@ContextualProcessorBuffer@@UEAA_NK@Z @ 0x1800410D0
 * Callers:
 *     <none>
 * Callees:
 *     ?count@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBW4TestCommandMessageType@@@Z @ 0x18010D034 (-count@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMes.c)
 */

char __fastcall ContextualProcessorBuffer::IsContactInBuffer(ContextualProcessorBuffer *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = *((_QWORD *)this + 3);
  v3 = *((_QWORD *)this + 4);
  while ( 1 )
  {
    if ( v2 == v3 )
      return 0;
    if ( std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::count(
           v2 + 8,
           &v5) )
    {
      break;
    }
    v2 += 224LL;
  }
  return 1;
}
