/*
 * XREFs of ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x1802B3DF8
 * Callers:
 *     ??$make_shared@VGuidedSnapAssistData@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@AEAH@std@@YA?AV?$shared_ptr@VGuidedSnapAssistData@@@0@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@0@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@0@AEBUCRect@Geometry@@AEAH@Z @ 0x1802B3D2C (--$make_shared@VGuidedSnapAssistData@@AEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V-.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006CF04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ??D?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBAAEBUguid@winrt@@XZ @ 0x1800CBBF4 (--D-$_Deque_unchecked_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@Uguid@winrt@@@std@@@st.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180203058 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?_Tidy@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x1802A7390 (-_Tidy@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USna.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@$$QEAU234567@@Z @ 0x1805BDC8C (--$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@-$vector@USnapAs.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_cda502361e0058b7021093fff9ed1a73___ @ 0x1805BDCD4 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windows--Internal-.c)
 *     ??4?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805BDD70 (--4-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USnapAss.c)
 *     ?erase@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@@2@@Z @ 0x1805BDDC4 (-erase@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USna.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GuidedSnapAssistData::Initialize(__int64 a1, __int64 a2, __int64 a3, int *a4, char a5)
{
  unsigned int v9; // r15d
  __int64 v10; // rsi
  __int64 v11; // rbx
  int *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  _QWORD *v15; // rbx
  __int64 v16; // r9
  LONG bottom; // ebx
  LONG right; // esi
  LONG top; // r15d
  LONG left; // r12d
  __int64 v21; // r10
  int v22; // eax
  int v23; // ecx
  int v24; // r8d
  int v25; // edx
  char v26; // r8
  HWND v27; // rcx
  __int64 i; // r11
  __int64 v29; // r14
  float v30; // xmm1_4
  float v31; // xmm0_4
  __int128 v32; // [rsp+20h] [rbp-91h] BYREF
  __int64 v33; // [rsp+30h] [rbp-81h]
  __int128 v34; // [rsp+40h] [rbp-71h] BYREF
  __int128 v35; // [rsp+50h] [rbp-61h]
  __int128 v36; // [rsp+60h] [rbp-51h] BYREF
  __int128 v37; // [rsp+70h] [rbp-41h]
  __int64 v38; // [rsp+80h] [rbp-31h] BYREF
  _OWORD v39[2]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-1h]
  struct tagRECT pvAttribute; // [rsp+B8h] [rbp+7h] BYREF

  v32 = 0LL;
  v33 = 0LL;
  v9 = 1;
  *(_QWORD *)&v34 = 0LL;
  *((float *)&v34 + 2) = (float)*a4;
  *((float *)&v34 + 3) = (float)a4[1];
  *(float *)&v35 = (float)(a4[2] - *a4);
  *((float *)&v35 + 1) = (float)(a4[3] - a4[1]);
  *((_QWORD *)&v35 + 1) = 0LL;
  v36 = v34;
  v37 = (unsigned __int64)v35;
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
    &v32,
    &v36);
  v10 = *(_QWORD *)(a3 + 24);
  v40 = a3;
  v11 = v10 + *(_QWORD *)(a3 + 32);
  while ( 1 )
  {
    v41 = v10;
    if ( v10 == v11 )
      break;
    v12 = (int *)std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>::operator*(&v40);
    v13 = v9++;
    *(_QWORD *)&v34 = v13;
    *((float *)&v34 + 2) = (float)*v12;
    *((float *)&v34 + 3) = (float)v12[1];
    *(float *)&v35 = (float)(v12[2] - *v12);
    *((float *)&v35 + 1) = (float)(v12[3] - v12[1]);
    *((_QWORD *)&v35 + 1) = 1LL;
    v36 = v34;
    v37 = v35;
    std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
      &v32,
      &v36);
    ++v10;
  }
  v14 = *(_QWORD **)(a2 + 8);
  v15 = *(_QWORD **)a2;
  if ( *(_QWORD **)a2 != v14 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v15 + 56LL))(*v15, &v40);
      *(_QWORD *)&v34 = &v40;
      *((_QWORD *)&v34 + 1) = &a5;
      std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_cda502361e0058b7021093fff9ed1a73___(
        &v38,
        v32,
        *((_QWORD *)&v32 + 1),
        &v34);
      v16 = *((_QWORD *)&v32 + 1);
      if ( v38 == *((_QWORD *)&v32 + 1) )
        goto LABEL_9;
      if ( *(_DWORD *)(v38 + 24) )
        break;
LABEL_10:
      if ( ++v15 == v14 )
        goto LABEL_13;
    }
    if ( v38 != *((_QWORD *)&v32 + 1) )
      std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::erase(&v32, &pvAttribute);
LABEL_9:
    *(_QWORD *)&v36 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 80LL))(*v15);
    *((float *)&v36 + 2) = (float)(int)v40;
    *((float *)&v36 + 3) = (float)SHIDWORD(v40);
    *(float *)&v37 = (float)(v41 - v40);
    *((float *)&v37 + 1) = (float)(HIDWORD(v41) - HIDWORD(v40));
    *((_QWORD *)&v37 + 1) = 2LL;
    v39[0] = v36;
    v39[1] = v37;
    std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
      &v32,
      v39);
    v16 = *((_QWORD *)&v32 + 1);
    goto LABEL_10;
  }
  v16 = *((_QWORD *)&v32 + 1);
LABEL_13:
  pvAttribute = *(struct tagRECT *)a4;
  bottom = pvAttribute.bottom;
  right = pvAttribute.right;
  top = pvAttribute.top;
  left = pvAttribute.left;
  if ( (_QWORD)v32 != v16 )
  {
    v21 = v32 + 12;
    do
    {
      if ( *(_DWORD *)(v21 + 12) != 2 )
      {
        v22 = (int)(float)(*(float *)v21 + *(float *)(v21 + 8));
        v23 = (int)(float)(*(float *)(v21 - 4) + *(float *)(v21 + 4));
        v24 = (int)*(float *)(v21 - 4);
        v25 = (int)*(float *)v21;
        if ( bottom > v22 )
          v22 = bottom;
        bottom = v22;
        if ( right > v23 )
          v23 = right;
        right = v23;
        if ( top < v25 )
          v25 = top;
        top = v25;
        if ( left < v24 )
          v24 = left;
        left = v24;
      }
      v21 += 32LL;
    }
    while ( v21 - 12 != v16 );
  }
  *(_QWORD *)(a1 + 40) = GetForegroundWindow();
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    v26);
  v27 = *(HWND *)(a1 + 40);
  if ( v27 )
  {
    pvAttribute = 0LL;
    if ( DwmGetWindowAttribute(v27, 9u, &pvAttribute, 0x10u) < 0 )
      GetWindowRect(*(HWND *)(a1 + 40), &pvAttribute);
    v29 = *((_QWORD *)&v32 + 1);
    for ( i = v32; i != v29; i += 32LL )
    {
      if ( *(_DWORD *)(i + 24) <= 1u )
      {
        v30 = *(float *)(i + 12);
        v31 = *(float *)(i + 8);
        LODWORD(v40) = (int)v31;
        HIDWORD(v40) = (int)v30;
        LODWORD(v41) = (int)(float)(v31 + *(float *)(i + 16));
        HIDWORD(v41) = (int)(float)(v30 + *(float *)(i + 20));
        if ( Geometry::CRect::Intersects((Geometry::CRect *)&v40, &pvAttribute) )
          break;
      }
    }
    *(_BYTE *)(a1 + 48) = i != v29;
  }
  *(float *)(a1 + 24) = (float)left;
  *(float *)(a1 + 28) = (float)top;
  *(float *)(a1 + 32) = (float)(right - left);
  *(float *)(a1 + 36) = (float)(bottom - top);
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::operator=(a1, &v32);
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Tidy((__int64)&v32);
}
