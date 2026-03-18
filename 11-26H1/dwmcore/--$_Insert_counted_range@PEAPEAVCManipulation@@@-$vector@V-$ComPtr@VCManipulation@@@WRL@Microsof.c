/*
 * XREFs of ??$_Insert_counted_range@PEAPEAVCManipulation@@@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@@1@PEAPEAVCManipulation@@_K@Z @ 0x1801E7744
 * Callers:
 *     ?SetOrAppendManipulations@CInteractionTracker2@@AEAAXAEBV?$span@PEAVCManipulation@@$0?0@gsl@@_N@Z @ 0x1802179F0 (-SetOrAppendManipulations@CInteractionTracker2@@AEAAXAEBV-$span@PEAVCManipulation@@$0-0@gsl@@_N@.c)
 *     ?AppendManipulations@CInteractionTracker2@@QEAAJAEBV?$span@PEAVCManipulation@@$0?0@gsl@@@Z @ 0x18021D524 (-AppendManipulations@CInteractionTracker2@@QEAAJAEBV-$span@PEAVCManipulation@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@0@@Z @ 0x1802452E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAXP.c)
 *     ??$_Uninitialized_copy_n@PEAPEAVCManipulation@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCManipulation@@@WRL@Microsoft@@PEAPEAVCManipulation@@_KPEAV123@AEAV?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@0@@Z @ 0x180245574 (--$_Uninitialized_copy_n@PEAPEAVCManipulation@@V-$allocator@V-$ComPtr@VCManipulation@@@WRL@Micro.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@0@@Z @ 0x180245658 (--$_Uninitialized_move@PEAV-$ComPtr@VCManipulation@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCMan.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180246258 (--1_Reallocation_guard@-$vector@V-$ComPtr@VCManipulation@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ??4?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180246398 (--4-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCManipulation@@@WRL@Microsoft@@_K1@Z @ 0x18024EFFC (-_Change_array@-$vector@V-$ComPtr@VCManipulation@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCManip.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<CManipulation>>::_Insert_counted_range<CManipulation * *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v8; // r13
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
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rdx
  _QWORD v27[3]; // [rsp+20h] [rbp-68h] BYREF
  char *v28; // [rsp+38h] [rbp-50h]
  char *v29; // [rsp+40h] [rbp-48h]
  char *v30; // [rsp+90h] [rbp+8h]
  unsigned __int64 v31; // [rsp+98h] [rbp+10h]

  if ( a4 )
  {
    v4 = a1[1];
    v6 = a1[2];
    v8 = *a1;
    if ( a4 <= (v6 - v4) >> 3 )
    {
      v23 = 8 * a4;
      v24 = a1[1];
      if ( a4 >= (v4 - a2) >> 3 )
      {
        a1[1] = std::_Uninitialized_move<Microsoft::WRL::ComPtr<CManipulation> *,std::allocator<Microsoft::WRL::ComPtr<CManipulation>>>(
                  a2,
                  v24,
                  v23 + a2);
        v26 = v4;
      }
      else
      {
        v25 = v4 - v23;
        a1[1] = std::_Uninitialized_move<Microsoft::WRL::ComPtr<CManipulation> *,std::allocator<Microsoft::WRL::ComPtr<CManipulation>>>(
                  v4 - v23,
                  v24,
                  a1[1]);
        while ( v25 != a2 )
        {
          v25 -= 8LL;
          Microsoft::WRL::ComPtr<CManipulation>::operator=(v23 + v25, v25);
        }
        v26 = v23 + a2;
      }
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CInteractionTracker2>>>(a2, v26);
      std::_Uninitialized_copy_n<CManipulation * *>(a3, a4, a2);
    }
    else
    {
      v11 = 0x1FFFFFFFFFFFFFFFLL;
      v12 = (v4 - v8) >> 3;
      if ( a4 > 0x1FFFFFFFFFFFFFFFLL - v12 )
        std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
      v13 = v12 + a4;
      v14 = (v6 - v8) >> 3;
      v31 = v12 + a4;
      v15 = v14 >> 1;
      if ( v14 <= 0x1FFFFFFFFFFFFFFFLL - (v14 >> 1) )
      {
        v11 = v15 + v14;
        if ( v15 + v14 < v13 )
          v11 = v13;
      }
      size_of = std::_Get_size_of_n<8>(v11);
      v18 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v17);
      v27[0] = a1;
      v27[2] = v11;
      v19 = (a2 - v8) >> 3;
      v20 = &v18[8 * v19];
      v30 = &v18[8 * v19 + 8 * a4];
      v29 = v30;
      std::_Uninitialized_copy_n<CManipulation * *>(a3, a4, v20);
      v28 = v20;
      if ( a4 == 1 && a2 == v4 )
      {
        v21 = v18;
        v22 = v8;
      }
      else
      {
        std::_Uninitialized_move<Microsoft::WRL::ComPtr<CManipulation> *,std::allocator<Microsoft::WRL::ComPtr<CManipulation>>>(
          v8,
          a2,
          v18);
        v21 = v30;
        v22 = a2;
        v28 = v18;
      }
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<CManipulation> *,std::allocator<Microsoft::WRL::ComPtr<CManipulation>>>(
        v22,
        v4,
        v21);
      v27[1] = 0LL;
      std::vector<Microsoft::WRL::ComPtr<CManipulation>>::_Change_array(a1, v18, v31, v11);
      std::vector<Microsoft::WRL::ComPtr<CManipulation>>::_Reallocation_guard::~_Reallocation_guard(v27);
    }
  }
}
