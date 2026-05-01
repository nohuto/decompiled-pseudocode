/*
 * XREFs of _lambda_f2ca46843af7fe20e5ddf713755dabab_::operator() @ 0x180539620
 * Callers:
 *     LambdaCustomPaintProc__lambda_f2ca46843af7fe20e5ddf713755dabab__HDC_____ @ 0x180537AD0 (LambdaCustomPaintProc__lambda_f2ca46843af7fe20e5ddf713755dabab__HDC_____.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x180214EC4 (-SelectObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_resu.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802387F8 (--1-$unique_storage@U-$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1-close@12@SAX0@ZU-$integ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180295E10 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18052D478 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18052E6F4 (--1-$test_data_control@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18052E72C (--1-$test_watcher@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 */

__int64 __fastcall lambda_f2ca46843af7fe20e5ddf713755dabab_::operator()(
        __int64 a1,
        HDC a2,
        volatile signed __int32 *a3)
{
  HDC CompatibleDC; // rax
  HDC hdcSrc; // rbx
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rax
  int v10; // r14d
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rax
  int v13; // r14d
  volatile signed __int32 *v14; // rdi
  int *v15; // rax
  int v16; // r14d
  volatile signed __int32 *v17; // rdi
  int *v18; // rax
  int v19; // r14d
  __int64 v20; // rax
  volatile signed __int32 *v21; // rdi
  int v22; // r14d
  __int64 v23; // rax
  volatile signed __int32 *v24; // rdi
  int v25; // esi
  volatile signed __int32 *v26; // rdi
  volatile signed __int32 *v27; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int32 *v28; // [rsp+70h] [rbp-21h] BYREF
  volatile signed __int32 *v29; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v30; // [rsp+80h] [rbp-11h] BYREF
  volatile signed __int32 *v31; // [rsp+88h] [rbp-9h] BYREF
  _BYTE v32[48]; // [rsp+90h] [rbp-1h] BYREF
  volatile signed __int32 *v33; // [rsp+C0h] [rbp+2Fh]
  HGDIOBJ v34[2]; // [rsp+C8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  volatile signed __int32 *v36; // [rsp+108h] [rbp+77h] BYREF
  volatile signed __int32 *v37; // [rsp+110h] [rbp+7Fh] BYREF

  v36 = a3;
  CompatibleDC = CreateCompatibleDC(a2);
  hdcSrc = CompatibleDC;
  if ( CompatibleDC )
  {
    wil::SelectObject(v34, CompatibleDC, **(void ***)a1);
    SetStretchBltMode(a2, 3);
    if ( !StretchBlt(
            a2,
            *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL),
            **(_DWORD **)(a1 + 16),
            **(_DWORD **)(a1 + 24),
            hdcSrc,
            0,
            0,
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL),
            0xCC0020u) )
    {
      tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>>((struct wil::details::IFailureCallback *)v32);
      if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v33 + 2)) )
      {
        v8 = v33;
        v9 = *(_QWORD *)(a1 + 32);
        v36 = v33;
        v10 = *(_DWORD *)(v9 + 4);
        if ( v33 )
          _InterlockedIncrement(v33 + 86);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v8 + 2));
        *((_DWORD *)v8 + 81) = v10;
        tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v36);
        v11 = v33;
        v12 = *(_QWORD *)(a1 + 32);
        v37 = v33;
        v13 = *(_DWORD *)(v12 + 8);
        if ( v33 )
          _InterlockedIncrement(v33 + 86);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v11 + 2));
        *((_DWORD *)v11 + 82) = v13;
        tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v37);
        v14 = v33;
        v15 = *(int **)(a1 + 16);
        v27 = v33;
        v16 = *v15;
        if ( v33 )
          _InterlockedIncrement(v33 + 86);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v14 + 2));
        *((_DWORD *)v14 + 83) = v16;
        tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v27);
        v17 = v33;
        v18 = *(int **)(a1 + 24);
        v28 = v33;
        v19 = *v18;
        if ( v33 )
          _InterlockedIncrement(v33 + 86);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v17 + 2));
        *((_DWORD *)v17 + 84) = v19;
        tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v28);
        v20 = *(_QWORD *)(a1 + 40);
        v21 = v33;
        v29 = v33;
        v22 = *(_DWORD *)(v20 + 192) - *(_DWORD *)(v20 + 184);
        if ( v33 )
          _InterlockedIncrement(v33 + 86);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v21 + 2));
        *((_DWORD *)v21 + 79) = v22;
        tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v29);
        v23 = *(_QWORD *)(a1 + 40);
        v24 = v33;
        v30 = v33;
        v25 = *(_DWORD *)(v23 + 196) - *(_DWORD *)(v23 + 188);
        if ( v33 )
          _InterlockedIncrement(v33 + 86);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v24 + 2));
        *((_DWORD *)v24 + 80) = v25;
        tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v30);
        v26 = v33;
        v31 = v33;
        if ( v33 )
          _InterlockedIncrement(v33 + 86);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v26 + 2));
        *((_BYTE *)v26 + 274) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v31);
        tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v33 + 2));
      }
      tip2::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((__int64)v32);
    }
    __1__unique_storage_U__resource_policy_PEAXP6AXUselect_result_wil____E_1_close_12_SAX0_ZU__integral_constant__K_0A__wistd__U12_PEAX_0A___T_details_wil___details_wil__QEAA_XZ((__int64)v34);
    DeleteDC(hdcSrc);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49B,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
