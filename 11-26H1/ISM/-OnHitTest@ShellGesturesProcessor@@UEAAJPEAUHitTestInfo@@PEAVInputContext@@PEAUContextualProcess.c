/*
 * XREFs of ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180085720
 * Callers:
 *     <none>
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18002752C (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x18002E18C (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180037540 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x180073418 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetAttachedObject@UIShellGesturesClientProxy@@VShellGesturesClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@XZ @ 0x18009283C (--$GetAttachedObject@UIShellGesturesClientProxy@@VShellGesturesClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x180095760 (-TraceClients@ShellGesturesProcessor@@CAXXZ.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F4C34 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ??$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x18015C1C4 (--$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ??$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x18015C20C (--$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x18015C2A4 (--$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ??0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z @ 0x18015C550 (--0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z.c)
 *     _lambda_c192c8e12fd8d97ede3f075e8e800885_::operator() @ 0x18015C720 (_lambda_c192c8e12fd8d97ede3f075e8e800885_--operator().c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ClickToDoPenEdgy@@@details@wil@@QEAA_NXZ @ 0x18015DD14 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ClickToDoPenEdgy@@@details@wil@@Q.c)
 *     ?HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@_NK@Z @ 0x18015E144 (-HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@_NK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall ShellGesturesProcessor::OnHitTest(
        ShellGesturesProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  struct HitTestInfo *v6; // r12
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rcx
  const char *v12; // r9
  char **v13; // rsi
  _OWORD *v14; // r8
  UINT v15; // edx
  UINT v16; // ecx
  char *v17; // r13
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  char *v21; // r14
  char *v22; // rcx
  char *v23; // rbx
  _QWORD *v24; // rax
  char *v25; // rcx
  char *v26; // r13
  POINT v27; // rbx
  __int64 *v28; // rax
  int v29; // r15d
  __int64 *v30; // rdi
  int v31; // r15d
  char *v32; // r13
  unsigned __int64 v33; // rsi
  size_t v34; // rsi
  __int64 *v35; // r12
  void *v36; // rax
  __int64 v37; // r15
  __int64 v38; // rsi
  __int64 *i; // r14
  void (__fastcall ***v40)(_QWORD); // rcx
  bool v41; // zf
  bool v42; // zf
  __int64 *v43; // rsi
  __int64 v44; // rcx
  const struct std::nothrow_t *v45; // r13
  char *v46; // rax
  __int64 *v47; // r15
  unsigned int v48; // esi
  __int64 v49; // rcx
  struct Microsoft::Bamo::BaseBamoConnection *v50; // rdx
  __int64 v51; // rsi
  int v52; // eax
  __int64 v53; // rcx
  signed __int32 v54; // edx
  bool v55; // sf
  __int64 v56; // rsi
  int v57; // eax
  __int64 v58; // rcx
  signed __int32 v59; // edx
  const char *v60; // r9
  __int128 v61; // xmm6
  __int64 v62; // rdx
  void *v63; // rax
  unsigned __int64 v64; // rdi
  __int64 v65; // rsi
  __int64 v66; // rbx
  __int64 v67; // rdx
  _DWORD *v68; // rcx
  _DWORD *v69; // rdx
  __int64 v70; // rcx
  char v71; // al
  __int64 *v72; // rcx
  __int64 v73; // rbx
  __int64 v74; // rax
  __int64 v75; // r15
  __int64 v76; // r12
  __int64 v77; // rbx
  __int64 v78; // r14
  int (__fastcall ***v79)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v80)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v81; // rbx
  struct HitTestInfo *v82; // rdi
  __int64 v83; // rax
  _QWORD *v84; // rbx
  __int64 v85; // rcx
  _QWORD *v86; // rdi
  _QWORD *v87; // r14
  __int64 v88; // r8
  _QWORD *v89; // rsi
  __int64 v90; // rcx
  __int64 v91; // rdx
  volatile signed __int32 *v92; // rbx
  volatile signed __int32 *v93; // rcx
  _QWORD *v94; // rsi
  volatile signed __int32 *v95; // rdx
  volatile signed __int32 *v96; // rcx
  const char *Reserved; // [rsp+20h] [rbp-E0h]
  char v99; // [rsp+30h] [rbp-D0h]
  int v100; // [rsp+34h] [rbp-CCh]
  __int64 v101; // [rsp+38h] [rbp-C8h] BYREF
  char *v102; // [rsp+40h] [rbp-C0h]
  _QWORD *v103; // [rsp+48h] [rbp-B8h] BYREF
  char *pvParam; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v105; // [rsp+58h] [rbp-A8h]
  struct HitTestInfo *v106; // [rsp+60h] [rbp-A0h]
  char *v107; // [rsp+68h] [rbp-98h]
  struct ContextualProcessorInitialState *v108; // [rsp+70h] [rbp-90h]
  struct InputContext *v109; // [rsp+78h] [rbp-88h]
  int v110; // [rsp+80h] [rbp-80h]
  __int128 v111; // [rsp+88h] [rbp-78h]
  char *v112; // [rsp+98h] [rbp-68h]
  __int128 v113; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v114; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v115[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v116; // [rsp+E0h] [rbp-20h]
  _OWORD v117[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v118; // [rsp+120h] [rbp+20h]
  int v119; // [rsp+130h] [rbp+30h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v108 = a4;
  v109 = a3;
  v6 = a2;
  v106 = a2;
  LODWORD(v101) = 0;
  *(_DWORD *)a4 = 0;
  v8 = 0;
  v100 = 0;
  v9 = *(_DWORD *)a2;
  v10 = *(_DWORD *)a2 & 0x80;
  if ( (*(_DWORD *)a2 & 8) == 0 || v10 )
  {
    if ( (v9 & 0x1000000) != 0 )
    {
      v8 = 0x1000000;
    }
    else
    {
      if ( (v9 & 0x10) == 0 )
        goto LABEL_10;
      if ( !v10 )
        v8 = 16;
    }
  }
  else
  {
    v8 = 8;
  }
  v100 = v8;
LABEL_10:
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ClickToDoPenEdgy>::__private_IsEnabled(
                           &`wil::Feature<__WilFeatureTraits_Feature_ClickToDoPenEdgy>::GetImpl'::`2'::impl,
                           16LL)
    && v8 == 16 )
  {
    return 0LL;
  }
  v99 = 1;
  memset(v117, 0, sizeof(v117));
  v118 = 0LL;
  v119 = 0;
  memset(v115, 0, sizeof(v115));
  v116 = 0LL;
  if ( v8 == 0x1000000 )
  {
    v13 = (char **)((char *)a4 + 8);
    if ( *((_QWORD *)a4 + 1) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x12D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\process"
                      "or\\shellgesturesprocessor.cpp",
        v12);
    ShellGesturesProcessor::TraceClients();
  }
  else
  {
    if ( ((v8 - 8) & 0xFFFFFFF7) != 0 || (*((_BYTE *)v6 + 32) & 4) == 0 )
      return 0LL;
    v13 = (char **)((char *)a4 + 8);
    if ( !*((_QWORD *)a4 + 1) )
    {
      ShellGesturesProcessor::TraceClients();
      if ( v8 == 8 )
      {
        LODWORD(pvParam) = 0;
        if ( !SystemParametersInfoW(0x2030u, 0, &pvParam, 0) || !(_DWORD)pvParam )
          v99 = 0;
        v14 = v117;
        v15 = 68;
        v16 = 146;
      }
      else
      {
        v99 = 0;
        v14 = v115;
        v15 = 40;
        v16 = 148;
      }
      SystemParametersInfoW(v16, v15, v14, 0);
    }
  }
  v17 = *v13;
  if ( *v13 )
  {
    if ( !v17[16] || *((_QWORD *)v17 + 31) )
      goto LABEL_190;
    if ( *((_QWORD *)v17 + 32) )
    {
      v84 = 0LL;
      v105 = 0LL;
      v85 = *(_QWORD *)(*((_QWORD *)a3 + 22) + 104LL);
      v86 = *(_QWORD **)(v85 - 24);
      v87 = *(_QWORD **)(v85 - 16);
      if ( v86 != v87 )
      {
        while ( 1 )
        {
          InputSite::GetAttachedObject<IShellGesturesClientProxy,ShellGesturesClientProxy>(*v86, &v103);
          v89 = v103;
          if ( v103 )
          {
            LOBYTE(v88) = 1;
            if ( (unsigned __int8)ShellGesturesClientProxy::HandlesInput(
                                    v103,
                                    *(unsigned int *)v6,
                                    v88,
                                    *((unsigned int *)v6 + 13)) )
            {
              if ( (unsigned __int8)ShouldSelectClient<ShellGesturesClientProxy>(v89)
                && !(unsigned __int8)lambda_c192c8e12fd8d97ede3f075e8e800885_::operator()(v90, v89, v6) )
              {
                break;
              }
            }
          }
          if ( v89 )
          {
            v103 = 0LL;
            (*(void (__fastcall **)(_QWORD *))(v89[2] + 8LL))(v89 + 2);
          }
          if ( ++v86 == v87 )
            goto LABEL_180;
        }
        (*(void (__fastcall **)(_QWORD *))v89[2])(v89 + 2);
        v84 = v89;
        v105 = v89;
        (*(void (__fastcall **)(_QWORD *))(v89[2] + 8LL))(v89 + 2);
      }
LABEL_180:
      v11 = *((_QWORD *)v17 + 32);
      if ( v84 != (_QWORD *)v11 && v11 )
      {
        *((_QWORD *)v17 + 32) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v11 + 16) + 8LL))(v11 + 16);
      }
      if ( v84 )
        (*(void (__fastcall **)(_QWORD *))(v84[2] + 8LL))(v84 + 2);
    }
    if ( !*((_QWORD *)v17 + 31) )
    {
      v91 = *((_QWORD *)v17 + 33);
      if ( v91 )
      {
        if ( (unsigned __int8)lambda_c192c8e12fd8d97ede3f075e8e800885_::operator()(v11, v91, v6) )
        {
          v11 = *((_QWORD *)v17 + 33);
          if ( v11 )
          {
            *((_QWORD *)v17 + 33) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v11 + 16) + 8LL))(v11 + 16);
          }
        }
      }
    }
    goto LABEL_190;
  }
  v103 = 0LL;
  LODWORD(v101) = 1;
  v18 = (char *)operator new(0x1D0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v21 = v18;
  v22 = v18;
  v105 = (__int64 *)v18;
  v107 = v18;
  v23 = 0LL;
  if ( v18 )
  {
    pvParam = v18;
    memset_0(v18, 0, 0x1D0uLL);
    *((_DWORD *)v21 + 3) = 1;
    *(_QWORD *)v21 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v21 = &ShellGesturesProcessor::Context::`vftable';
    *((_WORD *)v21 + 8) = 0;
    v21[18] = 0;
    *(_DWORD *)(v21 + 19) = 0;
    v21[23] = 0;
    *((_DWORD *)v21 + 41) = 0;
    *(_OWORD *)(v21 + 184) = 0LL;
    *(_OWORD *)(v21 + 200) = 0LL;
    *(_OWORD *)(v21 + 216) = 0LL;
    *(_OWORD *)(v21 + 232) = 0LL;
    *((_QWORD *)v21 + 3) = 2LL;
    *((_QWORD *)v21 + 4) = 0LL;
    *((_QWORD *)v21 + 5) = 0LL;
    *((_QWORD *)v21 + 6) = 0LL;
    *((_QWORD *)v21 + 7) = 0LL;
    *((_QWORD *)v21 + 8) = 0LL;
    *((_QWORD *)v21 + 9) = 2LL;
    *((_QWORD *)v21 + 10) = 0LL;
    *((_QWORD *)v21 + 11) = 0LL;
    *((_QWORD *)v21 + 12) = 0LL;
    *((_QWORD *)v21 + 13) = 0LL;
    *((_QWORD *)v21 + 14) = 0LL;
    *((_QWORD *)v21 + 15) = 0LL;
    *((_QWORD *)v21 + 16) = 0LL;
    *((_QWORD *)v21 + 17) = 0LL;
    *((_QWORD *)v21 + 18) = 0LL;
    *((_QWORD *)v21 + 19) = 0LL;
    v102 = v21 + 160;
    *((_DWORD *)v21 + 40) = 0;
    *((_QWORD *)v21 + 21) = 0LL;
    *((_QWORD *)v21 + 22) = 0LL;
    v24 = operator new(0x38uLL);
    *v24 = v24;
    v24[1] = v24;
    *((_QWORD *)v21 + 21) = v24;
    *((_QWORD *)v21 + 23) = 0LL;
    *((_QWORD *)v21 + 24) = 0LL;
    *((_QWORD *)v21 + 25) = 0LL;
    *((_QWORD *)v21 + 26) = 7LL;
    *((_QWORD *)v21 + 27) = 8LL;
    *((_DWORD *)v21 + 40) = 1065353216;
    std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
      (unsigned __int64 **)v21 + 23,
      0x10uLL,
      *((_QWORD *)v21 + 21));
    QpcTimeConverter::QpcTimeConverter((QpcTimeConverter *)(v21 + 224));
    v21[240] = 0;
    *((_QWORD *)v21 + 31) = 0LL;
    *((_QWORD *)v21 + 32) = 0LL;
    *((_QWORD *)v21 + 33) = 0LL;
    v21[416] = 0;
    v21[456] = 0;
    v22 = 0LL;
    v23 = v21;
    v8 = v100;
  }
  if ( v22 )
    operator delete(v22, (const struct std::nothrow_t *)1);
  v103 = 0LL;
  v25 = *v13;
  *v13 = v23;
  if ( v25 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v25 + 16LL))(v25);
  v26 = *v13;
  v107 = *v13;
  if ( v8 == 8 )
    v26[240] = v119 != 0;
  v114 = 0LL;
  v27 = *(POINT *)((char *)v6 + 44);
  v28 = (__int64 *)*((_QWORD *)this + 5);
  v105 = v28;
  v29 = 0;
  v30 = (__int64 *)*v28;
LABEL_37:
  v11 = 0x7FFFFFFFFFFFFFFLL;
  LODWORD(v102) = v29;
  if ( v30 != v28 )
  {
    v31 = *((_DWORD *)v30 + 4);
    LODWORD(v101) = v31;
    v110 = v31;
    v111 = 0LL;
    v32 = 0LL;
    v112 = 0LL;
    v33 = (v30[4] - v30[3]) >> 5;
    if ( v33 )
    {
      if ( v33 > 0x7FFFFFFFFFFFFFFLL )
        std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
      v34 = 32 * v33;
      if ( v34 )
      {
        if ( v34 < 0x1000 )
        {
          v35 = (__int64 *)operator new(v34);
        }
        else
        {
          if ( v34 + 39 < v34 )
            std::_Throw_bad_array_new_length();
          v36 = operator new(v34 + 39);
          if ( !v36 )
            goto LABEL_104;
          v35 = (__int64 *)(((unsigned __int64)v36 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *(v35 - 1) = (__int64)v36;
        }
      }
      else
      {
        v35 = 0LL;
      }
      *(_QWORD *)&v111 = v35;
      v32 = (char *)&v35[v34 / 8];
      v112 = (char *)&v35[v34 / 8];
      v37 = v30[4];
      v38 = v30[3];
      for ( i = v35; v38 != v37; v38 += 32LL )
      {
        *i = *(_QWORD *)v38;
        *((_DWORD *)i + 2) = *(_DWORD *)(v38 + 8);
        v40 = *(void (__fastcall ****)(_QWORD))(v38 + 16);
        i[2] = (__int64)v40;
        if ( v40 )
          (**v40)(v40);
        *((_BYTE *)i + 24) = *(_BYTE *)(v38 + 24);
        i += 4;
      }
      *((_QWORD *)&v111 + 1) = i;
      v31 = v101;
    }
    else
    {
      i = (__int64 *)*((_QWORD *)&v111 + 1);
      v35 = (__int64 *)v111;
    }
    if ( v100 == 8 )
    {
      if ( v31 == 1 )
      {
        v41 = DWORD2(v118) == 0;
        goto LABEL_76;
      }
      if ( v31 != 4 )
        goto LABEL_77;
      v42 = HIDWORD(v118) == 0;
    }
    else
    {
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ClickToDoPenEdgy>::__private_IsEnabled(
                               &`wil::Feature<__WilFeatureTraits_Feature_ClickToDoPenEdgy>::GetImpl'::`2'::impl,
                               v19)
        || v100 != 16 )
      {
LABEL_59:
        v29 = (int)v102;
        goto LABEL_60;
      }
      if ( v31 != 1 )
      {
        if ( v31 != 4 )
          goto LABEL_59;
        v41 = HIDWORD(v116) == 0;
LABEL_76:
        if ( v41 )
          goto LABEL_59;
LABEL_77:
        v47 = v35;
        if ( v35 == i )
          goto LABEL_59;
        while ( 1 )
        {
          if ( (unsigned __int8)ShouldSelectClient<DragManagerClientProxy>(v47[2]) )
          {
            v48 = 0;
            v103 = 0LL;
            LODWORD(pvParam) = 0;
            v49 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47[2] + 32) + 24LL) + 32LL);
            if ( *(int *)(v49 + 8) <= 0 )
              v50 = 0LL;
            else
              v50 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v49 + 16);
            Microsoft::Bamo::Lock::Lock((Microsoft::BamoImpl::BamoImplObject **)&v113, v50);
            (*(void (__fastcall **)(__int64, _QWORD **, char **))(*(_QWORD *)(v47[2] + 8) + 88LL))(
              v47[2] + 8,
              &v103,
              &pvParam);
            if ( !(_DWORD)pvParam )
            {
LABEL_85:
              v51 = *(_QWORD *)(v113 + 32);
              --*(_DWORD *)(v51 + 188);
              if ( !BYTE8(v113) )
              {
                if ( BYTE9(v113) )
                {
                  v52 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v51 + 56) + 104LL))(*(_QWORD *)(v51 + 56));
                  if ( v52 < 0 )
                    wil::details::in1diag3::FailFast_Hr(
                      retaddr,
                      (void *)0xA16,
                      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
                      (const char *)(unsigned int)v52,
                      (int)Reserved);
                }
                Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v51);
              }
              v53 = v113;
              if ( (_QWORD)v113 )
              {
                v54 = _InterlockedExchangeAdd((volatile signed __int32 *)(v113 + 8), 0xFFFFFFFF);
                v55 = v54 - 1 < 0;
                v19 = (unsigned int)(v54 - 1);
                if ( v55 )
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    (void *)0x33,
                    (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
                    (const char *)retaddr);
                if ( !(_DWORD)v19 )
                  (*(void (__fastcall **)(__int64, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v53 + 24LL))(
                    v53,
                    v19,
                    v20,
                    retaddr);
              }
              v29 = v101 | (unsigned int)v102;
LABEL_60:
              if ( v35 )
              {
                if ( v35 != i )
                {
                  v43 = v35 + 2;
                  do
                  {
                    v44 = *v43;
                    if ( *v43 )
                    {
                      *v43 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
                    }
                    v43 += 4;
                  }
                  while ( v43 - 2 != i );
                }
                v45 = (const struct std::nothrow_t *)((v32 - (char *)v35) & 0xFFFFFFFFFFFFFFE0uLL);
                v46 = (char *)v35;
                if ( (unsigned __int64)v45 < 0x1000
                  || (v45 = (const struct std::nothrow_t *)((char *)v45 + 39),
                      v35 = (__int64 *)*(v35 - 1),
                      (unsigned __int64)(v46 - (char *)v35 - 8) <= 0x1F) )
                {
                  operator delete(v35, v45);
                  goto LABEL_69;
                }
LABEL_104:
                _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
              }
LABEL_69:
              v30 = (__int64 *)*v30;
              v28 = v105;
              goto LABEL_37;
            }
            while ( !PtInRect((const RECT *)&v103[2 * v48], v27) )
            {
              if ( ++v48 == (_DWORD)pvParam )
                goto LABEL_85;
            }
            v56 = *(_QWORD *)(v113 + 32);
            --*(_DWORD *)(v56 + 188);
            if ( !BYTE8(v113) )
            {
              if ( BYTE9(v113) )
              {
                v57 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v56 + 56) + 104LL))(*(_QWORD *)(v56 + 56));
                if ( v57 < 0 )
                  wil::details::in1diag3::FailFast_Hr(
                    retaddr,
                    (void *)0xA16,
                    (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
                    (const char *)(unsigned int)v57,
                    (int)Reserved);
              }
              Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v56);
            }
            v58 = v113;
            if ( (_QWORD)v113 )
            {
              v59 = _InterlockedExchangeAdd((volatile signed __int32 *)(v113 + 8), 0xFFFFFFFF);
              v55 = v59 - 1 < 0;
              v19 = (unsigned int)(v59 - 1);
              if ( v55 )
                wil::details::in1diag3::_FailFast_Unexpected(
                  retaddr,
                  (void *)0x33,
                  (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
                  (const char *)retaddr);
              if ( !(_DWORD)v19 )
                (*(void (__fastcall **)(__int64, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v58 + 24LL))(
                  v58,
                  v19,
                  v20,
                  retaddr);
            }
          }
          v47 += 4;
          if ( v47 == i )
            goto LABEL_59;
        }
      }
      v42 = (_DWORD)v116 == 0;
    }
    if ( v42 )
      goto LABEL_59;
    goto LABEL_77;
  }
  v6 = v106;
  if ( v29 )
  {
    v113 = 0LL;
    if ( !(unsigned int)GetPointerDeviceRects(*((unsigned int *)v106 + 1), &v114, &v113) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x191,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\process"
                      "or\\shellgesturesprocessor.cpp",
        v60);
    v17 = v107;
    v107[416] = 0;
    v61 = v114;
    *((_QWORD *)v17 + 34) = 0LL;
    *((_DWORD *)v17 + 70) = 0;
    *(_QWORD *)(v17 + 284) = 0LL;
    *(_QWORD *)(v17 + 292) = 0LL;
    *((_QWORD *)v17 + 38) = 0LL;
    *((_QWORD *)v17 + 39) = 0LL;
    *((_QWORD *)v17 + 40) = 0LL;
    *((_QWORD *)v17 + 41) = 0LL;
    QpcTimeConverter::QpcTimeConverter((QpcTimeConverter *)(v17 + 336));
    *((_OWORD *)v17 + 22) = v61;
    v17[392] = 0;
    *((_DWORD *)v17 + 100) = v29;
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ClickToDoPenEdgy>::__private_IsEnabled(
                             &`wil::Feature<__WilFeatureTraits_Feature_ClickToDoPenEdgy>::GetImpl'::`2'::impl,
                             v62)
      || v100 == 8 )
    {
      v63 = &ShellEdgyRecognizer::s_edgyParametersTouch;
    }
    else
    {
      if ( v100 != 16 )
        wil::details::in1diag3::FailFast_UnexpectedMsg(
          retaddr,
          (void *)0x4E,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\proce"
                        "ssor\\shelledgyrecognizer.cpp",
          "Unexpected input type",
          Reserved);
      v63 = &ShellEdgyRecognizer::s_edgyParametersPen;
    }
    *((_QWORD *)v17 + 51) = v63;
    if ( !*((_DWORD *)v17 + 100) )
      *((_DWORD *)v17 + 68) = 1;
    v17[416] = 1;
  }
  else
  {
    v17 = v107;
  }
  if ( v99 )
  {
    v101 = 0LL;
    v103 = 0LL;
    v64 = qword_180253FE8;
    v65 = qword_180253FE8 + qword_180253FF0;
    while ( v64 != v65 )
    {
      v66 = *(_QWORD *)(*((_QWORD *)Src + ((qword_180253FE0 - 1) & (v64 >> 1))) + 8 * (v64 & 1));
      v67 = *(_QWORD *)(v66 + 160);
      if ( v67 )
      {
        v68 = *(_DWORD **)(v67 + 16);
        v69 = *(_DWORD **)(v67 + 24);
        if ( v68 == v69 )
        {
LABEL_123:
          LOBYTE(v20) = 1;
          if ( (unsigned __int8)ShellGesturesClientProxy::HandlesInput(
                                  v66,
                                  *(unsigned int *)v6,
                                  v20,
                                  *((unsigned int *)v6 + 13))
            && (unsigned __int8)ShouldSelectClient<ShellGesturesClientProxy>(v66)
            && !(unsigned __int8)lambda_c192c8e12fd8d97ede3f075e8e800885_::operator()(v70, v66, v6) )
          {
            v71 = IsShellClient<ShellGesturesClientProxy>(v66);
            v72 = &v101;
            if ( v71 )
              v72 = (__int64 *)&v103;
            *v72 = v66;
          }
        }
        else
        {
          while ( *v68 )
          {
            v68 += 4;
            if ( v68 == v69 )
              goto LABEL_123;
          }
        }
      }
      ++v64;
    }
    v73 = (__int64)v103;
    if ( v101 )
      v73 = v101;
    if ( *((_QWORD *)v17 + 33) != v73 )
    {
      if ( v73 )
        (**(void (__fastcall ***)(__int64))(v73 + 16))(v73 + 16);
      v74 = *((_QWORD *)v17 + 33);
      *((_QWORD *)v17 + 33) = v73;
      if ( v74 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v74 + 16) + 8LL))(v74 + 16);
    }
    v11 = *(_QWORD *)(*((_QWORD *)v109 + 22) + 104LL);
    v75 = *(_QWORD *)(v11 - 24);
    v76 = *(_QWORD *)(v11 - 16);
    if ( v75 != v76 )
    {
      while ( 1 )
      {
        v11 = 0LL;
        v101 = 0LL;
        v77 = *(_QWORD *)(*(_QWORD *)v75 + 488LL);
        v78 = *(_QWORD *)(*(_QWORD *)v75 + 496LL);
        if ( v77 != v78 )
        {
          while ( 1 )
          {
            v79 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v77 + 8);
            v80 = **v79;
            if ( v11 )
            {
              v101 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            }
            if ( v80(v79, &GUID_974ecfd8_5dae_f205_7c42_b9160ca196d3, &v101) >= 0 )
              break;
            v77 += 16LL;
            if ( v77 == v78 )
              break;
            v11 = v101;
          }
          v11 = v101;
          v17 = v107;
        }
        v81 = v11 - 8;
        if ( !v11 )
          v81 = 0LL;
        v105 = (__int64 *)v81;
        if ( v81 )
        {
          (**(void (__fastcall ***)(__int64))(v81 + 16))(v81 + 16);
          v11 = v101;
        }
        if ( v11 )
        {
          v101 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        if ( v81 )
        {
          v82 = v106;
          LOBYTE(v20) = 1;
          if ( (unsigned __int8)ShellGesturesClientProxy::HandlesInput(
                                  v81,
                                  *(unsigned int *)v106,
                                  v20,
                                  *((unsigned int *)v106 + 13)) )
          {
            if ( (unsigned __int8)ShouldSelectClient<ShellGesturesClientProxy>(v81)
              && !(unsigned __int8)lambda_c192c8e12fd8d97ede3f075e8e800885_::operator()(v11, v81, v82) )
            {
              break;
            }
          }
        }
        if ( v81 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v81 + 16) + 8LL))(v81 + 16);
        v75 += 8LL;
        if ( v75 == v76 )
          goto LABEL_163;
      }
      if ( *((_QWORD *)v17 + 32) != v81 )
      {
        (**(void (__fastcall ***)(__int64))(v81 + 16))(v81 + 16);
        v83 = *((_QWORD *)v17 + 32);
        *((_QWORD *)v17 + 32) = v81;
        if ( v83 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v83 + 16) + 8LL))(v83 + 16);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v81 + 16) + 8LL))(v81 + 16);
    }
LABEL_163:
    if ( *((_QWORD *)v17 + 33) || *((_QWORD *)v17 + 32) )
    {
      v17[16] = 1;
      v6 = v106;
    }
    else
    {
      v17[16] = 0;
      v6 = v106;
    }
  }
LABEL_190:
  if ( ((v100 - 8) & 0xFFFFFFF7) != 0 )
  {
    *(_DWORD *)v108 = 2;
  }
  else
  {
    ShellGesturesProcessor::TryFindResumableAnimationTarget(
      (_QWORD *)v11,
      &v113,
      (unsigned int *)v6,
      *((_QWORD *)v109 + 22));
    v92 = (volatile signed __int32 *)*((_QWORD *)&v113 + 1);
    if ( *((_QWORD *)&v113 + 1) && *(_DWORD *)(*((_QWORD *)&v113 + 1) + 8LL) )
    {
      if ( v17[456] )
      {
        v93 = (volatile signed __int32 *)*((_QWORD *)v17 + 56);
        if ( v93 && _InterlockedExchangeAdd(v93 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v93 + 8LL))(v93);
        v94 = (_QWORD *)*((_QWORD *)v17 + 54);
        if ( v94 )
        {
          if ( v94[4] )
            DestroyInteractionContext();
          operator delete(v94, (const struct std::nothrow_t *)0x38);
        }
        v17[456] = 0;
      }
      ShellGesturesProcessor::HandlerContext::HandlerContext(
        (ShellGesturesProcessor::HandlerContext *)(v17 + 424),
        *((_DWORD *)v6 + 10),
        *(struct tagPOINT *)((char *)v6 + 44),
        0);
      v17[456] = 1;
      v95 = v92;
      v92 = 0LL;
      *((_QWORD *)v17 + 55) = v113;
      v96 = (volatile signed __int32 *)*((_QWORD *)v17 + 56);
      *((_QWORD *)v17 + 56) = v95;
      if ( v96 && _InterlockedExchangeAdd(v96 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v96 + 8LL))(v96);
      *(_DWORD *)v108 = 2;
    }
    else if ( v17[416] || v17[16] )
    {
      *(_DWORD *)v108 = 1;
    }
    if ( v92 && _InterlockedExchangeAdd(v92 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 8LL))(v92);
  }
  return 0LL;
}
