/*
 * XREFs of ??$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU23@AEBU23@@Z @ 0x18002F918
 * Callers:
 *     ?RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVDragManagerClientProxy@@@Z @ 0x18002F3CC (-RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI.c)
 * Callees:
 *     ??0GestureRegistration@ShellGesturesProcessor@@QEAA@AEBU01@@Z @ 0x18002F7EC (--0GestureRegistration@ShellGesturesProcessor@@QEAA@AEBU01@@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18002F834 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@0PEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x18002FF90 (--$_Uninitialized_move@PEAUGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegi.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Change_array@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAXQEAUGestureRegistration@ShellGesturesProcessor@@_K1@Z @ 0x180079500 (-_Change_array@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegist.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@QEAA@XZ @ 0x18015C650 (--1_Reallocation_guard@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestu.c)
 */

ShellGesturesProcessor::GestureRegistration *__fastcall std::vector<ShellGesturesProcessor::GestureRegistration>::_Emplace_reallocate<ShellGesturesProcessor::GestureRegistration const &>(
        _QWORD *a1,
        __int64 a2,
        const struct ShellGesturesProcessor::GestureRegistration *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // rax
  ShellGesturesProcessor::GestureRegistration *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  char *v17; // r8
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  ShellGesturesProcessor::GestureRegistration *v22; // [rsp+38h] [rbp-40h]
  char *v23; // [rsp+40h] [rbp-38h]

  v3 = 0x7FFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength(a1);
  v9 = v6 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<32>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v20 = a1;
  v14 = (ShellGesturesProcessor::GestureRegistration *)(v13 + (v4 & 0xFFFFFFFFFFFFFFE0uLL));
  v21 = v3;
  v15 = v13;
  v23 = (char *)v14 + 32;
  ShellGesturesProcessor::GestureRegistration::GestureRegistration(v14, a3);
  v16 = a1[1];
  v17 = (char *)v15;
  v18 = *a1;
  v22 = v14;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<ShellGesturesProcessor::GestureRegistration *>(v18, a2, v15);
    v16 = a1[1];
    v17 = (char *)v14 + 32;
    v18 = a2;
    v22 = (ShellGesturesProcessor::GestureRegistration *)v15;
  }
  std::_Uninitialized_move<ShellGesturesProcessor::GestureRegistration *>(v18, v16, v17);
  std::vector<ShellGesturesProcessor::GestureRegistration>::_Change_array(a1, v15, v9, v3, v20, 0LL, v21, v22, v23);
  std::vector<ShellGesturesProcessor::GestureRegistration>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v14;
}
