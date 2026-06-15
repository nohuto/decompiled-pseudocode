/*
 * XREFs of ??4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z @ 0x180053CD4
 * Callers:
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800FEF40 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUS.c)
 *     ?SetProcessingModeParameters@CBaseStreamGroupProxy@@UEAAJPEAVCProcessingModeParameters@@@Z @ 0x1800FFFB0 (-SetProcessingModeParameters@CBaseStreamGroupProxy@@UEAAJPEAVCProcessingModeParameters@@@Z.c)
 *     ?UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z @ 0x180100300 (-UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z.c)
 * Callees:
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180053E38 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180053E8C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180063624 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180067534 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAX_K@Z @ 0x1800A9CC0 (-_Clear_and_reserve_geometric@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator.c)
 *     ??$_Copy_memmove_n@PEAUAudioEffectState@CProcessingModeParameters@@PEAU12@@std@@YAPEAUAudioEffectState@CProcessingModeParameters@@PEAU12@_K0@Z @ 0x1800AE254 (--$_Copy_memmove_n@PEAUAudioEffectState@CProcessingModeParameters@@PEAU12@@std@@YAPEAUAudioEffec.c)
 */

char **__fastcall CProcessingModeParameters::operator=(char **a1, char **a2)
{
  char *v4; // r12
  char *v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  char *v8; // rcx
  char *v9; // rbx
  LPVOID pv; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 != a2 )
  {
    v4 = *a2;
    v5 = *a1;
    v6 = 0xCCCCCCCCCCCCCCCDuLL * ((a2[1] - *a2) >> 2);
    if ( v6 > 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 2) )
    {
      std::vector<CProcessingModeParameters::AudioEffectState>::_Clear_and_reserve_geometric(
        a1,
        0xCCCCCCCCCCCCCCCDuLL * ((a2[1] - *a2) >> 2));
      v5 = *a1;
    }
    else
    {
      v7 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - v5) >> 2);
      if ( v6 > v7 )
      {
        std::_Copy_memmove_n<CProcessingModeParameters::AudioEffectState *,CProcessingModeParameters::AudioEffectState *>(v4);
        v5 = a1[1];
        v8 = &v4[20 * v7];
        v6 -= v7;
        goto LABEL_5;
      }
    }
    v8 = v4;
LABEL_5:
    std::_Copy_memmove_n<CProcessingModeParameters::AudioEffectState *,CProcessingModeParameters::AudioEffectState *>(v8);
    a1[1] = &v5[20 * v6];
  }
  *((_BYTE *)a1 + 32) = *((_BYTE *)a2 + 32);
  if ( a2[3] )
  {
    wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(&pv);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      a1 + 3,
      &pv);
    if ( pv )
      CoTaskMemFree(pv);
  }
  else
  {
    v9 = a1[3];
    if ( v9 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&pv);
      CoTaskMemFree(v9);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&pv);
    }
    a1[3] = 0LL;
  }
  return a1;
}
