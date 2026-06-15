/*
 * XREFs of ?_Growmap@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@AEAAX_K@Z @ 0x18012725C
 * Callers:
 *     ??$_Emplace_back_internal@AEBV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@AEAAXAEBV?$shared_ptr@VWorkItem@CWorkFifo@@@1@@Z @ 0x18012435C (--$_Emplace_back_internal@AEBV-$shared_ptr@VWorkItem@CWorkFifo@@@std@@@-$deque@V-$shared_ptr@VWo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180050470 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z @ 0x18005C018 (--$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 */

void __fastcall std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r15
  unsigned __int64 size_of; // rax
  __int64 v6; // r14
  char *v7; // rbp
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  void *v11; // rax
  void *v12; // rcx
  void *v13; // rax
  size_t v14; // r8
  void *v15; // rcx
  void *v16; // rcx

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( v2 == v3 || v2 < 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFLL - v2 < v2 )
      std::_Xlength_error("deque<T> too long");
    v2 *= 2LL;
  }
  v4 = a1[3];
  size_of = std::_Get_size_of_n<8>(v2);
  v6 = 8 * v4;
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v8 = v2 >> 1;
  while ( v2 <= v8 )
    v2 *= 2LL;
  v9 = a1[2];
  v10 = v2 - v9;
  v11 = (void *)std::_Copy_memmove<_GUID *,_GUID *>((void *)(a1[1] + v6), a1[1] + 8 * v9, &v7[8 * v4]);
  v12 = (void *)a1[1];
  if ( v4 > v10 )
  {
    std::_Copy_memmove<_GUID *,_GUID *>(v12, (__int64)v12 + 8 * v10, v11);
    v15 = (void *)std::_Copy_memmove<_GUID *,_GUID *>((void *)(8 * v10 + a1[1]), a1[1] + v6, v7);
    v14 = 8 * v10;
  }
  else
  {
    v13 = (void *)std::_Copy_memmove<_GUID *,_GUID *>(v12, (__int64)v12 + v6, v11);
    memset_0(v13, 0, 8 * (v10 - v4));
    v14 = 8 * v4;
    v15 = v7;
  }
  memset_0(v15, 0, v14);
  v16 = (void *)a1[1];
  if ( v16 )
    std::_Deallocate<16>(v16, (struct std::nothrow_t *)(8LL * a1[2]));
  a1[1] = v7;
  a1[2] += v10;
}
