/*
 * XREFs of ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x1802BCABC
 * Callers:
 *     ??$make_shared@VGuidedSnapAssistData@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@AEAH@std@@YA?AV?$shared_ptr@VGuidedSnapAssistData@@@0@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@0@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@0@AEBUCRect@Geometry@@AEAH@Z @ 0x1802BC9F8 (--$make_shared@VGuidedSnapAssistData@@AEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V-.c)
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180210544 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?_Tidy@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x1802C4BE8 (-_Tidy@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USna.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA?A_T$$QEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@Z @ 0x180599964 (--$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@-$vector@USnapAs.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_cda502361e0058b7021093fff9ed1a73___ @ 0x1805999AC (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windo_ea_1805999AC.c)
 *     ??4?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180599A54 (--4-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USnapAss.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GuidedSnapAssistData::Initialize(__int64 a1, __int64 a2, _QWORD *a3, int *a4, char a5)
{
  unsigned int v9; // r15d
  unsigned int v10; // xmm3_4
  unsigned int v11; // xmm2_4
  float v12; // xmm1_4
  __int64 v13; // rbx
  __int64 v14; // r12
  int *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // r15
  _QWORD *v18; // r14
  char *v19; // rdi
  char *v20; // rbx
  int v21; // r14d
  int v22; // r15d
  int v23; // r12d
  int v24; // r13d
  float *v25; // r9
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  int v29; // r8d
  char v30; // dl
  HWND v31; // rcx
  bool v32; // zf
  float *v33; // r11
  float v34; // xmm0_4
  float v35; // xmm1_4
  int v36; // ecx
  __int128 v38; // [rsp+20h] [rbp-81h] BYREF
  __int128 v39; // [rsp+30h] [rbp-71h]
  __int128 v40; // [rsp+40h] [rbp-61h] BYREF
  __int64 v41; // [rsp+50h] [rbp-51h]
  __int128 v42; // [rsp+58h] [rbp-49h] BYREF
  __int128 v43; // [rsp+68h] [rbp-39h]
  _OWORD v44[2]; // [rsp+78h] [rbp-29h] BYREF
  void *pvAttribute[2]; // [rsp+98h] [rbp-9h] BYREF
  int v46; // [rsp+A8h] [rbp+7h] BYREF
  int v47; // [rsp+ACh] [rbp+Bh]
  int v48; // [rsp+B0h] [rbp+Fh]
  int v49; // [rsp+B4h] [rbp+13h]

  v40 = 0LL;
  v41 = 0LL;
  v9 = 1;
  *(_QWORD *)&v38 = 0LL;
  *(float *)&v10 = (float)(a4[3] - a4[1]);
  *(float *)&v11 = (float)(a4[2] - *a4);
  v12 = (float)a4[1];
  *((float *)&v38 + 2) = (float)*a4;
  *((float *)&v38 + 3) = v12;
  v39 = __PAIR64__(v10, v11);
  v42 = v38;
  v43 = __PAIR64__(v10, v11);
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
    &v40,
    &v42);
  v13 = a3[3];
  v14 = v13 + a3[4];
  while ( v13 != v14 )
  {
    v15 = *(int **)(a3[1] + 8 * (v13 & (a3[2] - 1LL)));
    v16 = v9++;
    *(_QWORD *)&v38 = v16;
    *((float *)&v38 + 2) = (float)*v15;
    *((float *)&v38 + 3) = (float)v15[1];
    *(float *)&v39 = (float)(v15[2] - *v15);
    *((float *)&v39 + 1) = (float)(v15[3] - v15[1]);
    *((_QWORD *)&v39 + 1) = 1LL;
    v42 = v38;
    v43 = v39;
    std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
      &v40,
      &v42);
    ++v13;
  }
  v17 = *(_QWORD **)(a2 + 8);
  v18 = *(_QWORD **)a2;
  v19 = (char *)*((_QWORD *)&v40 + 1);
  v20 = (char *)v40;
  while ( v18 != v17 )
  {
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v18 + 56LL))(*v18, &v46);
    *(_QWORD *)&v38 = &v46;
    *((_QWORD *)&v38 + 1) = &a5;
    ((void (__fastcall *)(void **, char *, char *, __int128 *))std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_cda502361e0058b7021093fff9ed1a73___)(
      pvAttribute,
      v20,
      v19,
      &v38);
    if ( pvAttribute[0] != v19 )
    {
      if ( !*((_DWORD *)pvAttribute[0] + 6) )
        goto LABEL_11;
      if ( pvAttribute[0] != v19 )
      {
        memmove_0(pvAttribute[0], (char *)pvAttribute[0] + 32, v19 - ((char *)pvAttribute[0] + 32));
        *((_QWORD *)&v40 + 1) = v19 - 32;
      }
    }
    *(_QWORD *)&v42 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 80LL))(*v18);
    *((float *)&v42 + 2) = (float)v46;
    *((float *)&v42 + 3) = (float)v47;
    *(float *)&v43 = (float)(v48 - v46);
    *((float *)&v43 + 1) = (float)(v49 - v47);
    *((_QWORD *)&v43 + 1) = 2LL;
    v44[0] = v42;
    v44[1] = v43;
    std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
      &v40,
      v44);
    v19 = (char *)*((_QWORD *)&v40 + 1);
    v20 = (char *)v40;
LABEL_11:
    ++v18;
  }
  *(_OWORD *)pvAttribute = *(_OWORD *)a4;
  v21 = HIDWORD(pvAttribute[1]);
  v22 = (int)pvAttribute[1];
  v23 = HIDWORD(pvAttribute[0]);
  v24 = (int)pvAttribute[0];
  if ( v20 != v19 )
  {
    v25 = (float *)(v20 + 12);
    do
    {
      if ( *((_DWORD *)v25 + 3) != 2 )
      {
        v26 = (int)(float)(*v25 + v25[2]);
        v27 = (int)(float)(*(v25 - 1) + v25[1]);
        v28 = (int)*v25;
        v29 = (int)*(v25 - 1);
        if ( v21 > v26 )
          v26 = v21;
        v21 = v26;
        if ( v22 > v27 )
          v27 = v22;
        v22 = v27;
        if ( v23 < v28 )
          v28 = v23;
        v23 = v28;
        if ( v24 < v29 )
          v29 = v24;
        v24 = v29;
      }
      v25 += 8;
    }
    while ( v25 - 3 != (float *)v19 );
  }
  *(_QWORD *)(a1 + 40) = GetForegroundWindow();
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    v30);
  v31 = *(HWND *)(a1 + 40);
  if ( v31 )
  {
    *(_OWORD *)pvAttribute = 0LL;
    if ( DwmGetWindowAttribute(v31, 9u, pvAttribute, 0x10u) < 0 )
      GetWindowRect(*(HWND *)(a1 + 40), (LPRECT)pvAttribute);
    v32 = v20 == v19;
    if ( v20 != v19 )
    {
      v33 = (float *)(v20 + 12);
      do
      {
        if ( *((_DWORD *)v33 + 3) <= 1u )
        {
          v34 = *v33 + v33[2];
          v35 = *(v33 - 1) + v33[1];
          v36 = (int)*v33;
          v46 = (int)*(v33 - 1);
          v47 = v36;
          v48 = (int)v35;
          v49 = (int)v34;
          if ( Geometry::CRect::Intersects((Geometry::CRect *)&v46, (const struct tagRECT *)pvAttribute) )
            break;
        }
        v20 += 32;
        v33 += 8;
      }
      while ( v20 != v19 );
      v32 = v20 == v19;
    }
    *(_BYTE *)(a1 + 48) = !v32;
  }
  *(float *)(a1 + 24) = (float)v24;
  *(float *)(a1 + 28) = (float)v23;
  *(float *)(a1 + 32) = (float)(v22 - v24);
  *(float *)(a1 + 36) = (float)(v21 - v23);
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::operator=(a1, &v40);
  return std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Tidy(&v40);
}
