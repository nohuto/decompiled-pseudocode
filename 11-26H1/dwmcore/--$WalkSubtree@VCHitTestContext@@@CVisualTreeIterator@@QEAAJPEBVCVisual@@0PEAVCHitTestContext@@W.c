/*
 * XREFs of ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x180026DF0
 * Callers:
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x180026CB8 (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?last@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ @ 0x180018840 (-last@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180027C60 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180028970 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@PEBXV?$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAPEAPEBX_K0@Z @ 0x18009FA24 (-reserve_region@-$vector_facade@PEBXV-$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAPEAPEBX.c)
 *     ?pop_back@?$vector_facade@PEBXV?$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@QEAAXXZ @ 0x1800A007C (-pop_back@-$vector_facade@PEBXV-$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@QEAAXXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180260224 (--0CTreeData@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 CVisualTreeIterator::WalkSubtree<CHitTestContext>(__int64 a1, __int64 a2, __int64 a3, CHitTestContext *a4, ...)
{
  CHitTestContext *v4; // r12
  __int64 *Value; // rbx
  __int64 *v8; // r14
  unsigned __int64 v9; // rax
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 *v13; // r13
  __int64 v14; // rbp
  __int64 v15; // r15
  unsigned int v16; // esi
  __int64 v17; // r14
  __int64 v18; // rbx
  char v19; // al
  int **v20; // rdx
  _QWORD *v21; // rax
  unsigned int **v22; // rcx
  int v23; // eax
  __int64 *v24; // rax
  bool v25; // zf
  char v26; // cl
  int v27; // r8d
  __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // rcx
  __m128i v31; // xmm1
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rax
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // r8
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // eax
  unsigned __int64 v45; // r9
  __int64 v46; // r14
  __int64 v47; // r8
  __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  __int64 v50; // r10
  __int64 v51; // rcx
  __int64 v52; // rcx
  int *v53; // r8
  __int64 v54; // rax
  _BYTE *v55; // r9
  __int64 v56; // rcx
  _QWORD **v57; // r9
  _QWORD *v58; // r9
  _QWORD *i; // r8
  unsigned int *v60; // r8
  unsigned int v61; // r9d
  HANDLE ProcessHeap; // rax
  CTreeData *v63; // rcx
  void ***v64; // rcx
  void **v65; // rax
  unsigned __int64 v66; // r8
  __int64 v67; // rax
  unsigned __int64 v68; // rbp
  int v69; // r14d
  char *v70; // rbx
  int v71; // eax
  __int64 v73; // rdx
  _BYTE *v74; // rax
  __int64 v75; // rcx
  void ****v76; // rcx
  __int64 v77; // r9
  __int64 v78; // rdx
  unsigned int v79; // esi
  unsigned int v80; // r15d
  void *v81; // rax
  void *v82; // r14
  CThreadContext *v83; // rax
  CThreadContext *v84; // rax
  CThreadContext *v85; // rax
  CThreadContext *v86; // rax
  HANDLE v87; // rax
  LPVOID v88; // rdi
  unsigned int v89; // ebx
  __int64 v90; // rdx
  __int64 v91; // rsi
  int v92; // r10d
  int v93; // r11d
  __int64 v94; // rdx
  __int64 v95; // rax
  unsigned __int64 v96; // r8
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rax
  unsigned __int64 v100; // rdx
  int v101; // eax
  unsigned __int64 v102; // rdx
  __int64 v103; // rbp
  __int64 v104; // r9
  __int64 v105; // rcx
  unsigned __int64 v106; // r8
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rcx
  void *v110; // rbx
  HANDLE v111; // rax
  unsigned int v112; // [rsp+20h] [rbp-78h]
  unsigned int v113; // [rsp+20h] [rbp-78h]
  __int128 v114; // [rsp+30h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v117; // [rsp+A8h] [rbp+10h]
  __int64 v119; // [rsp+C0h] [rbp+28h] BYREF
  va_list va; // [rsp+C0h] [rbp+28h]
  va_list va1; // [rsp+C8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v119 = va_arg(va1, _QWORD);
  v117 = a2;
  *(_DWORD *)(a1 + 64) = 4;
  v4 = a4;
  if ( !a3 )
    goto LABEL_9;
  Value = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v85 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v85 || (v86 = CThreadContext::CThreadContext(v85), (Value = (__int64 *)v86) == 0LL) )
    {
      v89 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
      v90 = 76LL;
LABEL_171:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v90,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)v89,
        v112);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v89, 0x3Eu, 0LL);
      v16 = v89;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v89, 0xD6u, 0LL);
      return v16;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v86);
  }
  v8 = Value + 4;
  v9 = detail::pointer_buffer_impl<CVisual *,0>::last(Value + 4);
  if ( (Value[4] & 3) == 0 )
    goto LABEL_157;
  if ( (Value[4] & 3) == 1 )
  {
    v10 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFCuLL);
    goto LABEL_152;
  }
  if ( (Value[4] & 3) != 2 )
  {
    if ( (Value[4] & 3) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_157:
    v10 = Value + 4;
    goto LABEL_152;
  }
  v10 = 0LL;
LABEL_152:
  while ( v10 != (_QWORD *)v9 && *v10 != a3 )
    ++v10;
  if ( v10 != (_QWORD *)detail::pointer_buffer_impl<CVisual *,0>::last(v8) )
  {
    v89 = -2147467260;
    v90 = 82LL;
    goto LABEL_171;
  }
  v11 = detail::pointer_buffer_impl<CVisual *,0>::last(v8);
  v12 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v8);
  *(_QWORD *)detail::vector_facade<void const *,detail::pointer_buffer_impl<void const *,0>>::reserve_region(
               v8,
               (__int64)(v11 - v12) >> 3) = a3;
  detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v8);
  a2 = v117;
LABEL_9:
  *(_QWORD *)(a1 + 8) = a2;
  v13 = (__int64 *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  v14 = a2;
  *(_DWORD *)(a1 + 24) = 0;
  v15 = 64LL;
  v16 = 0;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v14 + 102) & 0x20) == 0 && v14 != a2 )
    {
      v17 = a1;
      goto LABEL_19;
    }
    v17 = a1;
    LOBYTE(v119) = 0;
    v18 = *(_QWORD *)(a1 + 56);
    if ( !v18 )
      goto LABEL_15;
    v19 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 192LL))(*(_QWORD *)(a1 + 56));
    v20 = (int **)(v14 + 224);
    if ( !v19 )
    {
      v53 = *v20;
      if ( **v20 >= 0 )
      {
        v22 = (unsigned int **)(v14 + 224);
        goto LABEL_69;
      }
      v54 = (unsigned int)v53[1];
      v55 = v53 + 2;
      v56 = 0LL;
      if ( (_DWORD)v54 )
      {
        while ( *v55 != 1 )
        {
          v56 = (unsigned int)(v56 + 1);
          ++v55;
          if ( (unsigned int)v56 >= (unsigned int)v54 )
            goto LABEL_119;
        }
      }
      else
      {
LABEL_119:
        if ( (unsigned int)v56 >= (unsigned int)v54 )
        {
          v57 = 0LL;
LABEL_66:
          v58 = *v57;
          v22 = (unsigned int **)(v14 + 224);
          if ( v58 )
          {
            for ( i = (_QWORD *)*v58; ; i = (_QWORD *)*i )
            {
              v22 = (unsigned int **)(v14 + 224);
              if ( i == v58 )
                break;
              v21 = i - 44;
              if ( i[4] == v18 )
                goto LABEL_14;
            }
          }
LABEL_69:
          v60 = *v22;
          v61 = **v22;
          if ( (v61 & 0x10000000) == 0 )
            goto LABEL_70;
          v73 = v60[1];
          v74 = v60 + 2;
          v75 = 0LL;
          if ( (_DWORD)v73 )
          {
            while ( *v74 != 4 )
            {
              v75 = (unsigned int)(v75 + 1);
              ++v74;
              if ( (unsigned int)v75 >= (unsigned int)v73 )
                goto LABEL_136;
            }
          }
          else
          {
LABEL_136:
            if ( (unsigned int)v75 >= (unsigned int)v73 )
            {
              v76 = 0LL;
LABEL_124:
              v64 = *v76;
              if ( v64 )
              {
                *v60 = v61 & 0xEFFFFFFF;
                v77 = 0LL;
                if ( (_DWORD)v73 )
                {
                  while ( *((_BYTE *)v60 + v77 + 8) != 4 )
                  {
                    v77 = (unsigned int)(v77 + 1);
                    if ( (unsigned int)v77 >= (unsigned int)v73 )
                      goto LABEL_128;
                  }
                  *((_BYTE *)v60 + v77 + 8) = 0;
                }
LABEL_128:
                v65 = *v64;
                goto LABEL_129;
              }
LABEL_70:
              ProcessHeap = GetProcessHeap();
              v63 = (CTreeData *)HeapAlloc(ProcessHeap, 0, 0x188uLL);
              if ( !v63 )
                ModuleFailFastForHRESULT(-2147024882, retaddr);
              CTreeData::CTreeData(v63);
              v65 = &CVisualTreeData::`vftable';
              v64[48] = 0LL;
              *v64 = &CVisualTreeData::`vftable';
LABEL_129:
              ((void (__fastcall *)(void ***, __int64, __int64))v65[1])(v64, v18, v14);
              goto LABEL_15;
            }
          }
          v76 = (void ****)((char *)&v60[2 * v75] + ((v73 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
          goto LABEL_124;
        }
      }
      v57 = (_QWORD **)((char *)&v53[2 * v56] + ((v54 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
      goto LABEL_66;
    }
    v21 = (_QWORD *)(v14 + 320);
LABEL_14:
    v22 = (unsigned int **)(v14 + 224);
    if ( !v21 )
      goto LABEL_69;
LABEL_15:
    v23 = CHitTestContext::PreSubgraph(a4, *(const struct CVisualTree **)(a1 + 56), (bool *)va);
    v16 = v23;
    if ( v23 < 0 )
      break;
    if ( !(_BYTE)v119 )
      goto LABEL_17;
    v32 = *v13;
    v33 = *(_QWORD *)(*v13 + 80);
    v34 = v33 & 3;
    if ( (v33 & 3) != 0 )
    {
      if ( (*(_DWORD *)(*v13 + 80) & 3) == 1LL )
      {
        v36 = v33 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_37:
        v35 = 0LL;
        v37 = *(_QWORD *)((v33 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
LABEL_38:
        v40 = v33 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_39;
      }
      if ( (*(_DWORD *)(*v13 + 80) & 3) == 2LL )
      {
        v35 = 0LL;
        v36 = 0LL;
        goto LABEL_33;
      }
      if ( (*(_DWORD *)(*v13 + 80) & 3) != 3LL )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v36 = v32 + 80;
    if ( (v33 & 3) == 0 )
    {
      v37 = 1LL;
      v35 = 0LL;
      goto LABEL_77;
    }
    if ( v34 == 1 )
      goto LABEL_37;
    if ( (unsigned __int64)(v34 - 2) >= 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    v35 = 0LL;
LABEL_33:
    v37 = 0LL;
    v38 = v34 - 1;
    if ( !v38 )
      goto LABEL_38;
    v39 = v38 - 1;
    if ( !v39 )
    {
      v40 = 0LL;
      goto LABEL_39;
    }
    if ( v39 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_77:
    v40 = v32 + 80;
LABEL_39:
    v41 = (__int64)(v36 + 8 * v37 - v40) >> 3;
    if ( !(_DWORD)v41 )
    {
      v16 = 1;
LABEL_17:
      v4 = a4;
LABEL_18:
      a2 = v117;
LABEL_19:
      v24 = (__int64 *)(v17 + 16);
      while ( 2 )
      {
        v25 = (*(_BYTE *)(v14 + 102) & 0x20) == 0;
        v26 = 1;
        LOBYTE(v119) = 1;
        if ( !v25 || v14 == a2 )
        {
          v16 = CHitTestContext::PostSubgraph(v4, *(const struct CVisualTree **)(v17 + 56), (bool *)va);
          v24 = (__int64 *)(v17 + 16);
          if ( (v16 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x11Eu, 0LL);
            goto LABEL_111;
          }
          v26 = v119;
        }
        if ( !v26 )
        {
LABEL_24:
          if ( !*(_DWORD *)(v17 + 4) )
            goto LABEL_177;
          v27 = *(_DWORD *)(v17 + 40);
          v28 = 0LL;
          v29 = 0;
          if ( v27 )
          {
            v30 = (unsigned int)(v27 - 1);
            *(_DWORD *)(v17 + 40) = v30;
            v31 = *(__m128i *)(*(_QWORD *)(v17 + 32) + 16 * v30);
            v24 = (__int64 *)(v17 + 16);
            v28 = *(_QWORD *)(*(_QWORD *)(v17 + 32) + 16 * v30);
            v29 = _mm_cvtsi128_si32(_mm_srli_si128(v31, 8));
          }
          v14 = *v24;
          *v24 = v28;
          --*(_DWORD *)(v17 + 4);
          *v13 = v14;
          *(_DWORD *)(v17 + 24) = v29;
          if ( !v14 )
          {
LABEL_177:
            v69 = -2147024882;
            if ( v16 == 1 )
              v16 = 0;
            goto LABEL_112;
          }
          a2 = v117;
          continue;
        }
        break;
      }
      v91 = *v24;
      if ( !*v24 )
        goto LABEL_191;
      v92 = *(_DWORD *)(v17 + 28);
      if ( v92 != 1 )
      {
        if ( !v92 && *(_DWORD *)(v17 + 24) )
          goto LABEL_197;
        goto LABEL_191;
      }
      v93 = *(_DWORD *)(v17 + 24);
      if ( v93 == -1 )
      {
LABEL_191:
        v16 = 1;
        goto LABEL_192;
      }
      v94 = *(_QWORD *)(v91 + 80);
      v95 = v94 & 3;
      if ( (v94 & 3) == 0 )
        goto LABEL_216;
      switch ( *(_DWORD *)(v91 + 80) & 3 )
      {
        case 1:
          v96 = v94 & 0xFFFFFFFFFFFFFFFCuLL;
          break;
        case 2:
          v96 = 0LL;
          goto LABEL_186;
        case 3:
LABEL_216:
          v96 = v91 + 80;
          if ( (v94 & 3) == 0 )
          {
            v97 = 1LL;
            goto LABEL_221;
          }
          if ( v95 != 1 )
          {
            if ( (unsigned __int64)(v95 - 2) >= 2 )
              ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_186:
            v97 = 0LL;
            v98 = v95 - 1;
            if ( v98 )
            {
              v99 = v98 - 1;
              if ( !v99 )
              {
                v100 = 0LL;
                goto LABEL_196;
              }
              if ( v99 != 1 )
                ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_221:
              v100 = v91 + 80;
LABEL_196:
              if ( v93 + 1 < (unsigned int)((__int64)(v96 + 8 * v97 - v100) >> 3) )
              {
LABEL_197:
                v101 = *(_DWORD *)(v17 + 24);
                v102 = v91 + 80;
                v103 = *(_QWORD *)(v91 + 80);
                v104 = (unsigned int)(v101 + 1);
                if ( v92 != 1 )
                  v104 = (unsigned int)(v101 - 1);
                v105 = *(_QWORD *)(v91 + 80) & 3LL;
                if ( (v103 & 3) == 0 )
                  goto LABEL_226;
                switch ( *(_QWORD *)(v91 + 80) & 3LL )
                {
                  case 1LL:
                    v106 = v103 & 0xFFFFFFFFFFFFFFFCuLL;
                    break;
                  case 2LL:
                    v106 = 0LL;
                    goto LABEL_203;
                  case 3LL:
LABEL_226:
                    v106 = v91 + 80;
                    if ( (v103 & 3) == 0 )
                    {
                      v107 = 1LL;
                      goto LABEL_210;
                    }
                    if ( v105 != 1 )
                    {
                      if ( (unsigned __int64)(v105 - 2) > 1 )
                        ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_203:
                      v107 = 0LL;
                      if ( (v103 & 3) != 0 )
                      {
                        v108 = v105 - 1;
                        if ( v108 )
                        {
                          v109 = v108 - 1;
                          if ( v109 )
                          {
                            if ( v109 != 1 )
                              ModuleFailFastForHRESULT(-2147418113, retaddr);
                          }
                          else
                          {
                            v102 = 0LL;
                          }
                          goto LABEL_210;
                        }
LABEL_209:
                        v102 = v103 & 0xFFFFFFFFFFFFFFFCuLL;
                      }
LABEL_210:
                      if ( (__int64)(v106 + 8 * v107 - v102) >> 3 <= (unsigned __int64)(unsigned int)v104 )
                      {
                        v14 = 0LL;
                      }
                      else
                      {
                        if ( (v103 & 3) == 0 )
                          goto LABEL_96;
                        switch ( *(_QWORD *)(v91 + 80) & 3LL )
                        {
                          case 1LL:
                            v68 = v103 & 0xFFFFFFFFFFFFFFFCuLL;
                            break;
                          case 2LL:
                            v68 = 0LL;
                            break;
                          case 3LL:
LABEL_96:
                            v68 = v91 + 80;
                            break;
                          default:
                            ModuleFailFastForHRESULT(-2147418113, retaddr);
                        }
                        v14 = *(_QWORD *)(v68 + 8 * v104);
                      }
                      *v13 = v14;
                      v16 = 0;
                      *(_DWORD *)(v17 + 24) = v104;
                      if ( v14 )
                        goto LABEL_99;
LABEL_192:
                      v24 = (__int64 *)(v17 + 16);
                      goto LABEL_24;
                    }
                    break;
                  default:
                    ModuleFailFastForHRESULT(-2147418113, retaddr);
                }
                v107 = *(_QWORD *)((v103 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
                goto LABEL_209;
              }
              goto LABEL_191;
            }
LABEL_195:
            v100 = v94 & 0xFFFFFFFFFFFFFFFCuLL;
            goto LABEL_196;
          }
          break;
        default:
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      v97 = *(_QWORD *)((v94 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
      goto LABEL_195;
    }
    v42 = *(unsigned int *)(a1 + 40);
    *(_QWORD *)&v114 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v114 + 1) = *(unsigned int *)(a1 + 24);
    v43 = *(unsigned int *)(a1 + 44);
    if ( (_DWORD)v42 == (_DWORD)v43 )
    {
      v69 = -2147024882;
      if ( (unsigned __int64)(2 * v43) > 0xFFFFFFFF )
      {
        v78 = 98LL;
        goto LABEL_140;
      }
      v79 = 64;
      if ( (unsigned int)(2 * v43) > 0x40 )
        v79 = 2 * v43;
      v80 = 16 * v42;
      if ( (unsigned __int64)(16 * v42) > 0xFFFFFFFF )
      {
        v78 = 101LL;
        v15 = 64LL;
LABEL_140:
        v16 = -2147024362;
LABEL_141:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v78,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v16,
          v112);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v16,
          v113);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x87u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x100u, 0LL);
        goto LABEL_112;
      }
      if ( 0xFFFFFFFFFFFFFFFFuLL / v79 <= 0x10 )
      {
        v16 = -2147024809;
        goto LABEL_150;
      }
      v81 = MIDL_user_allocate(16LL * v79);
      v82 = v81;
      if ( !v81 )
      {
        v69 = -2147024882;
        v16 = -2147024882;
LABEL_150:
        v78 = 104LL;
        v15 = 64LL;
        goto LABEL_141;
      }
      memcpy_0(v81, *(const void **)(a1 + 32), v80);
      operator delete(*(void **)(a1 + 32));
      *(_QWORD *)(a1 + 32) = v82;
      v35 = 0LL;
      v17 = a1;
      *(_DWORD *)(a1 + 44) = v79;
      v15 = 64LL;
    }
    v16 = 0;
    *(_OWORD *)(*(_QWORD *)(v17 + 32) + 16LL * (unsigned int)(*(_DWORD *)(v17 + 40))++) = v114;
    v44 = *(_DWORD *)(v17 + 52);
    if ( v44 <= *(_DWORD *)(v17 + 40) )
      v44 = *(_DWORD *)(v17 + 40);
    *(_DWORD *)(v17 + 52) = v44;
    if ( *(_DWORD *)(v17 + 28) == 1 )
      v45 = 0LL;
    else
      v45 = (unsigned int)(v41 - 1);
    *(_DWORD *)(v17 + 24) = v45;
    v46 = *v13;
    v47 = *(_QWORD *)(*v13 + 80);
    v48 = v47 & 3;
    if ( (v47 & 3) != 0 )
    {
      if ( (*(_DWORD *)(*v13 + 80) & 3) == 1LL )
      {
        v49 = v47 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_53:
        v50 = *(_QWORD *)((v47 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
LABEL_54:
        v35 = v47 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_55;
      }
      if ( (*(_DWORD *)(*v13 + 80) & 3) == 2LL )
      {
        v49 = 0LL;
        goto LABEL_49;
      }
      if ( (*(_DWORD *)(*v13 + 80) & 3) != 3LL )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v49 = v46 + 80;
    if ( (v47 & 3) == 0 )
    {
      v50 = 1LL;
      goto LABEL_88;
    }
    if ( v48 == 1 )
      goto LABEL_53;
    if ( (unsigned __int64)(v48 - 2) >= 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_49:
    v50 = 0LL;
    if ( v48 == 1 )
      goto LABEL_54;
    if ( v48 == 2 )
    {
      v50 = 0LL;
      goto LABEL_55;
    }
LABEL_88:
    v35 = v46 + 80;
LABEL_55:
    if ( (__int64)(v49 + 8 * v50 - v35) >> 3 > v45 )
    {
      if ( (v47 & 3) == 0 )
        goto LABEL_92;
      v51 = v48 - 1;
      if ( v51 )
      {
        v52 = v51 - 1;
        if ( v52 )
        {
          if ( v52 != 1 )
            ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_92:
          v66 = v46 + 80;
        }
        else
        {
          v66 = 0LL;
        }
      }
      else
      {
        v66 = v47 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      v67 = *(_QWORD *)(v66 + 8 * v45);
      goto LABEL_94;
    }
    v67 = 0LL;
LABEL_94:
    v4 = a4;
    *v13 = v67;
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v46;
    v17 = a1;
    if ( !v67 )
      goto LABEL_18;
    v14 = v67;
LABEL_99:
    a2 = v117;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xF2u, 0LL);
LABEL_111:
  v69 = -2147024882;
LABEL_112:
  if ( a3 )
  {
    v70 = (char *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( v70 )
      goto LABEL_114;
    v83 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( v83 && (v84 = CThreadContext::CThreadContext(v83), (v70 = (char *)v84) != 0LL) )
    {
      TlsSetValue(CThreadContext::s_dwTlsIndex, v84);
LABEL_114:
      detail::vector_facade<void const *,detail::pointer_buffer_impl<void const *,0>>::pop_back(v70 + 32);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  v71 = *(_DWORD *)(a1 + 48);
  if ( v71 != 10 )
  {
    *(_DWORD *)(a1 + 48) = v71 + 1;
    return v16;
  }
  if ( *(_DWORD *)(a1 + 52) > 0x40u )
    v15 = *(unsigned int *)(a1 + 52);
  if ( (unsigned __int64)(3 * v15) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
LABEL_134:
    *(_QWORD *)(a1 + 48) = 0LL;
    return v16;
  }
  if ( (unsigned int)(3 * v15) > *(_DWORD *)(a1 + 44) )
    goto LABEL_134;
  if ( !(_DWORD)v15 || 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v15 <= 0x10 )
  {
    v69 = -2147024809;
    goto LABEL_169;
  }
  v87 = GetProcessHeap();
  v88 = HeapAlloc(v87, 0, 16LL * (unsigned int)v15);
  if ( !v88 )
  {
LABEL_169:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0x11Eu, 0LL);
    goto LABEL_134;
  }
  v110 = *(void **)(a1 + 32);
  if ( v110 )
  {
    v111 = GetProcessHeap();
    HeapFree(v111, 0, v110);
  }
  *(_QWORD *)(a1 + 32) = v88;
  *(_DWORD *)(a1 + 44) = v15;
  *(_QWORD *)(a1 + 48) = 0LL;
  return v16;
}
