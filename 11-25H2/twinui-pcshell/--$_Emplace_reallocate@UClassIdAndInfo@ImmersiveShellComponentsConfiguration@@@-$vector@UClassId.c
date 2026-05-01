/*
 * XREFs of ??$_Emplace_reallocate@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@AEAAPEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@QEAU23@$$QEAU23@@Z @ 0x1803CF4EC
 * Callers:
 *     ??$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAA?A_T$$QEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@Z @ 0x1803CF674 (--$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@-$vector@UClassIdAndInfo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180029EEC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

char *__fastcall std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Emplace_reallocate<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>(
        __int64 a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  char *v14; // rsi
  char *v15; // r15
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  char *result; // rax
  void *v21; // [rsp+58h] [rbp+10h]

  v6 = (__int64)&a2[-*(_QWORD *)a1] / 24;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v8 = 0xAAAAAAAAAAAAAAALL;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<24>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v21 = v13;
  try
  {
    v15 = &v13[24 * v6];
    *(_OWORD *)v15 = *(_OWORD *)a3;
    *((_QWORD *)v15 + 2) = *(_QWORD *)(a3 + 16);
    v16 = *(_BYTE **)(a1 + 8);
    v17 = *(_BYTE **)a1;
    v18 = v13;
    if ( a2 == v16 )
    {
      v19 = v16 - v17;
    }
    else
    {
      memmove_0(v13, v17, (size_t)&a2[-*(_QWORD *)a1]);
      v18 = v15 + 24;
      v19 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(
        *(void **)a1,
        (const struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3)));
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = &v14[24 * v9];
    *(_QWORD *)(a1 + 16) = &v14[24 * v8];
    result = v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(24 * v8));
    throw;
  }
  return result;
}
