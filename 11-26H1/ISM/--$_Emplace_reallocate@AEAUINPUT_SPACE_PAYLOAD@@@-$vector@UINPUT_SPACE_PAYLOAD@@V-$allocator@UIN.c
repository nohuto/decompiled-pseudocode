/*
 * XREFs of ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEAU2@@Z @ 0x180046710
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x180046170 (-OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 *     ??$_Emplace_one_at_back@UINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAAEAUINPUT_SPACE_PAYLOAD@@$$QEAU2@@Z @ 0x1800466D4 (--$_Emplace_one_at_back@UINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPU.c)
 *     ??$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAAEAUINPUT_SPACE_PAYLOAD@@AEAU2@@Z @ 0x1800A9708 (--$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPA.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18004FA00 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Change_array@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXQEAUINPUT_SPACE_PAYLOAD@@_K1@Z @ 0x180076B40 (-_Change_array@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEA.c)
 *     ??$_Uninitialized_move@PEAUINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@YAPEAUINPUT_SPACE_PAYLOAD@@QEAU1@0PEAU1@AEAV?$allocator@UINPUT_SPACE_PAYLOAD@@@0@@Z @ 0x18007B6A8 (--$_Uninitialized_move@PEAUINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@Y.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEBA_K_K@Z @ 0x180097B90 (-_Calculate_growth@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@.c)
 *     ??1_Reallocation_guard@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA@XZ @ 0x1800A97F8 (--1_Reallocation_guard@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD &>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  __int64 v9; // r14
  __int64 size_of; // rax
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) / 24;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength(0xAAAAAAAAAAAAAAALL);
  v8 = v7 + 1;
  v9 = std::vector<INPUT_SPACE_PAYLOAD>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<24>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = *a3;
  v19 = a1;
  v13 = v11;
  v20 = v9;
  v14 = v11 + 24 * v6;
  v15 = v11;
  *(_OWORD *)v14 = v12;
  v21 = v14;
  *(_QWORD *)(v14 + 16) = *((_QWORD *)a3 + 2);
  v16 = a1[1];
  v17 = *a1;
  v22 = v14 + 24;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<INPUT_SPACE_PAYLOAD *>(v17, a2, v11);
    v16 = a1[1];
    v15 = v14 + 24;
    v17 = a2;
    v21 = v13;
  }
  std::_Uninitialized_move<INPUT_SPACE_PAYLOAD *>(v17, v16, v15);
  std::vector<INPUT_SPACE_PAYLOAD>::_Change_array(a1, v13, v8, v9, v19, 0LL, v20, v21, v22);
  std::vector<VirtualTouchpadRect>::_Reallocation_guard::~_Reallocation_guard(&v19);
  return v14;
}
