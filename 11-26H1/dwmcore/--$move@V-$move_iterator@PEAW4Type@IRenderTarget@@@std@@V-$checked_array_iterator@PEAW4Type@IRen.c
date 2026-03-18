/*
 * XREFs of ??$move@V?$move_iterator@PEAW4Type@IRenderTarget@@@std@@V?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@V?$move_iterator@PEAW4Type@IRenderTarget@@@0@0V12@@Z @ 0x180208070
 * Callers:
 *     ?clear_region@?$vector_facade@W4Type@IRenderTarget@@V?$buffer_impl@W4Type@IRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801C565C (-clear_region@-$vector_facade@W4Type@IRenderTarget@@V-$buffer_impl@W4Type@IRenderTarget@@$03$00V.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@Z @ 0x18020700C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA-A_.c)
 */

__int64 __fastcall std::move<std::move_iterator<enum IRenderTarget::Type *>,stdext::checked_array_iterator<enum IRenderTarget::Type *>>(
        __int64 a1,
        void *a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v8 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(
                 a4,
                 (a3 - (__int64)a2) >> 2);
  a4[2] = (std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
             a2,
             a3,
             v8)
         - *a4) >> 2;
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
