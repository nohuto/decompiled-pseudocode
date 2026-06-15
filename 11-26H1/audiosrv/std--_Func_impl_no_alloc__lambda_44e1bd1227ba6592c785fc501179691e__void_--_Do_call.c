/*
 * XREFs of std::_Func_impl_no_alloc__lambda_44e1bd1227ba6592c785fc501179691e__void_::_Do_call @ 0x180104110
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x1801032FC (-AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_44e1bd1227ba6592c785fc501179691e__void_::_Do_call(__int64 a1)
{
  struct _GUID v1; // xmm0
  EffectPackConfigurationManager *v2; // rcx
  int v3; // eax
  struct _GUID v4; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(struct _GUID *)(a1 + 16);
  v2 = *(EffectPackConfigurationManager **)(a1 + 8);
  v4 = v1;
  v3 = EffectPackConfigurationManager::AddEffectPackConfigurationToEndpoints(v2, &v4);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      56LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
      (const char *)(unsigned int)v3);
}
