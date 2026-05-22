/*
 * XREFs of ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x18001D8F8
 * Callers:
 *     ?AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x18001C750 (-AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInit.c)
 *     ?TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x18001D0E0 (-TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextua.c)
 * Callees:
 *     ?_Change_array@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUContextualProcessorMetadata@ContextualProcessorBuffer@@_K1@Z @ 0x18001CE7C (-_Change_array@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UCo.c)
 *     ??$_Uninitialized_copy@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@00AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x18001DA84 (--$_Uninitialized_copy@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@V-$allo.c)
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x18001DAEC (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x18009614C (--$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@U.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??1_Reallocation_guard@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1801A7540 (--1_Reallocation_guard@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=1
ContextualProcessorBuffer::ContextualProcessorMetadata *__fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
        __int64 a1,
        __int64 a2,
        const struct ContextualProcessorBuffer::ContextualProcessorMetadata *a3)
{
  __int64 v6; // rbp
  __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  ContextualProcessorBuffer::ContextualProcessorMetadata *v12; // rsi
  ContextualProcessorBuffer::ContextualProcessorMetadata *v13; // rbp
  struct ContextualProcessorBuffer::ContextualProcessorMetadata *v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  ContextualProcessorBuffer::ContextualProcessorMetadata *v17; // [rsp+28h] [rbp-50h]
  unsigned __int64 v18; // [rsp+30h] [rbp-48h]
  ContextualProcessorBuffer::ContextualProcessorMetadata *v19; // [rsp+38h] [rbp-40h]
  char *v20; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *(_QWORD *)a1) / 224;
  v7 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5);
  if ( v7 == 0x124924924924924LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 5);
  v10 = v9 >> 1;
  if ( v9 <= 0x124924924924924LL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x124924924924924LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x124924924924924LL;
  }
  v12 = (ContextualProcessorBuffer::ContextualProcessorMetadata *)std::_Allocate<16,std::_Default_allocate_traits>(224 * v11);
  v13 = (ContextualProcessorBuffer::ContextualProcessorMetadata *)((char *)v12 + 224 * v6);
  v16 = a1;
  v17 = v12;
  v18 = v11;
  v20 = (char *)v13 + 224;
  ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(v13, a3);
  v19 = v13;
  v14 = *(struct ContextualProcessorBuffer::ContextualProcessorMetadata **)a1;
  if ( a2 == *(_QWORD *)(a1 + 8) )
  {
    std::_Uninitialized_copy<ContextualProcessorBuffer::ContextualProcessorMetadata *,ContextualProcessorBuffer::ContextualProcessorMetadata *,std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(v14);
  }
  else
  {
    std::_Uninitialized_move<ContextualProcessorBuffer::ContextualProcessorMetadata *>(
      v14,
      a2,
      v12,
      a1,
      v16,
      v17,
      v18,
      v19,
      v20);
    std::_Uninitialized_move<ContextualProcessorBuffer::ContextualProcessorMetadata *>(
      a2,
      *(_QWORD *)(a1 + 8),
      (char *)v13 + 224,
      a1,
      v16,
      v17,
      v18,
      v12,
      v20);
  }
  v17 = 0LL;
  std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Change_array(
    (ContextualProcessorBuffer::ContextualProcessorMetadata **)a1,
    v12,
    v8,
    v11);
  std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Reallocation_guard::~_Reallocation_guard(&v16);
  return v13;
}
