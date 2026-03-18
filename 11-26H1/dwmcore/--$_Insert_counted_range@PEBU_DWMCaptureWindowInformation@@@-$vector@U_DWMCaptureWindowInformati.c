/*
 * XREFs of ??$_Insert_counted_range@PEBU_DWMCaptureWindowInformation@@@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@1@PEBU_DWMCaptureWindowInformation@@_K@Z @ 0x18024532C
 * Callers:
 *     ?SetOrAppendWindowInfos@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@AEAAJAEBV?$span@$$CBU_DWMCaptureWindowInformation@@$0?0@gsl@@_N@Z @ 0x18021DD18 (-SetOrAppendWindowInfos@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@AEAAJA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAXQEAUFlipPropertyItem@@_K1@Z @ 0x1801B3404 (-_Change_array@-$vector@UFlipPropertyItem@@V-$allocator@UFlipPropertyItem@@@std@@@std@@AEAAXQEAU.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1801B41F4 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAU_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@YAPEAU_DWMCaptureWindowInformation@@QEAU1@0PEAU1@AEAV?$allocator@U_DWMCaptureWindowInformation@@@0@@Z @ 0x1801B4AA0 (--$_Uninitialized_move@PEAU_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformat.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Uninitialized_copy_n@PEBU_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@YAPEAU_DWMCaptureWindowInformation@@PEBU1@_KPEAU1@AEAV?$allocator@U_DWMCaptureWindowInformation@@@0@@Z @ 0x1802455D4 (--$_Uninitialized_copy_n@PEBU_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInform.c)
 *     ??1_Reallocation_guard@?$vector@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@QEAA@XZ @ 0x1802461F4 (--1_Reallocation_guard@-$vector@UScribbleFrame@CComputeScribbleScheduler@@V-$allocator@UScribble.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

void __fastcall std::vector<_DWMCaptureWindowInformation>::_Insert_counted_range<_DWMCaptureWindowInformation const *>(
        char **a1,
        char *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  char *v4; // rsi
  char *v6; // rdx
  char *v8; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  SIZE_T size_of; // rax
  __int64 v17; // rdx
  char *v18; // r12
  __int64 v19; // r8
  char *v20; // rdi
  char *v21; // r8
  char *v22; // rcx
  __int64 v23; // rcx
  char *v24; // rdi
  _QWORD v25[3]; // [rsp+20h] [rbp-68h] BYREF
  char *v26; // [rsp+38h] [rbp-50h]
  char *v27; // [rsp+40h] [rbp-48h]
  char *v28; // [rsp+90h] [rbp+8h]
  __int64 v29; // [rsp+98h] [rbp+10h]

  if ( a4 )
  {
    v4 = a1[1];
    v6 = a1[2];
    v8 = *a1;
    if ( a4 <= (v6 - v4) >> 5 )
    {
      v23 = 32 * a4;
      if ( a4 >= (v4 - a2) >> 5 )
      {
        a1[1] = std::_Uninitialized_move<_DWMCaptureWindowInformation *>(a2, (__int64)v4, &a2[v23]);
      }
      else
      {
        v24 = &v4[-v23];
        a1[1] = std::_Uninitialized_move<_DWMCaptureWindowInformation *>(&v4[-v23], (__int64)v4, v4);
        memmove_0(&v4[-(v24 - a2)], a2, v24 - a2);
      }
      std::_Uninitialized_copy_n<_DWMCaptureWindowInformation const *>(a3, a4, a2);
    }
    else
    {
      v11 = 0x7FFFFFFFFFFFFFFLL;
      v12 = (v4 - v8) >> 5;
      if ( a4 > 0x7FFFFFFFFFFFFFFLL - v12 )
        std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
      v13 = v12 + a4;
      v14 = (v6 - v8) >> 5;
      v29 = v12 + a4;
      v15 = v14 >> 1;
      if ( v14 <= 0x7FFFFFFFFFFFFFFLL - (v14 >> 1) )
      {
        v11 = v15 + v14;
        if ( v15 + v14 < v13 )
          v11 = v13;
      }
      size_of = std::_Get_size_of_n<32>(v11);
      v18 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v17);
      v25[0] = a1;
      v25[2] = v11;
      v19 = (a2 - v8) >> 5;
      v28 = &v18[32 * v19 + 32 * a4];
      v20 = &v18[32 * v19];
      v27 = v28;
      std::_Uninitialized_copy_n<_DWMCaptureWindowInformation const *>(a3, a4, v20);
      v26 = v20;
      if ( a4 == 1 && a2 == v4 )
      {
        v21 = v18;
        v22 = v8;
      }
      else
      {
        std::_Uninitialized_move<_DWMCaptureWindowInformation *>(v8, (__int64)a2, v18);
        v21 = v28;
        v22 = a2;
        v26 = v18;
      }
      std::_Uninitialized_move<_DWMCaptureWindowInformation *>(v22, (__int64)v4, v21);
      v25[1] = 0LL;
      std::vector<FlipPropertyItem>::_Change_array((__int64)a1, (__int64)v18, v29, v11);
      std::vector<CComputeScribbleScheduler::ScribbleFrame>::_Reallocation_guard::~_Reallocation_guard(v25);
    }
  }
}
