/*
 * XREFs of ??$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@AEAAPEAUTargetingInfo@KeyboardProcessor@@QEAU23@AEAU23@@Z @ 0x18008753C
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800129A0 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z @ 0x1800131C8 (--0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Change_array@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@AEAAXQEAUTargetingInfo@KeyboardProcessor@@_K1@Z @ 0x180078760 (-_Change_array@-$vector@UTargetingInfo@KeyboardProcessor@@V-$allocator@UTargetingInfo@KeyboardPr.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAPEAUTargetingInfo@KeyboardProcessor@@QEAU12@0PEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x18009472C (--$_Uninitialized_move@PEAUTargetingInfo@KeyboardProcessor@@V-$allocator@UTargetingInfo@Keyboard.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??1_Reallocation_guard@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@QEAA@XZ @ 0x18019B664 (--1_Reallocation_guard@-$vector@UTargetingInfo@KeyboardProcessor@@V-$allocator@UTargetingInfo@Ke.c)
 */

KeyboardProcessor::TargetingInfo *__fastcall std::vector<KeyboardProcessor::TargetingInfo>::_Emplace_reallocate<KeyboardProcessor::TargetingInfo &>(
        KeyboardProcessor::TargetingInfo **a1,
        KeyboardProcessor::TargetingInfo *a2,
        const struct KeyboardProcessor::TargetingInfo *a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  KeyboardProcessor::TargetingInfo *v13; // r14
  KeyboardProcessor::TargetingInfo *v14; // rdi
  KeyboardProcessor::TargetingInfo *v15; // rdx
  KeyboardProcessor::TargetingInfo *v16; // r8
  KeyboardProcessor::TargetingInfo *v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF
  KeyboardProcessor::TargetingInfo *v20; // [rsp+38h] [rbp-40h]
  char *v21; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) / 384;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 7);
  if ( v7 == 0xAAAAAAAAAAAAAALL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 7);
  v10 = v9 >> 1;
  if ( v9 <= 0xAAAAAAAAAAAAAALL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0xAAAAAAAAAAAAAALL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0xAAAAAAAAAAAAAALL;
  }
  v12 = std::_Allocate<16,std::_Default_allocate_traits>(384 * v11);
  v19[0] = a1;
  v13 = (KeyboardProcessor::TargetingInfo *)(v12 + 384 * v6);
  v19[2] = v11;
  v14 = (KeyboardProcessor::TargetingInfo *)v12;
  v21 = (char *)v13 + 384;
  KeyboardProcessor::TargetingInfo::TargetingInfo(v13, a3);
  v15 = a1[1];
  v16 = v14;
  v17 = *a1;
  v20 = v13;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<KeyboardProcessor::TargetingInfo *>(v17, a2, v14);
    v15 = a1[1];
    v16 = (KeyboardProcessor::TargetingInfo *)((char *)v13 + 384);
    v17 = a2;
    v20 = v14;
  }
  std::_Uninitialized_move<KeyboardProcessor::TargetingInfo *>(v17, v15, v16);
  v19[1] = 0LL;
  std::vector<KeyboardProcessor::TargetingInfo>::_Change_array(a1, v14, v8, v11);
  std::vector<KeyboardProcessor::TargetingInfo>::_Reallocation_guard::~_Reallocation_guard(v19);
  return v13;
}
