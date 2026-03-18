/*
 * XREFs of ??0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCLight@@$0?0@gsl@@@Z @ 0x18025A5D0
 * Callers:
 *     ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x18025A774 (-Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@.c)
 * Callees:
 *     ??$?0V?$span_iterator@PEAVCLight@@@details@gsl@@$0A@@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@QEAA@V?$span_iterator@PEAVCLight@@@details@gsl@@0AEBV?$allocator@PEAVCLight@@@1@@Z @ 0x18025A460 (--$-0V-$span_iterator@PEAVCLight@@@details@gsl@@$0A@@-$vector@PEAVCLight@@V-$allocator@PEAVCLigh.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpectreCallbackRenderer::CSpectreCallbackRenderer(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 *a7)
{
  __int64 v10; // rax
  __m128i v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __m128i v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &CSpectreCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *(_QWORD *)(a1 + 8) = &CSpectreCallbackRenderer::`vftable'{for `CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>'};
  *(_QWORD *)(a1 + 24) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_OWORD *)(a1 + 32) = *a3;
  *(_OWORD *)(a1 + 48) = a3[1];
  *(_OWORD *)(a1 + 64) = a3[2];
  *(_OWORD *)(a1 + 80) = a3[3];
  *(_QWORD *)(a1 + 96) = *(_QWORD *)a4;
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(a1 + 108) = a5;
  *(_DWORD *)(a1 + 112) = a6;
  v10 = *a7;
  v12.m128i_i64[0] = a7[1];
  v15 = v12.m128i_i64[0];
  v12.m128i_i64[1] = v12.m128i_i64[0] + 8 * v10;
  v13 = v12.m128i_i64[1];
  v14 = v12;
  std::vector<CLight *>::vector<CLight *>((_QWORD *)(a1 + 120), &v14, &v12);
  return a1;
}
