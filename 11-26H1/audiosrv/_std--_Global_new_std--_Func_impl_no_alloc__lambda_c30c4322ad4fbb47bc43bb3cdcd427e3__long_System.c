/*
 * XREFs of _std::_Global_new_std::_Func_impl_no_alloc__lambda_c30c4322ad4fbb47bc43bb3cdcd427e3__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_c30c4322ad4fbb47bc43bb3cdcd427e3____::_2_::_Guard_type::__Guard_type @ 0x18013547C
 * Callers:
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_c30c4322ad4fbb47bc43bb3cdcd427e3__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_c30c4322ad4fbb47bc43bb3cdcd427e3___ @ 0x1801338B8 (std--_Global_new_std--_Func_impl_no_alloc__lambda_c30c4322ad4fbb47bc43bb3cdcd427e3__long_SystemE.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_c30c4322ad4fbb47bc43bb3cdcd427e3__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_c30c4322ad4fbb47bc43bb3cdcd427e3____::_2_::_Guard_type::__Guard_type(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0xC0);
}
