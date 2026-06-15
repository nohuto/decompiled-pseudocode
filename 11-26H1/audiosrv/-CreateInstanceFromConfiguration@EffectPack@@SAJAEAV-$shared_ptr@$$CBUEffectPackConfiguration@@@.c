/*
 * XREFs of ?CreateInstanceFromConfiguration@EffectPack@@SAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@3@@Z @ 0x1800583D4
 * Callers:
 *     ?CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180057D44 (-CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics.c)
 *     ?AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x1801376E4 (-AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV-$shared_ptr@$$CBUEff.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800584C0 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180058540 (--0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV-$shared_ptr@$$CBUEffe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPack::CreateInstanceFromConfiguration(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  std::_Ref_count_base *v8; // rax
  std::_Ref_count_base *v9; // rbx
  const char *v10; // r9
  __int64 result; // rax
  int v12[2]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (std::_Ref_count_base *)operator new(0x868uLL);
  try
  {
    v9 = v8;
    *(_QWORD *)v12 = v8;
    if ( v8 )
    {
      *(_OWORD *)v8 = 0LL;
      *((_DWORD *)v8 + 2) = 1;
      *((_DWORD *)v8 + 3) = 1;
      *(_QWORD *)v8 = &std::_Ref_count_obj2<EffectPack>::`vftable';
      EffectPack::EffectPack((char *)v8 + 16, a3, a2, a1, *(_QWORD *)v12);
    }
    else
    {
      v9 = 0LL;
    }
    *(_QWORD *)v12 = (char *)v9 + 16;
    v13 = v9;
    std::shared_ptr<std::function<void (void)>>::operator=(a4, v12);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    if ( *a4 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFE,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)0x8007000ELL);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x101,
                           (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
                           v10);
  }
  return result;
}
