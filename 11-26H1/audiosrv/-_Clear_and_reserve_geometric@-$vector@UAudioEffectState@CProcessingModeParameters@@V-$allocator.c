/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAX_K@Z @ 0x1800A9CC0
 * Callers:
 *     ?SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z @ 0x18002B0D4 (-SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z.c)
 *     ?Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z @ 0x18002B264 (-Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z.c)
 *     ??4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z @ 0x180053CD4 (--4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??4?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180064A68 (--4-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator@UAudioEffectState@CProcess.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BE@@std@@YA_K_K@Z @ 0x1800A9D7C (--$_Get_size_of_n@$0BE@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 */

char *__fastcall std::vector<CProcessingModeParameters::AudioEffectState>::_Clear_and_reserve_geometric(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 size_of; // rax
  char *v7; // rax
  char *result; // rax

  v2 = 0xCCCCCCCCCCCCCCCLL;
  if ( a2 > 0xCCCCCCCCCCCCCCCLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v4 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2);
  v5 = v4 >> 1;
  if ( v4 <= 0xCCCCCCCCCCCCCCCLL - (v4 >> 1) )
  {
    v2 = v5 + v4;
    if ( v5 + v4 < a2 )
      v2 = a2;
  }
  if ( *(_QWORD *)a1 )
  {
    std::_Deallocate<16>(*(void **)a1, (struct std::nothrow_t *)(20 * v4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  size_of = std::_Get_size_of_n<20>(v2);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v7;
  result = &v7[20 * v2];
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
