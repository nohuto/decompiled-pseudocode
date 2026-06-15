/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_c30c4322ad4fbb47bc43bb3cdcd427e3__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_c30c4322ad4fbb47bc43bb3cdcd427e3___ @ 0x1801338B8
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800906DC (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     std::_Func_impl_no_alloc__lambda_c30c4322ad4fbb47bc43bb3cdcd427e3__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Copy @ 0x18013ED60 (std--_Func_impl_no_alloc__lambda_c30c4322ad4fbb47bc43bb3cdcd427e3__long_SystemEffectDescriptor__.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_c30c4322ad4fbb47bc43bb3cdcd427e3__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_c30c4322ad4fbb47bc43bb3cdcd427e3____::_2_::_Guard_type::__Guard_type @ 0x18013547C (_std--_Global_new_std--_Func_impl_no_alloc__lambda_c30c4322ad4fbb47bc43bb3cdcd427e3__long_System.c)
 */

char *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_c30c4322ad4fbb47bc43bb3cdcd427e3__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_c30c4322ad4fbb47bc43bb3cdcd427e3___(
        _OWORD *a1)
{
  char *v2; // rdi
  __int128 v3; // xmm0
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)operator new(0xC0uLL);
  v5 = 0LL;
  *(_QWORD *)v2 = &off_180178AE8;
  *(_OWORD *)(v2 + 8) = *a1;
  *(_OWORD *)(v2 + 24) = a1[1];
  *(_OWORD *)(v2 + 40) = a1[2];
  *(_OWORD *)(v2 + 56) = a1[3];
  *(_OWORD *)(v2 + 72) = a1[4];
  *(_OWORD *)(v2 + 88) = a1[5];
  *(_OWORD *)(v2 + 104) = a1[6];
  v3 = a1[7];
  a1 += 8;
  *(_OWORD *)(v2 + 120) = v3;
  *(_OWORD *)(v2 + 136) = *a1;
  *(_OWORD *)(v2 + 152) = a1[1];
  *(_OWORD *)(v2 + 168) = a1[2];
  *((_QWORD *)v2 + 23) = *((_QWORD *)a1 + 6);
  std::_Global_new_std::_Func_impl_no_alloc__lambda_c30c4322ad4fbb47bc43bb3cdcd427e3__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_c30c4322ad4fbb47bc43bb3cdcd427e3____::_2_::_Guard_type::__Guard_type(&v5);
  return v2;
}
