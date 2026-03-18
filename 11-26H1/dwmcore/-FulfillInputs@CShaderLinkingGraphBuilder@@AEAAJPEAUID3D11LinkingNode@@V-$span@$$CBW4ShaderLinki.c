/*
 * XREFs of ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180147828
 * Callers:
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180146EBC (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x18014700C (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@AEBW4ShaderLinkingArgument@@@Z @ 0x18025F5DC (-find@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$_Uha.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::FulfillInputs(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 i; // rdi
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= *a3 )
      return v3;
    std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::find(
      a1 + 16,
      &v15,
      a3[1] + 2 * i);
    if ( v15 == *(_QWORD *)(a1 + 24) )
      break;
    v8 = *(__int64 **)(a1 + 8);
    v9 = *(_QWORD *)(v15 + 24);
    v10 = (unsigned int)*(char *)(v15 + 32);
    v11 = *v8;
    if ( *(_BYTE *)(v15 + 33) )
    {
      v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64, _DWORD, _QWORD))(v11 + 64))(
              v8,
              v9,
              v10,
              v15 + 33,
              a2,
              i,
              0LL);
      v3 = v12;
      if ( v12 < 0 )
      {
        v14 = 361;
        goto LABEL_7;
      }
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, _DWORD))(v11 + 56))(v8, v9, v10, a2, i);
      v3 = v12;
      if ( v12 < 0 )
      {
        v14 = 354;
LABEL_7:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v14, 0LL);
        return v3;
      }
    }
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x15Au, 0LL);
  return v3;
}
