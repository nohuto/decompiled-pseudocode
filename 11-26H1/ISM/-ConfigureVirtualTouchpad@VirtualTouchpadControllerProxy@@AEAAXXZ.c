/*
 * XREFs of ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180137A44
 * Callers:
 *     ?OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180138700 (-OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnPrimaryClickZoneChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1801389C0 (-OnPrimaryClickZoneChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1801389E0 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnSystemContextNotification@VirtualTouchpadControllerProxy@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180138C10 (-OnSystemContextNotification@VirtualTouchpadControllerProxy@@UEAAJPEAV-$variant@Umonostate@std@@.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180052670 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18006ECCC (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006F138 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x180076500 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ @ 0x18007D750 (-GetGesturesEnabled@BamoMagnifierControllerProxy@@UEAA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180098FD8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?value@?$optional@UtagINPUT_TRANSFORM@@@std@@QEGAAAEAUtagINPUT_TRANSFORM@@XZ @ 0x18009970C (-value@-$optional@UtagINPUT_TRANSFORM@@@std@@QEGAAAEAUtagINPUT_TRANSFORM@@XZ.c)
 *     ?GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@@XZ @ 0x1800998D0 (-GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800BBE28 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Erase@PEAVVirtualTouchpadControllerProxy@@@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBQEAVVirtualTouchpadControllerProxy@@@Z @ 0x180137424 (--$_Erase@PEAVVirtualTouchpadControllerProxy@@@-$_Hash@V-$_Umap_traits@PEAVVirtualTouchpadContro.c)
 *     ??$_Try_emplace@PEAVVirtualTouchpadControllerProxy@@$$V@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@PEAX@std@@_N@1@$$QEAPEAVVirtualTouchpadControllerProxy@@@Z @ 0x180137538 (--$_Try_emplace@PEAVVirtualTouchpadControllerProxy@@$$V@-$_Hash@V-$_Umap_traits@PEAVVirtualTouch.c)
 *     std::find_if_gsl::details::span_iterator_INPUT_SPACE_REGION___lambda_5a6d5614be38f35cab22f0a533907b2a___ @ 0x1801376B4 (std--find_if_gsl--details--span_iterator_INPUT_SPACE_REGION___lambda_5a6d5614be38f35cab22f0a5339.c)
 *     ?GetPrimaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ @ 0x1801380B0 (-GetPrimaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Interna.c)
 *     ?GetSecondaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ @ 0x1801380E0 (-GetSecondaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Inter.c)
 *     ?GetTypingDefensesEnabled@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ @ 0x180138110 (-GetTypingDefensesEnabled@BamoVirtualTouchpadControllerProxy@@UEAA_NXZ.c)
 *     ?ScreenRectToRelative@CInputTransform@@SA?AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x180139340 (-ScreenRectToRelative@CInputTransform@@SA-AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?VirtualTouchpadController@VirtualTouchpad@InputTraceLogging@@SAXUVPTP_ID@@AEBUtagRECT@@AEBUtagVIRTUAL_PTP_CONFIG@@AEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@AEBUPhysicalClickZone@789Windows@@4@Z @ 0x18013A218 (-VirtualTouchpadController@VirtualTouchpad@InputTraceLogging@@SAXUVPTP_ID@@AEBUtagRECT@@AEBUtagV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad(VirtualTouchpadControllerProxy *this)
{
  BamoAnimationTargetClientProxy *v2; // r12
  int *v3; // rsi
  __m128i v4; // xmm7
  int v5; // r15d
  int v6; // eax
  int v7; // eax
  const char *v8; // r9
  _BYTE *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r14
  float v15; // xmm6_4
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  float v19; // xmm7_4
  int v20; // r8d
  float v21; // xmm8_4
  int v22; // edx
  int v23; // ecx
  float v24; // xmm2_4
  float v25; // xmm1_4
  int v26; // edx
  float v27; // xmm3_4
  __m128d v28; // xmm3
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  const struct Windows::UI::Internal::Input::PhysicalClickZone *PrimaryClickZone; // rax
  __m128 v34; // xmm2
  float v35; // ecx
  float v36; // xmm0_4
  float v37; // xmm1_4
  const struct Windows::UI::Internal::Input::PhysicalClickZone *SecondaryClickZone; // rax
  __m128 v39; // xmm2
  float v40; // ecx
  float v41; // xmm0_4
  float v42; // xmm1_4
  unsigned int *v43; // rbx
  const char *v44; // r9
  unsigned __int8 *v45; // rcx
  int v46; // r14d
  const struct Windows::UI::Internal::Input::PhysicalClickZone *v47; // r14
  const struct Windows::UI::Internal::Input::PhysicalClickZone *v48; // r15
  const struct Windows::UI::Internal::Input::GestureAnimationData *Data; // rax
  int v50; // [rsp+28h] [rbp-E0h]
  _QWORD v51[3]; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v52; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v54; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v55; // [rsp+70h] [rbp-98h]
  __m128i *v56; // [rsp+78h] [rbp-90h]
  _BYTE v57[24]; // [rsp+80h] [rbp-88h] BYREF
  char v58; // [rsp+98h] [rbp-70h]
  _OWORD v59[9]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v60; // [rsp+138h] [rbp+30h]
  __m128 v61; // [rsp+148h] [rbp+40h] BYREF
  __int64 v62; // [rsp+158h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v2 = (VirtualTouchpadControllerProxy *)((char *)this + 8);
  if ( !BamoMagnifierControllerProxy::GetGesturesEnabled((VirtualTouchpadControllerProxy *)((char *)this + 8))
    || !*((_BYTE *)this + 208) )
  {
    return;
  }
  memset_0(v59, 0, 0x98uLL);
  v3 = (int *)((char *)this + 252);
  *(_OWORD *)((char *)this + 252) = v59[0];
  *(_OWORD *)((char *)this + 268) = v59[1];
  *(_OWORD *)((char *)this + 284) = v59[2];
  *(_OWORD *)((char *)this + 300) = v59[3];
  *(_OWORD *)((char *)this + 316) = v59[4];
  *(_OWORD *)((char *)this + 332) = v59[5];
  *(_OWORD *)((char *)this + 348) = v59[6];
  *(_OWORD *)((char *)this + 364) = v59[7];
  *(_OWORD *)((char *)this + 380) = v59[8];
  *(_QWORD *)((char *)this + 396) = v60;
  v4 = 0LL;
  v5 = 1;
  if ( !*((_BYTE *)this + 228) || (v6 = 1, !*((_BYTE *)this + 240)) )
    v6 = 0;
  *v3 = v6;
  if ( v6 )
  {
    v58 = 0;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 51) + 40LL))(*((_QWORD *)this + 51), v57);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontrol"
             "ler\\server\\virtualtouchpadcontrollerproxy.cpp",
        (const char *)(unsigned int)v7,
        v50);
    v9 = v57;
    if ( v58 != 1 )
      v9 = 0LL;
    if ( !v9 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xD7,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontrol"
             "ler\\server\\virtualtouchpadcontrollerproxy.cpp",
        v8);
    if ( *(_DWORD *)v9 != 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xD8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontrol"
             "ler\\server\\virtualtouchpadcontrollerproxy.cpp",
        v8);
    v10 = *((_QWORD *)v9 + 1);
    v51[1] = *(_QWORD *)((char *)this + 212);
    v11 = *(_QWORD *)(v10 + 16);
    gsl::details::extent_type<-1>::extent_type<-1>(&v61, *(unsigned int *)(v10 + 12));
    v13 = v61.m128_u64[0];
    if ( v61.m128_u64[0] != -1LL && (v11 || !v61.m128_u64[0]) )
    {
      v14 = v11 + 200 * v61.m128_u64[0];
      v52.m128i_i64[0] = v11;
      v52.m128i_i64[1] = v14;
      v53 = v14;
      v61.m128_u64[0] = v11;
      v61.m128_u64[1] = v11 + 200 * v13;
      v62 = v11;
      std::find_if_gsl::details::span_iterator_INPUT_SPACE_REGION___lambda_5a6d5614be38f35cab22f0a533907b2a___(
        (unsigned __int64)&v54,
        (__m128i *)&v61,
        &v52,
        (POINT *)&v51[1]);
      if ( v54 == v11 )
      {
        v12 = v55;
        if ( v55 == v14 )
        {
          if ( v56 == (__m128i *)v14 )
          {
            v5 = 0;
LABEL_27:
            *v3 = v5;
            std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)v57);
            goto LABEL_28;
          }
          if ( v54 && v55 && v54 <= (unsigned __int64)v56 && (unsigned __int64)v56 < v55 )
          {
            v4 = *v56;
            goto LABEL_27;
          }
        }
      }
    }
    _o_terminate(v12);
LABEL_32:
    v15 = *((double *)this + 29);
    v16 = std::optional<tagINPUT_TRANSFORM>::value((__int64)this + 144);
    v17 = _mm_cvtsi128_si32(v4);
    v61.m128_f32[0] = (float)v17;
    v18 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 4));
    v61.m128_f32[1] = (float)v18;
    v61.m128_f32[2] = (float)(_mm_cvtsi128_si32(_mm_srli_si128(v4, 8)) - v17);
    v61.m128_f32[3] = (float)(_mm_cvtsi128_si32(_mm_srli_si128(v4, 12)) - v18);
    *(__m128 *)&v51[1] = v61;
    CInputTransform::ScreenRectToRelative(&v61, &v51[1], v16);
    *((_OWORD *)this + 17) = *((_OWORD *)this + 9);
    *((_OWORD *)this + 18) = *((_OWORD *)this + 10);
    *((_OWORD *)this + 19) = *((_OWORD *)this + 11);
    *((_OWORD *)this + 20) = *((_OWORD *)this + 12);
    v19 = v61.m128_f32[1];
    v20 = (int)v61.m128_f32[1];
    v21 = v61.m128_f32[0];
    v22 = (int)(float)(v61.m128_f32[2] + v61.m128_f32[0]);
    v23 = (int)(float)(v61.m128_f32[3] + v61.m128_f32[1]);
    *((_DWORD *)this + 64) = (int)v61.m128_f32[0];
    *((_DWORD *)this + 65) = v20;
    *((_DWORD *)this + 66) = v22;
    *((_DWORD *)this + 67) = v23;
    v24 = (float)(v61.m128_f32[0] - v21) * v15;
    v25 = (float)(_mm_shuffle_ps(v61, v61, 85).m128_f32[0] - v19) * v15;
    v26 = (int)(float)((float)(_mm_shuffle_ps(v61, v61, 170).m128_f32[0] * v15) + v24);
    v27 = (float)(_mm_shuffle_ps(v61, v61, 255).m128_f32[0] * v15) + v25;
    *((_DWORD *)this + 84) = (int)v24;
    *((_DWORD *)this + 85) = (int)v25;
    *((_DWORD *)this + 86) = v26;
    *((_DWORD *)this + 87) = (int)v27;
    v28 = *(__m128d *)BamoAnimationTargetClientProxy::GetData(v2);
    v29 = (float)(0.0 - v21) * v15;
    v30 = (float)(0.0 - v19) * v15;
    *((_DWORD *)this + 88) = (int)v29;
    *((_DWORD *)this + 89) = (int)v30;
    v31 = v28.m128d_f64[0];
    *((_DWORD *)this + 90) = (int)(float)((float)(v31 * v15) + v29);
    v32 = _mm_unpackhi_pd(v28, v28).m128d_f64[0];
    *((_DWORD *)this + 91) = (int)(float)((float)(v32 * v15) + v30);
    *((_DWORD *)this + 92) = BamoVirtualTouchpadControllerProxy::GetTypingDefensesEnabled(v2);
    PrimaryClickZone = BamoVirtualTouchpadControllerProxy::GetPrimaryClickZone(v2);
    v34 = *(__m128 *)PrimaryClickZone;
    v35 = *((float *)PrimaryClickZone + 4);
    if ( (unsigned __int8)_mm_cvtsi128_si32(*(__m128i *)PrimaryClickZone) )
    {
      v36 = (float)(_mm_shuffle_ps(v34, v34, 85).m128_f32[0] - v21) * v15;
      v37 = (float)(_mm_shuffle_ps(v34, v34, 170).m128_f32[0] - v19) * v15;
      *((_DWORD *)this + 93) = (int)v36;
      *((_DWORD *)this + 94) = (int)v37;
      *((_DWORD *)this + 95) = (int)(float)((float)(_mm_shuffle_ps(v34, v34, 255).m128_f32[0] * v15) + v36);
      *((_DWORD *)this + 96) = (int)(float)((float)(v35 * v15) + v37);
    }
    SecondaryClickZone = BamoVirtualTouchpadControllerProxy::GetSecondaryClickZone(v2);
    v39 = *(__m128 *)SecondaryClickZone;
    v40 = *((float *)SecondaryClickZone + 4);
    if ( (unsigned __int8)_mm_cvtsi128_si32(*(__m128i *)SecondaryClickZone) )
    {
      v41 = (float)(_mm_shuffle_ps(v39, v39, 85).m128_f32[0] - v21) * v15;
      v42 = (float)(_mm_shuffle_ps(v39, v39, 170).m128_f32[0] - v19) * v15;
      *((_DWORD *)this + 97) = (int)v41;
      *((_DWORD *)this + 98) = (int)v42;
      *((_DWORD *)this + 99) = (int)(float)((float)(_mm_shuffle_ps(v39, v39, 255).m128_f32[0] * v15) + v41);
      *((_DWORD *)this + 100) = (int)(float)((float)(v40 * v15) + v42);
    }
    goto LABEL_36;
  }
LABEL_28:
  if ( *v3 )
  {
    if ( !*((_BYTE *)this + 240) )
      std::_Throw_bad_optional_access();
    goto LABEL_32;
  }
LABEL_36:
  v43 = (unsigned int *)((char *)this + 248);
  if ( !(unsigned int)NtMITConfigureVirtualTouchpad((char *)this + 248, (char *)this + 252) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x11A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontrolle"
           "r\\server\\virtualtouchpadcontrollerproxy.cpp",
      v44);
  wil::EnterCriticalSection((struct _RTL_CRITICAL_SECTION **)&v61, &VirtualTouchpadControllerProxy::s_lock);
  v46 = *v43;
  v51[1] = this;
  if ( v46 )
    *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::_Try_emplace<VirtualTouchpadControllerProxy *,>(
                             v45,
                             (__int64)&v52,
                             (unsigned __int8 *)&v51[1])
              + 24LL) = v46;
  else
    std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::_Erase<VirtualTouchpadControllerProxy *>(
      (__int64)v45,
      (unsigned __int8 *)&v51[1]);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&v61);
  v47 = BamoVirtualTouchpadControllerProxy::GetSecondaryClickZone(v2);
  v48 = BamoVirtualTouchpadControllerProxy::GetPrimaryClickZone(v2);
  Data = BamoAnimationTargetClientProxy::GetData(v2);
  if ( *((_BYTE *)this + 228) )
    v61 = *(__m128 *)((char *)this + 212);
  else
    v61 = 0LL;
  InputTraceLogging::VirtualTouchpad::VirtualTouchpadController(*v43, &v61, (char *)this + 252, Data, v48, v47, v51[1]);
}
