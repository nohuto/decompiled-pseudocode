/*
 * XREFs of ??$_Emplace_reallocate@UInputSiteId@@@?$vector@UInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@AEAAPEAUInputSiteId@@QEAU2@$$QEAU2@@Z @ 0x180085500
 * Callers:
 *     ?SetIdForNamespace@InputSite@@AEAAXW4InputSiteIdNamespace@@_K@Z @ 0x18002D960 (-SetIdForNamespace@InputSite@@AEAAXW4InputSiteIdNamespace@@_K@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18002DF80 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Change_array@?$vector@UInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@AEAAXQEAUInputSiteId@@_K1@Z @ 0x1800786F0 (-_Change_array@-$vector@UInputSiteId@@V-$allocator@UInputSiteId@@@std@@@std@@AEAAXQEAUInputSiteI.c)
 *     ??$_Uninitialized_move@PEAUInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@YAPEAUInputSiteId@@QEAU1@0PEAU1@AEAV?$allocator@UInputSiteId@@@0@@Z @ 0x18007C790 (--$_Uninitialized_move@PEAUInputSiteId@@V-$allocator@UInputSiteId@@@std@@@std@@YAPEAUInputSiteId.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA@XZ @ 0x1800CCB50 (--1_Reallocation_guard@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@.c)
 */

char *__fastcall std::vector<InputSiteId>::_Emplace_reallocate<InputSiteId>(__int64 *a1, __int64 a2, __int128 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  char *v13; // rax
  __int128 v14; // xmm0
  char *v15; // r14
  __int64 v16; // rsi
  char *v17; // r8
  __int64 v18; // rdx
  void *v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v22; // [rsp+38h] [rbp-40h]
  _OWORD *v23; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v21[0] = a1;
  v15 = &v13[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v21[2] = v3;
  v16 = (__int64)v13;
  v22 = v15;
  v17 = v13;
  *(_OWORD *)v15 = v14;
  v18 = a1[1];
  v19 = (void *)*a1;
  v23 = v15 + 16;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<InputSiteId *>(v19, a2, v13);
    v18 = a1[1];
    v17 = v15 + 16;
    v19 = (void *)a2;
    v22 = (char *)v16;
  }
  std::_Uninitialized_move<InputSiteId *>(v19, v18, v17);
  v21[1] = 0LL;
  std::vector<InputSiteId>::_Change_array(a1, v16, v9, v3);
  std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::_Reallocation_guard::~_Reallocation_guard(v21);
  return v15;
}
