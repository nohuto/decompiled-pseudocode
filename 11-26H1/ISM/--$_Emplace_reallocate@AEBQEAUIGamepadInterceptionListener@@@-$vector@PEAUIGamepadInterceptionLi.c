/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAUIGamepadInterceptionListener@@@?$vector@PEAUIGamepadInterceptionListener@@V?$allocator@PEAUIGamepadInterceptionListener@@@std@@@std@@AEAAPEAPEAUIGamepadInterceptionListener@@QEAPEAU2@AEBQEAU2@@Z @ 0x180108A44
 * Callers:
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18007AB64 (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002B550 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@AEAAXQEAPEAVInputSite@@_K1@Z @ 0x18006E958 (-_Change_array@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@AEAAXQEAPEAVInput.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAA@XZ @ 0x1800A97D0 (--1_Reallocation_guard@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@QEA.c)
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

char *__fastcall std::vector<IGamepadInterceptionListener *>::_Emplace_reallocate<IGamepadInterceptionListener * const &>(
        __int64 *a1,
        const void *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  char *v16; // r15
  __int64 v17; // r8
  void *v18; // rcx
  const void *v19; // rdx
  size_t v20; // r8
  _QWORD v22[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-40h]
  _QWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = ((__int64)a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = (__int64)v13;
  v22[0] = a1;
  v22[2] = v3;
  v16 = &v13[8 * v5];
  *(_QWORD *)v16 = v14;
  v17 = a1[1];
  v18 = v13;
  v19 = (const void *)*a1;
  v24 = v16 + 8;
  v23 = v16;
  if ( a2 == (const void *)v17 )
  {
    v20 = v17 - (_QWORD)v19;
  }
  else
  {
    memmove_0(v13, v19, (size_t)a2 - *a1);
    v19 = a2;
    v20 = a1[1] - (_QWORD)a2;
    v23 = (_QWORD *)v15;
    v18 = v16 + 8;
  }
  memmove_0(v18, v19, v20);
  v22[1] = 0LL;
  std::vector<InputSite *>::_Change_array(a1, v15, v9, v3);
  std::vector<LampUpdateState>::_Reallocation_guard::~_Reallocation_guard((__int64)v22);
  return v16;
}
