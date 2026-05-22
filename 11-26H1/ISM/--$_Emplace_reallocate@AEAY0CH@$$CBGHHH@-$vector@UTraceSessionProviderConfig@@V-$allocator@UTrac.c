/*
 * XREFs of ??$_Emplace_reallocate@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@AEAAPEAUTraceSessionProviderConfig@@QEAU2@AEAY0CH@$$CBG$$QEAH22@Z @ 0x1800D3BF4
 * Callers:
 *     ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAAEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH11@Z @ 0x1800D4178 (--$emplace_back@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessio.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180069BE8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@YAPEAUTraceSessionProviderConfig@@QEAU1@0PEAU1@AEAV?$allocator@UTraceSessionProviderConfig@@@0@@Z @ 0x1800D4084 (--$_Uninitialized_move@PEAUTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@.c)
 *     ??$construct@UTraceSessionProviderConfig@@AEAY0CH@$$CBGHHH@?$_Default_allocator_traits@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@SAXAEAV?$allocator@UTraceSessionProviderConfig@@@1@QEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH33@Z @ 0x1800D411C (--$construct@UTraceSessionProviderConfig@@AEAY0CH@$$CBGHHH@-$_Default_allocator_traits@V-$alloca.c)
 *     ??1_Reallocation_guard@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA@XZ @ 0x1800D4B70 (--1_Reallocation_guard@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderC.c)
 *     ?_Change_array@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@AEAAXQEAUTraceSessionProviderConfig@@_K1@Z @ 0x1800D8BEC (-_Change_array@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@@@.c)
 */

char *__fastcall std::vector<TraceSessionProviderConfig>::_Emplace_reallocate<unsigned short const (&)[39],int,int,int>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v7; // rbx
  __int64 v10; // r15
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 size_of; // rax
  char *v16; // rdi
  char *v17; // r15
  __int64 v18; // rdx
  char *v19; // r8
  __int64 v20; // rcx
  _QWORD v22[3]; // [rsp+30h] [rbp-58h] BYREF
  char *v23; // [rsp+48h] [rbp-40h]
  char *v24; // [rsp+50h] [rbp-38h]

  v7 = 0x666666666666666LL;
  v10 = (a2 - *a1) / 40;
  v11 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( v11 == 0x666666666666666LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v12 = v11 + 1;
  v13 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v14 = v13 >> 1;
  if ( v13 <= 0x666666666666666LL - (v13 >> 1) )
  {
    v7 = v14 + v13;
    if ( v14 + v13 < v12 )
      v7 = v12;
  }
  size_of = std::_Get_size_of_n<40>(v7);
  v16 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v22[2] = v7;
  v17 = &v16[40 * v10];
  v24 = v17 + 40;
  std::_Default_allocator_traits<std::allocator<TraceSessionProviderConfig>>::construct<TraceSessionProviderConfig,unsigned short const (&)[39],int,int,int>(
    a5,
    v17,
    a3,
    a4,
    a5,
    a6,
    a1);
  v18 = a1[1];
  v19 = v16;
  v20 = *a1;
  v23 = v17;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<TraceSessionProviderConfig *>(v20, a2, v16);
    v18 = a1[1];
    v19 = v17 + 40;
    v20 = a2;
    v23 = v16;
  }
  std::_Uninitialized_move<TraceSessionProviderConfig *>(v20, v18, v19);
  v22[1] = 0LL;
  std::vector<TraceSessionProviderConfig>::_Change_array(a1, v16, v12, v7);
  std::vector<TraceSessionProviderConfig>::_Reallocation_guard::~_Reallocation_guard(v22);
  return v17;
}
