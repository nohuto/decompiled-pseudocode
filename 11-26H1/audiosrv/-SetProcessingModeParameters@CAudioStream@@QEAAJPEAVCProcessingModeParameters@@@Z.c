/*
 * XREFs of ?SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z @ 0x18002B0D4
 * Callers:
 *     ?SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z @ 0x18002AD50 (-SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z.c)
 * Callees:
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180053E38 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180053E8C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180063624 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180067534 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAX_K@Z @ 0x1800A9CC0 (-_Clear_and_reserve_geometric@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator.c)
 *     ?Reset@CProcessingModeParameters@@QEAAXXZ @ 0x1800AE1A8 (-Reset@CProcessingModeParameters@@QEAAXXZ.c)
 *     ??$_Copy_memmove_n@PEAUAudioEffectState@CProcessingModeParameters@@PEAU12@@std@@YAPEAUAudioEffectState@CProcessingModeParameters@@PEAU12@_K0@Z @ 0x1800AE254 (--$_Copy_memmove_n@PEAUAudioEffectState@CProcessingModeParameters@@PEAU12@@std@@YAPEAUAudioEffec.c)
 */

__int64 __fastcall CAudioStream::SetProcessingModeParameters(
        CAudioStream *this,
        struct CProcessingModeParameters *a2,
        __int64 a3,
        const char *a4)
{
  struct CProcessingModeParameters *v6; // rsi
  char *v7; // r13
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned __int64 v10; // r12
  char *v11; // rcx
  void *v12; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID pv; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    v6 = (CAudioStream *)((char *)this + 576);
    if ( !a2 )
    {
      CProcessingModeParameters::Reset((CAudioStream *)((char *)this + 576));
      return 0LL;
    }
    if ( v6 == a2 )
    {
LABEL_8:
      *((_BYTE *)this + 608) = *((_BYTE *)a2 + 32);
      if ( *((_QWORD *)a2 + 3) )
      {
        wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(&pv);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
          (char *)this + 600,
          &pv);
        if ( pv )
          CoTaskMemFree(pv);
      }
      else
      {
        v12 = (void *)*((_QWORD *)this + 75);
        if ( v12 )
        {
          wil::last_error_context::last_error_context((wil::last_error_context *)&pv);
          CoTaskMemFree(v12);
          wil::last_error_context::~last_error_context((wil::last_error_context *)&pv);
        }
        *((_QWORD *)this + 75) = 0LL;
      }
      return 0LL;
    }
    v7 = *(char **)a2;
    v8 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 2);
    v9 = *(_QWORD *)v6;
    if ( v8 > 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 74) - *((_QWORD *)this + 72)) >> 2) )
    {
      std::vector<CProcessingModeParameters::AudioEffectState>::_Clear_and_reserve_geometric(
        v6,
        0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 2));
      v9 = *(_QWORD *)v6;
    }
    else
    {
      v10 = 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 73) - v9) >> 2);
      if ( v8 > v10 )
      {
        std::_Copy_memmove_n<CProcessingModeParameters::AudioEffectState *,CProcessingModeParameters::AudioEffectState *>(v7);
        v9 = *((_QWORD *)v6 + 1);
        v8 -= v10;
        v11 = &v7[20 * v10];
        goto LABEL_7;
      }
    }
    v11 = v7;
LABEL_7:
    std::_Copy_memmove_n<CProcessingModeParameters::AudioEffectState *,CProcessingModeParameters::AudioEffectState *>(v11);
    *((_QWORD *)v6 + 1) = v9 + 20 * v8;
    goto LABEL_8;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x809,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                           a4);
  }
  return result;
}
