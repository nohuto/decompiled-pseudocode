/*
 * XREFs of ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x18004D600
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800176E0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$construct@UInputSample@ContextualProcessorBuffer@@U12@@?$_Default_allocator_traits@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@SAXAEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@1@QEAUInputSample@ContextualProcessorBuffer@@$$QEAU34@@Z @ 0x18004D784 (--$construct@UInputSample@ContextualProcessorBuffer@@U12@@-$_Default_allocator_traits@V-$allocat.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x180094064 (--$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Cont.c)
 *     ?_Change_array@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUInputSample@ContextualProcessorBuffer@@_K1@Z @ 0x180095FB8 (-_Change_array@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Contex.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??1_Reallocation_guard@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1801A757C (--1_Reallocation_guard@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSampl.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<ContextualProcessorBuffer::InputSample>::_Emplace_reallocate<ContextualProcessorBuffer::InputSample>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbp
  __int64 v7; // r15
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) / 208;
  v7 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(a1[1] - *a1) >> 4);
  if ( v7 == 0x13B13B13B13B13BLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength(a1);
  v8 = v7 + 1;
  v9 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(a1[2] - *a1) >> 4);
  v10 = v9 >> 1;
  if ( v9 <= 0x13B13B13B13B13BLL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x13B13B13B13B13BLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x13B13B13B13B13BLL;
  }
  v12 = std::_Allocate<16,std::_Default_allocate_traits>(208 * v11);
  v13 = v12 + 208 * v6;
  v14 = v13 + 208;
  v19 = a1;
  v20 = v12;
  v21 = v11;
  v23 = v13 + 208;
  std::_Default_allocator_traits<std::allocator<ContextualProcessorBuffer::InputSample>>::construct<ContextualProcessorBuffer::InputSample,ContextualProcessorBuffer::InputSample>(
    v15,
    v13,
    a3);
  v22 = v13;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    v14 = v12;
  }
  else
  {
    std::_Uninitialized_move<ContextualProcessorBuffer::InputSample *>(v17, a2, v12, a1, v19, v20, v21, v22, v23);
    v22 = v12;
    v17 = a2;
    v16 = a1[1];
  }
  std::_Uninitialized_move<ContextualProcessorBuffer::InputSample *>(v17, v16, v14, a1, v19, v20, v21, v22, v23);
  v20 = 0LL;
  std::vector<ContextualProcessorBuffer::InputSample>::_Change_array(a1, v12, v8, v11);
  std::vector<ContextualProcessorBuffer::InputSample>::_Reallocation_guard::~_Reallocation_guard(&v19);
  return v13;
}
