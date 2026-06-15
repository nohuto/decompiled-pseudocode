/*
 * XREFs of ?DeleteAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@PEBG@Z @ 0x1800C6F30
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Do_call @ 0x1801005E0 (std--_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_--_Do_call.c)
 * Callees:
 *     _lambda_c7ca9f80eb9d712dfec147e946fba3c8_::_lambda_c7ca9f80eb9d712dfec147e946fba3c8_ @ 0x1800C3E84 (_lambda_c7ca9f80eb9d712dfec147e946fba3c8_--_lambda_c7ca9f80eb9d712dfec147e946fba3c8_.c)
 *     _lambda_8d5f4d8aa39242536c97982253020fd6_::operator() @ 0x1800C47E4 (_lambda_8d5f4d8aa39242536c97982253020fd6_--operator().c)
 */

void __fastcall CAudioResourceManager::DeleteAuxiliaryInputForStreamGroup(
        CAudioResourceManager *this,
        const struct Microsoft::WRL::WeakRef *a2,
        const unsigned __int16 *a3)
{
  _QWORD *v3; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF
  const unsigned __int16 *v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = a3;
  v3 = lambda_c7ca9f80eb9d712dfec147e946fba3c8_::_lambda_c7ca9f80eb9d712dfec147e946fba3c8_(
         v4,
         (__int64)a2,
         (__int64)&v5,
         (__int64)this);
  lambda_8d5f4d8aa39242536c97982253020fd6_::operator()((__int64)v3);
}
