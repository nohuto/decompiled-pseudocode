/*
 * XREFs of ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180087C70
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?last@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ @ 0x180018840 (-last@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088B00 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180089340 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?reserve_region@?$vector_facade@PEBXV?$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAPEAPEBX_K0@Z @ 0x18009FA24 (-reserve_region@-$vector_facade@PEBXV-$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAPEAPEBX.c)
 *     ?pop_back@?$vector_facade@PEBXV?$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@QEAAXXZ @ 0x1800A007C (-pop_back@-$vector_facade@PEBXV-$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@QEAAXXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180260224 (--0CTreeData@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 CVisualTreeIterator::WalkSubtree<COcclusionContext>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        COcclusionContext *a4,
        ...)
{
  COcclusionContext *v4; // rbp
  __int64 *Value; // rbx
  __int64 *v8; // rsi
  unsigned __int64 v9; // rax
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // r14
  __int64 *v14; // r13
  unsigned int v15; // esi
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rsi
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
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // r8
  __int64 v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rbp
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // eax
  unsigned int v44; // ebp
  __int64 v45; // r15
  __int64 v46; // r11
  __int64 v47; // rcx
  unsigned __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  int *v53; // r9
  __int64 v54; // r8
  _BYTE *v55; // rax
  __int64 v56; // rcx
  _QWORD **v57; // r9
  _QWORD *v58; // r9
  _QWORD *i; // r8
  unsigned int *v60; // rdx
  unsigned int v61; // r9d
  HANDLE ProcessHeap; // rax
  CTreeData *v63; // rcx
  void ***v64; // rcx
  void **v65; // rax
  unsigned __int64 v66; // r11
  __int64 v67; // rax
  unsigned __int64 v68; // rbx
  __int64 v69; // r8
  _BYTE *v70; // rax
  __int64 v71; // rcx
  void ****v72; // rcx
  __int64 v73; // r9
  int v74; // r14d
  char *v75; // rbx
  int v76; // eax
  __int64 v78; // rdx
  unsigned int v79; // esi
  unsigned int v80; // r15d
  HANDLE v81; // rax
  void *v82; // rax
  void *v83; // r14
  CThreadContext *v84; // rax
  CThreadContext *v85; // rax
  CThreadContext *v86; // rax
  CThreadContext *v87; // rax
  HANDLE v88; // rax
  LPVOID v89; // rdi
  unsigned int v90; // ebx
  __int64 v91; // rdx
  __int64 v92; // rsi
  int v93; // r11d
  int v94; // r10d
  __int64 v95; // r8
  __int64 v96; // rax
  unsigned __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rax
  unsigned __int64 v101; // r8
  int v102; // eax
  unsigned __int64 v103; // r9
  __int64 v104; // rbx
  __int64 v105; // rdx
  __int64 v106; // rcx
  unsigned __int64 v107; // r8
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rcx
  void *v111; // rbx
  HANDLE v112; // rax
  __int128 v113; // [rsp+30h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v116; // [rsp+A8h] [rbp+10h]
  __int64 v118; // [rsp+C0h] [rbp+28h] BYREF
  va_list va; // [rsp+C0h] [rbp+28h]
  va_list va1; // [rsp+C8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v118 = va_arg(va1, _QWORD);
  v116 = a2;
  *(_DWORD *)(a1 + 64) = 2;
  v4 = a4;
  if ( !a3 )
    goto LABEL_9;
  Value = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v86 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v86 || (v87 = CThreadContext::CThreadContext(v86), (Value = (__int64 *)v87) == 0LL) )
    {
      v90 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      v91 = 76LL;
LABEL_174:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v91,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)v90);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v90, 0x3Eu, 0LL);
      v15 = v90;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v90, 0xD6u, 0LL);
      return v15;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v87);
  }
  v8 = Value + 4;
  v9 = detail::pointer_buffer_impl<CVisual *,0>::last(Value + 4);
  if ( (Value[4] & 3) == 0 )
    goto LABEL_159;
  if ( (Value[4] & 3) == 1 )
  {
    v10 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFCuLL);
    goto LABEL_154;
  }
  if ( (Value[4] & 3) != 2 )
  {
    if ( (Value[4] & 3) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_159:
    v10 = Value + 4;
    goto LABEL_154;
  }
  v10 = 0LL;
LABEL_154:
  while ( v10 != (_QWORD *)v9 && *v10 != a3 )
    ++v10;
  if ( v10 != (_QWORD *)detail::pointer_buffer_impl<CVisual *,0>::last(v8) )
  {
    v90 = -2147467260;
    v91 = 82LL;
    goto LABEL_174;
  }
  v11 = detail::pointer_buffer_impl<CVisual *,0>::last(v8);
  v12 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v8);
  *(_QWORD *)detail::vector_facade<void const *,detail::pointer_buffer_impl<void const *,0>>::reserve_region(
               v8,
               (__int64)(v11 - v12) >> 3) = a3;
  detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v8);
  a2 = v116;
LABEL_9:
  v13 = a1;
  v14 = (__int64 *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 0;
  v15 = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  v16 = a2;
  *(_DWORD *)(a1 + 24) = 0;
  v17 = 64LL;
  *v14 = a2;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v16 + 102) & 0x20) == 0 && v16 != a2 )
      goto LABEL_18;
    v18 = *(_QWORD *)(v13 + 56);
    LOBYTE(v118) = 0;
    if ( !v18 )
      goto LABEL_15;
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 192LL))(v18);
    v20 = (int **)(v16 + 224);
    if ( !v19 )
    {
      v53 = *v20;
      if ( **v20 >= 0 )
      {
        v22 = (unsigned int **)(v16 + 224);
        goto LABEL_68;
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
            goto LABEL_108;
        }
      }
      else
      {
LABEL_108:
        if ( (unsigned int)v56 >= (unsigned int)v54 )
        {
          v57 = 0LL;
LABEL_65:
          v58 = *v57;
          v22 = (unsigned int **)(v16 + 224);
          if ( v58 )
          {
            for ( i = (_QWORD *)*v58; ; i = (_QWORD *)*i )
            {
              v22 = (unsigned int **)(v16 + 224);
              if ( i == v58 )
                break;
              v21 = i - 44;
              if ( i[4] == v18 )
                goto LABEL_14;
            }
          }
LABEL_68:
          v60 = *v22;
          v61 = **v22;
          if ( (v61 & 0x10000000) == 0 )
            goto LABEL_69;
          v69 = v60[1];
          v70 = v60 + 2;
          v71 = 0LL;
          if ( (_DWORD)v69 )
          {
            while ( *v70 != 4 )
            {
              v71 = (unsigned int)(v71 + 1);
              ++v70;
              if ( (unsigned int)v71 >= (unsigned int)v69 )
                goto LABEL_132;
            }
          }
          else
          {
LABEL_132:
            if ( (unsigned int)v71 >= (unsigned int)v69 )
            {
              v72 = 0LL;
LABEL_115:
              v64 = *v72;
              if ( v64 )
              {
                *v60 = v61 & 0xEFFFFFFF;
                v73 = 0LL;
                if ( (_DWORD)v69 )
                {
                  while ( *((_BYTE *)v60 + v73 + 8) != 4 )
                  {
                    v73 = (unsigned int)(v73 + 1);
                    if ( (unsigned int)v73 >= (unsigned int)v69 )
                      goto LABEL_119;
                  }
                  *((_BYTE *)v60 + v73 + 8) = 0;
                }
LABEL_119:
                v65 = *v64;
                goto LABEL_120;
              }
LABEL_69:
              ProcessHeap = GetProcessHeap();
              v63 = (CTreeData *)HeapAlloc(ProcessHeap, 0, 0x188uLL);
              if ( !v63 )
                ModuleFailFastForHRESULT(-2147024882, retaddr);
              CTreeData::CTreeData(v63);
              v65 = &CVisualTreeData::`vftable';
              *v64 = &CVisualTreeData::`vftable';
              v64[48] = 0LL;
LABEL_120:
              ((void (__fastcall *)(void ***, __int64, __int64))v65[1])(v64, v18, v16);
              goto LABEL_15;
            }
          }
          v72 = (void ****)((char *)&v60[2 * v71] + ((v69 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
          goto LABEL_115;
        }
      }
      v57 = (_QWORD **)((char *)&v53[2 * v56] + ((v54 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
      goto LABEL_65;
    }
    v21 = (_QWORD *)(v16 + 320);
LABEL_14:
    v22 = (unsigned int **)(v16 + 224);
    if ( !v21 )
      goto LABEL_68;
LABEL_15:
    v23 = COcclusionContext::PreSubgraph(v4, *(const struct CVisualTree **)(v13 + 56), (bool *)va);
    v15 = v23;
    if ( v23 < 0 )
      break;
    if ( !(_BYTE)v118 )
      goto LABEL_17;
    v32 = *v14;
    v33 = *(_QWORD *)(*v14 + 80);
    v34 = v33 & 3;
    if ( (v33 & 3) != 0 )
    {
      if ( (*(_DWORD *)(*v14 + 80) & 3) == 1LL )
      {
        v35 = v33 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_36:
        v36 = *(_QWORD *)((v33 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
LABEL_37:
        v39 = v33 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_38;
      }
      if ( (*(_DWORD *)(*v14 + 80) & 3) == 2LL )
      {
        v35 = 0LL;
        goto LABEL_32;
      }
      if ( (*(_DWORD *)(*v14 + 80) & 3) != 3LL )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v35 = v32 + 80;
    if ( (v33 & 3) == 0 )
    {
      v36 = 1LL;
      goto LABEL_76;
    }
    if ( v34 == 1 )
      goto LABEL_36;
    if ( (unsigned __int64)(v34 - 2) >= 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_32:
    v36 = 0LL;
    v37 = v34 - 1;
    if ( !v37 )
      goto LABEL_37;
    v38 = v37 - 1;
    if ( !v38 )
    {
      v39 = 0LL;
      goto LABEL_38;
    }
    if ( v38 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_76:
    v39 = v32 + 80;
LABEL_38:
    v40 = (__int64)(v35 + 8 * v36 - v39) >> 3;
    if ( !(_DWORD)v40 )
    {
      v15 = 1;
LABEL_17:
      a2 = v116;
LABEL_18:
      v24 = (__int64 *)(v13 + 16);
      while ( 2 )
      {
        v25 = (*(_BYTE *)(v16 + 102) & 0x20) == 0;
        v26 = 1;
        LOBYTE(v118) = 1;
        if ( !v25 || v16 == a2 )
        {
          v15 = COcclusionContext::PostSubgraph(a4, *(const struct CVisualTree **)(v13 + 56), (bool *)va);
          v24 = (__int64 *)(v13 + 16);
          if ( (v15 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x11Eu, 0LL);
            goto LABEL_122;
          }
          v26 = v118;
        }
        if ( !v26 )
        {
LABEL_23:
          if ( !*(_DWORD *)(v13 + 4) )
            goto LABEL_123;
          v27 = *(_DWORD *)(v13 + 40);
          v28 = 0LL;
          v29 = 0;
          if ( v27 )
          {
            v30 = (unsigned int)(v27 - 1);
            *(_DWORD *)(v13 + 40) = v30;
            v31 = *(__m128i *)(*(_QWORD *)(v13 + 32) + 16 * v30);
            v24 = (__int64 *)(v13 + 16);
            v28 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 16 * v30);
            v29 = _mm_cvtsi128_si32(_mm_srli_si128(v31, 8));
          }
          v16 = *v24;
          *v24 = v28;
          --*(_DWORD *)(v13 + 4);
          *v14 = v16;
          *(_DWORD *)(v13 + 24) = v29;
          if ( !v16 )
          {
LABEL_123:
            v74 = -2147024882;
            if ( v15 == 1 )
              v15 = 0;
            goto LABEL_125;
          }
          a2 = v116;
          continue;
        }
        break;
      }
      v92 = *v24;
      if ( !*v24 )
        goto LABEL_192;
      v93 = *(_DWORD *)(v13 + 28);
      if ( v93 != 1 )
      {
        if ( !v93 && *(_DWORD *)(v13 + 24) )
          goto LABEL_198;
        goto LABEL_192;
      }
      v94 = *(_DWORD *)(v13 + 24);
      if ( v94 == -1 )
      {
LABEL_192:
        v15 = 1;
        goto LABEL_193;
      }
      v95 = *(_QWORD *)(v92 + 80);
      v96 = v95 & 3;
      if ( (v95 & 3) == 0 )
        goto LABEL_217;
      switch ( *(_DWORD *)(v92 + 80) & 3 )
      {
        case 1:
          v97 = v95 & 0xFFFFFFFFFFFFFFFCuLL;
          break;
        case 2:
          v97 = 0LL;
          goto LABEL_187;
        case 3:
LABEL_217:
          v97 = v92 + 80;
          if ( (v95 & 3) == 0 )
          {
            v98 = 1LL;
            goto LABEL_222;
          }
          if ( v96 != 1 )
          {
            if ( (unsigned __int64)(v96 - 2) >= 2 )
              ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_187:
            v98 = 0LL;
            v99 = v96 - 1;
            if ( v99 )
            {
              v100 = v99 - 1;
              if ( !v100 )
              {
                v101 = 0LL;
                goto LABEL_197;
              }
              if ( v100 != 1 )
                ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_222:
              v101 = v92 + 80;
LABEL_197:
              if ( v94 + 1 < (unsigned int)((__int64)(v97 + 8 * v98 - v101) >> 3) )
              {
LABEL_198:
                v102 = *(_DWORD *)(v13 + 24);
                v103 = v92 + 80;
                v104 = *(_QWORD *)(v92 + 80);
                v105 = (unsigned int)(v102 + 1);
                if ( v93 != 1 )
                  v105 = (unsigned int)(v102 - 1);
                v106 = *(_QWORD *)(v92 + 80) & 3LL;
                if ( (v104 & 3) == 0 )
                  goto LABEL_227;
                switch ( *(_QWORD *)(v92 + 80) & 3LL )
                {
                  case 1LL:
                    v107 = v104 & 0xFFFFFFFFFFFFFFFCuLL;
                    break;
                  case 2LL:
                    v107 = 0LL;
                    goto LABEL_204;
                  case 3LL:
LABEL_227:
                    v107 = v92 + 80;
                    if ( (v104 & 3) == 0 )
                    {
                      v108 = 1LL;
                      goto LABEL_211;
                    }
                    if ( v106 != 1 )
                    {
                      if ( (unsigned __int64)(v106 - 2) >= 2 )
                        ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_204:
                      v108 = 0LL;
                      if ( (v104 & 3) != 0 )
                      {
                        v109 = v106 - 1;
                        if ( v109 )
                        {
                          v110 = v109 - 1;
                          if ( v110 )
                          {
                            if ( v110 != 1 )
                              ModuleFailFastForHRESULT(-2147418113, retaddr);
                          }
                          else
                          {
                            v103 = 0LL;
                          }
                          goto LABEL_211;
                        }
LABEL_210:
                        v103 = v104 & 0xFFFFFFFFFFFFFFFCuLL;
                      }
LABEL_211:
                      if ( (__int64)(v107 + 8 * v108 - v103) >> 3 <= (unsigned __int64)(unsigned int)v105 )
                      {
                        v16 = 0LL;
                      }
                      else
                      {
                        if ( (v104 & 3) == 0 )
                          goto LABEL_95;
                        switch ( *(_QWORD *)(v92 + 80) & 3LL )
                        {
                          case 1LL:
                            v68 = v104 & 0xFFFFFFFFFFFFFFFCuLL;
                            break;
                          case 2LL:
                            v68 = 0LL;
                            break;
                          case 3LL:
LABEL_95:
                            v68 = v92 + 80;
                            break;
                          default:
                            ModuleFailFastForHRESULT(-2147418113, retaddr);
                        }
                        v16 = *(_QWORD *)(v68 + 8 * v105);
                      }
                      v15 = 0;
                      *v14 = v16;
                      *(_DWORD *)(v13 + 24) = v105;
                      if ( v16 )
                        goto LABEL_98;
LABEL_193:
                      v24 = (__int64 *)(v13 + 16);
                      goto LABEL_23;
                    }
                    break;
                  default:
                    ModuleFailFastForHRESULT(-2147418113, retaddr);
                }
                v108 = *(_QWORD *)((v104 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
                goto LABEL_210;
              }
              goto LABEL_192;
            }
LABEL_196:
            v101 = v95 & 0xFFFFFFFFFFFFFFFCuLL;
            goto LABEL_197;
          }
          break;
        default:
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      v98 = *(_QWORD *)((v95 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
      goto LABEL_196;
    }
    v41 = *(unsigned int *)(v13 + 40);
    *(_QWORD *)&v113 = *(_QWORD *)(v13 + 16);
    *((_QWORD *)&v113 + 1) = *(unsigned int *)(v13 + 24);
    v42 = *(unsigned int *)(v13 + 44);
    if ( (_DWORD)v41 == (_DWORD)v42 )
    {
      v74 = -2147024882;
      if ( (unsigned __int64)(2 * v42) > 0xFFFFFFFF )
      {
        v78 = 98LL;
        goto LABEL_141;
      }
      v79 = 64;
      if ( (unsigned int)(2 * v42) > 0x40 )
        v79 = 2 * v42;
      v80 = 16 * v41;
      if ( (unsigned __int64)(16 * v41) > 0xFFFFFFFF )
      {
        v78 = 101LL;
        v17 = 64LL;
LABEL_141:
        v15 = -2147024362;
LABEL_142:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v78,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v15);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v15);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x87u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x100u, 0LL);
        goto LABEL_125;
      }
      if ( 0xFFFFFFFFFFFFFFFFuLL / v79 <= 0x10 )
      {
        v74 = -2147024882;
        v15 = -2147024809;
        goto LABEL_151;
      }
      v81 = GetProcessHeap();
      v82 = HeapAlloc(v81, 0, 16LL * v79);
      v83 = v82;
      if ( !v82 )
      {
        v74 = -2147024882;
        v15 = -2147024882;
LABEL_151:
        v78 = 104LL;
        v17 = 64LL;
        goto LABEL_142;
      }
      memcpy_0(v82, *(const void **)(a1 + 32), v80);
      operator delete(*(void **)(a1 + 32));
      *(_QWORD *)(a1 + 32) = v83;
      v13 = a1;
      *(_DWORD *)(a1 + 44) = v79;
    }
    v15 = 0;
    *(_OWORD *)(*(_QWORD *)(v13 + 32) + 16LL * (unsigned int)(*(_DWORD *)(v13 + 40))++) = v113;
    v43 = *(_DWORD *)(v13 + 52);
    if ( v43 <= *(_DWORD *)(v13 + 40) )
      v43 = *(_DWORD *)(v13 + 40);
    *(_DWORD *)(v13 + 52) = v43;
    if ( *(_DWORD *)(v13 + 28) == 1 )
      v44 = 0;
    else
      v44 = v40 - 1;
    *(_DWORD *)(v13 + 24) = v44;
    v45 = *v14;
    v46 = *(_QWORD *)(*v14 + 80);
    v47 = v46 & 3;
    if ( (v46 & 3) != 0 )
    {
      if ( (*(_DWORD *)(*v14 + 80) & 3) == 1LL )
      {
        v48 = v46 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_52:
        v49 = *(_QWORD *)((v46 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
LABEL_53:
        v50 = v46 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_54;
      }
      if ( (*(_DWORD *)(*v14 + 80) & 3) == 2LL )
      {
        v48 = 0LL;
        goto LABEL_48;
      }
      if ( (*(_DWORD *)(*v14 + 80) & 3) != 3LL )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v48 = v45 + 80;
    if ( (v46 & 3) == 0 )
    {
      v49 = 1LL;
      goto LABEL_87;
    }
    if ( v47 == 1 )
      goto LABEL_52;
    if ( (unsigned __int64)(v47 - 2) >= 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_48:
    v49 = 0LL;
    if ( v47 == 1 )
      goto LABEL_53;
    if ( v47 == 2 )
    {
      v50 = 0LL;
      goto LABEL_54;
    }
LABEL_87:
    v50 = v45 + 80;
LABEL_54:
    if ( (__int64)(v48 + 8 * v49 - v50) >> 3 > (unsigned __int64)v44 )
    {
      if ( (v46 & 3) == 0 )
        goto LABEL_91;
      v51 = v47 - 1;
      if ( v51 )
      {
        v52 = v51 - 1;
        if ( v52 )
        {
          if ( v52 != 1 )
            ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_91:
          v66 = v45 + 80;
        }
        else
        {
          v66 = 0LL;
        }
      }
      else
      {
        v66 = v46 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      v67 = *(_QWORD *)(v66 + 8LL * v44);
      goto LABEL_93;
    }
    v67 = 0LL;
LABEL_93:
    v13 = a1;
    *v14 = v67;
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v45;
    v17 = 64LL;
    if ( !v67 )
      goto LABEL_17;
    v16 = v67;
LABEL_98:
    v4 = a4;
    a2 = v116;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0xF2u, 0LL);
LABEL_122:
  v74 = -2147024882;
LABEL_125:
  if ( a3 )
  {
    v75 = (char *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( v75 )
      goto LABEL_127;
    v84 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( v84 && (v85 = CThreadContext::CThreadContext(v84), (v75 = (char *)v85) != 0LL) )
    {
      TlsSetValue(CThreadContext::s_dwTlsIndex, v85);
LABEL_127:
      detail::vector_facade<void const *,detail::pointer_buffer_impl<void const *,0>>::pop_back(v75 + 32);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  v76 = *(_DWORD *)(a1 + 48);
  if ( v76 != 10 )
  {
    *(_DWORD *)(a1 + 48) = v76 + 1;
    return v15;
  }
  if ( *(_DWORD *)(a1 + 52) > 0x40u )
    v17 = *(unsigned int *)(a1 + 52);
  if ( (unsigned __int64)(3 * v17) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
LABEL_138:
    *(_QWORD *)(a1 + 48) = 0LL;
    return v15;
  }
  if ( (unsigned int)(3 * v17) > *(_DWORD *)(a1 + 44) )
    goto LABEL_138;
  if ( !(_DWORD)v17 || 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v17 <= 0x10 )
  {
    v74 = -2147024809;
    goto LABEL_172;
  }
  v88 = GetProcessHeap();
  v89 = HeapAlloc(v88, 0, 16LL * (unsigned int)v17);
  if ( !v89 )
  {
LABEL_172:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v74, 0x11Eu, 0LL);
    goto LABEL_138;
  }
  v111 = *(void **)(a1 + 32);
  if ( v111 )
  {
    v112 = GetProcessHeap();
    HeapFree(v112, 0, v111);
  }
  *(_QWORD *)(a1 + 32) = v89;
  *(_DWORD *)(a1 + 44) = v17;
  *(_QWORD *)(a1 + 48) = 0LL;
  return v15;
}
