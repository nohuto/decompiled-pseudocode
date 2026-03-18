/*
 * XREFs of ??$_Emplace_front_internal@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028DC68
 * Callers:
 *     ?NotifyBatchProcessingComplete@CInteractionTracker@@UEAAXXZ @ 0x18013B070 (-NotifyBatchProcessingComplete@CInteractionTracker@@UEAAXXZ.c)
 *     ?UpdateActiveManipulationsIfNecessary@InteractionSourceManager@@QEAAXXZ @ 0x18013B100 (-UpdateActiveManipulationsIfNecessary@InteractionSourceManager@@QEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ?_Growmap@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x1801B5704 (-_Growmap@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 */

_QWORD *__fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Emplace_front_internal<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  _QWORD *result; // rax

  if ( (a1[3] & 1) == 0 && a1[2] <= (unsigned __int64)(a1[4] + 2LL) >> 1 )
    std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Growmap(a1);
  v4 = a1[2];
  v5 = 2 * v4 - 1;
  v6 = (v5 & a1[3]) == 0;
  a1[3] &= v5;
  v7 = a1[3];
  if ( v6 )
    v7 = 2 * v4;
  v8 = v7 - 1;
  v9 = (v8 >> 1) & (v4 - 1);
  if ( !*(_QWORD *)(a1[1] + 8 * v9) )
    *(_QWORD *)(a1[1] + 8 * v9) = std::_Allocate<16,std::_Default_allocate_traits>(0x10uLL, v4);
  result = wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
             (_QWORD *)(*(_QWORD *)(a1[1] + 8 * ((v8 >> 1) & (a1[2] - 1LL))) + 8 * (v8 & 1)),
             *a2);
  a1[3] = v8;
  ++a1[4];
  return result;
}
