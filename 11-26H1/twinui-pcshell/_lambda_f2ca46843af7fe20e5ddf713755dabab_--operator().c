/*
 * XREFs of _lambda_f2ca46843af7fe20e5ddf713755dabab_::operator() @ 0x18055D448
 * Callers:
 *     LambdaCustomPaintProc__lambda_f2ca46843af7fe20e5ddf713755dabab__HDC_____ @ 0x18055B7E0 (LambdaCustomPaintProc__lambda_f2ca46843af7fe20e5ddf713755dabab__HDC_____.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x1802074D4 (-SelectObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_resu.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18022A6F8 (--1-$unique_storage@U-$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1-close@12@SAX0@ZU-$integ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180550644 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180551A84 (--1-$test_data_control@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180551ABC (--1-$test_watcher@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 */

__int64 __fastcall lambda_f2ca46843af7fe20e5ddf713755dabab_::operator()(
        __int64 a1,
        HDC a2,
        volatile signed __int32 *a3)
{
  HDC CompatibleDC; // rax
  HDC hdcSrc; // rbx
  volatile signed __int32 *v8; // rsi
  __int64 v9; // rax
  int v10; // r14d
  volatile signed __int32 *v11; // rsi
  __int64 v12; // rax
  int v13; // r14d
  volatile signed __int32 *v14; // rsi
  int *v15; // rax
  int v16; // r14d
  volatile signed __int32 *v17; // rsi
  int *v18; // rax
  int v19; // r14d
  __int64 v20; // rax
  volatile signed __int32 *v21; // rsi
  int v22; // r14d
  __int64 v23; // rax
  volatile signed __int32 *v24; // rdi
  int v25; // esi
  volatile signed __int32 *v26; // rdi
  HGDIOBJ v27[2]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v28[48]; // [rsp+78h] [rbp+7h] BYREF
  volatile signed __int32 *v29; // [rsp+A8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  volatile signed __int32 *v31; // [rsp+E8h] [rbp+77h] BYREF

  v31 = a3;
  CompatibleDC = CreateCompatibleDC(a2);
  hdcSrc = CompatibleDC;
  if ( CompatibleDC )
  {
    wil::SelectObject(v27, CompatibleDC, **(void ***)a1);
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
      tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>>((struct wil::details::IFailureCallback *)v28);
      if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v29 + 2)) )
      {
        v8 = v29;
        v9 = *(_QWORD *)(a1 + 32);
        v31 = v29;
        v10 = *(_DWORD *)(v9 + 4);
        if ( v29 )
          _InterlockedIncrement(v29 + 88);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v8 + 2));
        *((_DWORD *)v8 + 83) = v10;
        tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v31);
        v11 = v29;
        v12 = *(_QWORD *)(a1 + 32);
        v31 = v29;
        v13 = *(_DWORD *)(v12 + 8);
        if ( v29 )
          _InterlockedIncrement(v29 + 88);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v11 + 2));
        *((_DWORD *)v11 + 84) = v13;
        tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v31);
        v14 = v29;
        v15 = *(int **)(a1 + 16);
        v31 = v29;
        v16 = *v15;
        if ( v29 )
          _InterlockedIncrement(v29 + 88);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v14 + 2));
        *((_DWORD *)v14 + 85) = v16;
        tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v31);
        v17 = v29;
        v18 = *(int **)(a1 + 24);
        v31 = v29;
        v19 = *v18;
        if ( v29 )
          _InterlockedIncrement(v29 + 88);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v17 + 2));
        *((_DWORD *)v17 + 86) = v19;
        tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v31);
        v20 = *(_QWORD *)(a1 + 40);
        v21 = v29;
        v31 = v29;
        v22 = *(_DWORD *)(v20 + 192) - *(_DWORD *)(v20 + 184);
        if ( v29 )
          _InterlockedIncrement(v29 + 88);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v21 + 2));
        *((_DWORD *)v21 + 81) = v22;
        tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v31);
        v23 = *(_QWORD *)(a1 + 40);
        v24 = v29;
        v31 = v29;
        v25 = *(_DWORD *)(v23 + 196) - *(_DWORD *)(v23 + 188);
        if ( v29 )
          _InterlockedIncrement(v29 + 88);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v24 + 2));
        *((_DWORD *)v24 + 82) = v25;
        tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v31);
        v26 = v29;
        v31 = v29;
        if ( v29 )
          _InterlockedIncrement(v29 + 88);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v26 + 2));
        *((_BYTE *)v26 + 282) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v31);
        tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v29 + 2));
      }
      tip2::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((__int64)v28);
    }
    __1__unique_storage_U__resource_policy_PEAXP6AXUselect_result_wil____E_1_close_12_SAX0_ZU__integral_constant__K_0A__wistd__U12_PEAX_0A___T_details_wil___details_wil__QEAA_XZ((__int64)v27);
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
