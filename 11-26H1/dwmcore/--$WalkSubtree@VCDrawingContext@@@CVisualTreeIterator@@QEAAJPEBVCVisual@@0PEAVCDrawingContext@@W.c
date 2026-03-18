/*
 * XREFs of ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180082350
 * Callers:
 *     ??$Walk@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@PEAV2@@Z @ 0x1800D2D90 (--$Walk@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingC.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?last@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ @ 0x180018840 (-last@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180081C40 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?reserve_region@?$vector_facade@PEBXV?$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAPEAPEBX_K0@Z @ 0x18009FA24 (-reserve_region@-$vector_facade@PEBXV-$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAPEAPEBX.c)
 *     ?pop_back@?$vector_facade@PEBXV?$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@QEAAXXZ @ 0x1800A007C (-pop_back@-$vector_facade@PEBXV-$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@QEAAXXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180260224 (--0CTreeData@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 CVisualTreeIterator::WalkSubtree<CDrawingContext>(__int64 a1, __int64 a2, __int64 a3, CDrawingContext *a4, ...)
{
  CDrawingContext *v4; // rbp
  __int64 *Value; // rbx
  __int64 *v8; // rsi
  unsigned __int64 v9; // rax
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 *v13; // r13
  unsigned int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rsi
  char v19; // al
  int **v20; // rdx
  _QWORD *v21; // rax
  unsigned int **v22; // rcx
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  CDrawingContext *v32; // r12
  __int64 *v33; // rax
  bool v34; // zf
  bool v35; // cl
  __int64 v36; // r10
  int v37; // r8d
  int v38; // ebx
  __int64 v39; // r9
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // r9
  int v46; // r8d
  __int64 v47; // rcx
  int v48; // edx
  __int64 v49; // rcx
  __m128i v50; // xmm1
  int *v51; // r8
  __int64 v52; // rax
  _BYTE *v53; // r9
  __int64 v54; // rcx
  _QWORD **v55; // r9
  _QWORD *v56; // r9
  _QWORD *i; // r8
  unsigned int *v58; // r9
  unsigned int v59; // edx
  HANDLE ProcessHeap; // rax
  CTreeData *v61; // rcx
  void ***v62; // rcx
  void **v63; // rax
  __int64 v64; // rbp
  __int64 v65; // rdx
  __int64 v66; // rax
  unsigned int v67; // eax
  __int64 v68; // rbp
  __int64 v69; // r15
  __int64 v70; // r9
  __int64 v71; // rcx
  unsigned __int64 v72; // rdx
  __int64 v73; // r10
  unsigned __int64 v74; // r8
  int v75; // eax
  unsigned __int64 v76; // rdx
  __int64 v77; // rbx
  __int64 v78; // r9
  __int64 v79; // rcx
  unsigned __int64 v80; // r8
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  unsigned __int64 v86; // r9
  __int64 v87; // rax
  unsigned __int64 v88; // rbx
  int v89; // r14d
  char *v90; // rbx
  int v91; // eax
  __int64 v93; // r8
  _BYTE *v94; // rax
  __int64 v95; // rcx
  void ****v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rdx
  unsigned int v99; // esi
  unsigned int v100; // r15d
  void *v101; // rax
  void *v102; // r14
  CThreadContext *v103; // rax
  CThreadContext *v104; // rax
  CThreadContext *v105; // rax
  CThreadContext *v106; // rax
  HANDLE v107; // rax
  LPVOID v108; // rdi
  unsigned int v109; // ebx
  __int64 v110; // rdx
  void *v111; // rbx
  HANDLE v112; // rax
  __int128 v113; // [rsp+30h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v116; // [rsp+A8h] [rbp+10h]
  bool v117; // [rsp+B0h] [rbp+18h] BYREF
  CDrawingContext *v118; // [rsp+B8h] [rbp+20h]
  __int64 v119; // [rsp+C0h] [rbp+28h] BYREF
  va_list va; // [rsp+C0h] [rbp+28h]
  va_list va1; // [rsp+C8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v119 = va_arg(va1, _QWORD);
  v118 = a4;
  v116 = a2;
  v4 = a4;
  *(_DWORD *)(a1 + 64) = v119;
  if ( !a3 )
    goto LABEL_9;
  Value = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v105 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v105 || (v106 = CThreadContext::CThreadContext(v105), (Value = (__int64 *)v106) == 0LL) )
    {
      v109 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      v110 = 76LL;
LABEL_230:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v110,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)v109);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v109, 0x3Eu, 0LL);
      v14 = v109;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v109, 0xD6u, 0LL);
      return v14;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v106);
  }
  v8 = Value + 4;
  v9 = detail::pointer_buffer_impl<CVisual *,0>::last(Value + 4);
  if ( (Value[4] & 3) == 0 )
    goto LABEL_211;
  if ( (Value[4] & 3) == 1 )
  {
    v10 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFCuLL);
    goto LABEL_206;
  }
  if ( (Value[4] & 3) != 2 )
  {
    if ( (Value[4] & 3) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_211:
    v10 = Value + 4;
    goto LABEL_206;
  }
  v10 = 0LL;
LABEL_206:
  while ( v10 != (_QWORD *)v9 && *v10 != a3 )
    ++v10;
  if ( v10 != (_QWORD *)detail::pointer_buffer_impl<CVisual *,0>::last(v8) )
  {
    v109 = -2147467260;
    v110 = 82LL;
    goto LABEL_230;
  }
  v11 = detail::pointer_buffer_impl<CVisual *,0>::last(v8);
  v12 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v8);
  *(_QWORD *)detail::vector_facade<void const *,detail::pointer_buffer_impl<void const *,0>>::reserve_region(
               v8,
               (__int64)(v11 - v12) >> 3) = a3;
  detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v8);
  a2 = v116;
LABEL_9:
  v13 = (__int64 *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  v14 = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v15 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  v16 = 64LL;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v15 + 102) & 0x20) == 0 && v15 != a2 )
    {
      v17 = a1;
      goto LABEL_26;
    }
    v17 = a1;
    LOBYTE(v119) = 0;
    v18 = *(_QWORD *)(a1 + 56);
    if ( !v18 )
      goto LABEL_15;
    v19 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 192LL))(*(_QWORD *)(a1 + 56));
    v20 = (int **)(v15 + 224);
    if ( !v19 )
    {
      v51 = *v20;
      if ( **v20 >= 0 )
      {
        v22 = (unsigned int **)(v15 + 224);
        goto LABEL_61;
      }
      v52 = (unsigned int)v51[1];
      v53 = v51 + 2;
      v54 = 0LL;
      if ( (_DWORD)v52 )
      {
        while ( *v53 != 1 )
        {
          v54 = (unsigned int)(v54 + 1);
          ++v53;
          if ( (unsigned int)v54 >= (unsigned int)v52 )
            goto LABEL_177;
        }
      }
      else
      {
LABEL_177:
        if ( (unsigned int)v54 >= (unsigned int)v52 )
        {
          v55 = 0LL;
LABEL_58:
          v56 = *v55;
          v22 = (unsigned int **)(v15 + 224);
          if ( v56 )
          {
            for ( i = (_QWORD *)*v56; ; i = (_QWORD *)*i )
            {
              v22 = (unsigned int **)(v15 + 224);
              if ( i == v56 )
                break;
              v21 = i - 44;
              if ( i[4] == v18 )
                goto LABEL_14;
            }
          }
LABEL_61:
          v58 = *v22;
          v59 = **v22;
          if ( (v59 & 0x10000000) == 0 )
            goto LABEL_62;
          v93 = v58[1];
          v94 = v58 + 2;
          v95 = 0LL;
          if ( (_DWORD)v93 )
          {
            while ( *v94 != 4 )
            {
              v95 = (unsigned int)(v95 + 1);
              ++v94;
              if ( (unsigned int)v95 >= (unsigned int)v93 )
                goto LABEL_195;
            }
          }
          else
          {
LABEL_195:
            if ( (unsigned int)v95 >= (unsigned int)v93 )
            {
              v96 = 0LL;
LABEL_182:
              v62 = *v96;
              if ( v62 )
              {
                *v58 = v59 & 0xEFFFFFFF;
                v97 = 0LL;
                if ( (_DWORD)v93 )
                {
                  while ( *((_BYTE *)v58 + v97 + 8) != 4 )
                  {
                    v97 = (unsigned int)(v97 + 1);
                    if ( (unsigned int)v97 >= (unsigned int)v93 )
                      goto LABEL_186;
                  }
                  *((_BYTE *)v58 + v97 + 8) = 0;
                }
LABEL_186:
                v63 = *v62;
                goto LABEL_187;
              }
LABEL_62:
              ProcessHeap = GetProcessHeap();
              v61 = (CTreeData *)HeapAlloc(ProcessHeap, 0, 0x188uLL);
              if ( !v61 )
                ModuleFailFastForHRESULT(-2147024882, retaddr);
              CTreeData::CTreeData(v61);
              v63 = &CVisualTreeData::`vftable';
              *v62 = &CVisualTreeData::`vftable';
              v62[48] = 0LL;
LABEL_187:
              ((void (__fastcall *)(void ***, __int64, __int64))v63[1])(v62, v18, v15);
              goto LABEL_15;
            }
          }
          v96 = (void ****)((char *)&v58[2 * v95] + ((v93 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
          goto LABEL_182;
        }
      }
      v55 = (_QWORD **)((char *)&v51[2 * v54] + ((v52 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
      goto LABEL_58;
    }
    v21 = (_QWORD *)(v15 + 320);
LABEL_14:
    v22 = (unsigned int **)(v15 + 224);
    if ( !v21 )
      goto LABEL_61;
LABEL_15:
    v23 = CDrawingContext::PreSubgraph(v4, *(const struct CVisualTree **)(a1 + 56), (bool *)va);
    v14 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0xF2u, 0LL);
      v89 = -2147024882;
      goto LABEL_170;
    }
    if ( !(_BYTE)v119 )
      goto LABEL_25;
    v24 = *v13;
    v25 = *(_QWORD *)(*v13 + 80);
    v26 = v25 & 3;
    if ( (v25 & 3) != 0 )
    {
      if ( (*(_DWORD *)(*v13 + 80) & 3) == 1LL )
      {
        v27 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_69:
        v28 = *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
LABEL_70:
        v31 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_71;
      }
      if ( (*(_DWORD *)(*v13 + 80) & 3) == 2LL )
      {
        v27 = 0LL;
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(*v13 + 80) & 3) != 3LL )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v27 = v24 + 80;
    if ( (v25 & 3) == 0 )
    {
      v28 = 1LL;
      goto LABEL_85;
    }
    if ( v26 == 1 )
      goto LABEL_69;
    if ( (unsigned __int64)(v26 - 2) >= 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_21:
    v28 = 0LL;
    v29 = v26 - 1;
    if ( !v29 )
      goto LABEL_70;
    v30 = v29 - 1;
    if ( !v30 )
    {
      v31 = 0LL;
      goto LABEL_71;
    }
    if ( v30 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_85:
    v31 = v24 + 80;
LABEL_71:
    v64 = (__int64)(v27 + 8 * v28 - v31) >> 3;
    if ( !(_DWORD)v64 )
      break;
    v65 = *(unsigned int *)(a1 + 40);
    *(_QWORD *)&v113 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v113 + 1) = *(unsigned int *)(a1 + 24);
    v66 = *(unsigned int *)(a1 + 44);
    if ( (_DWORD)v65 == (_DWORD)v66 )
    {
      v89 = -2147024882;
      if ( (unsigned __int64)(2 * v66) > 0xFFFFFFFF )
      {
        v98 = 98LL;
        goto LABEL_199;
      }
      v99 = 64;
      if ( (unsigned int)(2 * v66) > 0x40 )
        v99 = 2 * v66;
      v100 = 16 * v65;
      if ( (unsigned __int64)(16 * v65) > 0xFFFFFFFF )
      {
        v98 = 101LL;
        v16 = 64LL;
LABEL_199:
        v14 = -2147024362;
LABEL_200:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v98,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v14);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v14);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x87u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x100u, 0LL);
        goto LABEL_170;
      }
      if ( 0xFFFFFFFFFFFFFFFFuLL / v99 <= 0x10 )
      {
        v14 = -2147024809;
        goto LABEL_216;
      }
      v101 = MIDL_user_allocate(16LL * v99);
      v102 = v101;
      if ( !v101 )
      {
        v89 = -2147024882;
        v14 = -2147024882;
LABEL_216:
        v98 = 104LL;
        v16 = 64LL;
        goto LABEL_200;
      }
      memcpy_0(v101, *(const void **)(a1 + 32), v100);
      operator delete(*(void **)(a1 + 32));
      *(_QWORD *)(a1 + 32) = v102;
      v17 = a1;
      *(_DWORD *)(a1 + 44) = v99;
    }
    *(_OWORD *)(*(_QWORD *)(v17 + 32) + 16LL * (unsigned int)(*(_DWORD *)(v17 + 40))++) = v113;
    v67 = *(_DWORD *)(v17 + 52);
    if ( v67 <= *(_DWORD *)(v17 + 40) )
      v67 = *(_DWORD *)(v17 + 40);
    v14 = 0;
    *(_DWORD *)(v17 + 52) = v67;
    if ( *(_DWORD *)(v17 + 28) == 1 )
      v68 = 0LL;
    else
      v68 = (unsigned int)(v64 - 1);
    *(_DWORD *)(v17 + 24) = v68;
    v69 = *v13;
    v70 = *(_QWORD *)(*v13 + 80);
    v71 = v70 & 3;
    if ( (v70 & 3) != 0 )
    {
      if ( (*(_DWORD *)(*v13 + 80) & 3) == 1LL )
      {
        v72 = v70 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_115:
        v73 = *(_QWORD *)((v70 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
LABEL_116:
        v74 = v70 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_117;
      }
      if ( (*(_DWORD *)(*v13 + 80) & 3) == 2LL )
      {
        v72 = 0LL;
        goto LABEL_81;
      }
      if ( (*(_DWORD *)(*v13 + 80) & 3) != 3LL )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v72 = v69 + 80;
    if ( (v70 & 3) == 0 )
    {
      v73 = 1LL;
      goto LABEL_128;
    }
    if ( v71 == 1 )
      goto LABEL_115;
    if ( (unsigned __int64)(v71 - 2) >= 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_81:
    v73 = 0LL;
    if ( v71 == 1 )
      goto LABEL_116;
    if ( v71 == 2 )
    {
      v74 = 0LL;
      goto LABEL_117;
    }
LABEL_128:
    v74 = v69 + 80;
LABEL_117:
    if ( (__int64)(v72 + 8 * v73 - v74) >> 3 > (unsigned __int64)(unsigned int)v68 )
    {
      if ( (v70 & 3) == 0 )
        goto LABEL_132;
      v84 = v71 - 1;
      if ( v84 )
      {
        v85 = v84 - 1;
        if ( v85 )
        {
          if ( v85 != 1 )
            ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_132:
          v86 = v69 + 80;
        }
        else
        {
          v86 = 0LL;
        }
      }
      else
      {
        v86 = v70 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      v87 = *(_QWORD *)(v86 + 8 * v68);
      goto LABEL_134;
    }
    v87 = 0LL;
LABEL_134:
    v17 = a1;
    *v13 = v87;
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v69;
    v16 = 64LL;
    if ( !v87 )
      goto LABEL_25;
    v15 = v87;
LABEL_136:
    v4 = v118;
    a2 = v116;
  }
  v14 = 1;
LABEL_25:
  a2 = v116;
LABEL_26:
  v32 = v118;
  v33 = (__int64 *)(v17 + 16);
  while ( 2 )
  {
    v34 = (*(_BYTE *)(v15 + 102) & 0x20) == 0;
    v35 = 1;
    v117 = 1;
    if ( !v34 || v15 == a2 )
    {
      v14 = CDrawingContext::PostSubgraph(v32, *(const struct CVisualTree **)(v17 + 56), &v117);
      v33 = (__int64 *)(v17 + 16);
      if ( (v14 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x11Eu, 0LL);
        v89 = -2147024882;
        goto LABEL_170;
      }
      v35 = v117;
    }
    if ( !v35 )
      goto LABEL_45;
    v36 = *v33;
    if ( !*v33 )
      goto LABEL_43;
    v37 = *(_DWORD *)(v17 + 28);
    if ( v37 != 1 )
    {
      if ( !v37 && *(_DWORD *)(v17 + 24) )
        goto LABEL_95;
      goto LABEL_43;
    }
    v38 = *(_DWORD *)(v17 + 24);
    if ( v38 == -1 )
    {
LABEL_43:
      v14 = 1;
      goto LABEL_44;
    }
    v39 = *(_QWORD *)(v36 + 80);
    v40 = v39 & 3;
    if ( (v39 & 3) == 0 )
      goto LABEL_139;
    if ( (*(_DWORD *)(v36 + 80) & 3) == 1LL )
    {
      v41 = v39 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_92:
      v42 = *(_QWORD *)((v39 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
LABEL_93:
      v45 = v39 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_94;
    }
    if ( (*(_DWORD *)(v36 + 80) & 3) == 2LL )
    {
      v41 = 0LL;
      goto LABEL_38;
    }
    if ( (*(_DWORD *)(v36 + 80) & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_139:
    v41 = v36 + 80;
    if ( (v39 & 3) == 0 )
    {
      v42 = 1LL;
      goto LABEL_144;
    }
    if ( v40 == 1 )
      goto LABEL_92;
    if ( (unsigned __int64)(v40 - 2) >= 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_38:
    v42 = 0LL;
    v43 = v40 - 1;
    if ( !v43 )
      goto LABEL_93;
    v44 = v43 - 1;
    if ( !v44 )
    {
      v45 = 0LL;
      goto LABEL_94;
    }
    if ( v44 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_144:
    v45 = v36 + 80;
LABEL_94:
    if ( v38 + 1 >= (unsigned int)((__int64)(v41 + 8 * v42 - v45) >> 3) )
      goto LABEL_43;
LABEL_95:
    v75 = *(_DWORD *)(v17 + 24);
    v76 = v36 + 80;
    v77 = *(_QWORD *)(v36 + 80);
    v78 = (unsigned int)(v75 + 1);
    if ( v37 != 1 )
      v78 = (unsigned int)(v75 - 1);
    v79 = *(_QWORD *)(v36 + 80) & 3LL;
    if ( (v77 & 3) == 0 )
      goto LABEL_149;
    if ( (*(_QWORD *)(v36 + 80) & 3LL) == 1 )
    {
      v80 = v77 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_106:
      v81 = *(_QWORD *)((v77 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
      goto LABEL_107;
    }
    if ( (*(_QWORD *)(v36 + 80) & 3LL) == 2 )
    {
      v80 = 0LL;
      goto LABEL_101;
    }
    if ( (*(_QWORD *)(v36 + 80) & 3LL) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_149:
    v80 = v36 + 80;
    if ( (v77 & 3) == 0 )
    {
      v81 = 1LL;
      goto LABEL_108;
    }
    if ( v79 == 1 )
      goto LABEL_106;
    if ( (unsigned __int64)(v79 - 2) >= 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_101:
    v81 = 0LL;
    if ( (v77 & 3) != 0 )
    {
      v82 = v79 - 1;
      if ( v82 )
      {
        v83 = v82 - 1;
        if ( v83 )
        {
          if ( v83 != 1 )
            ModuleFailFastForHRESULT(-2147418113, retaddr);
        }
        else
        {
          v76 = 0LL;
        }
        goto LABEL_108;
      }
LABEL_107:
      v76 = v77 & 0xFFFFFFFFFFFFFFFCuLL;
    }
LABEL_108:
    if ( (__int64)(v80 + 8 * v81 - v76) >> 3 <= (unsigned __int64)(unsigned int)v78 )
    {
      v15 = 0LL;
    }
    else
    {
      if ( (v77 & 3) == 0 )
        goto LABEL_158;
      switch ( *(_QWORD *)(v36 + 80) & 3LL )
      {
        case 1LL:
          v88 = v77 & 0xFFFFFFFFFFFFFFFCuLL;
          break;
        case 2LL:
          v88 = 0LL;
          break;
        case 3LL:
LABEL_158:
          v88 = v36 + 80;
          break;
        default:
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      v15 = *(_QWORD *)(v88 + 8 * v78);
    }
    v14 = 0;
    *v13 = v15;
    *(_DWORD *)(v17 + 24) = v78;
    if ( v15 )
      goto LABEL_136;
LABEL_44:
    v33 = (__int64 *)(v17 + 16);
LABEL_45:
    if ( *(_DWORD *)(v17 + 4) )
    {
      v46 = *(_DWORD *)(v17 + 40);
      v47 = 0LL;
      v48 = 0;
      if ( v46 )
      {
        v49 = (unsigned int)(v46 - 1);
        *(_DWORD *)(v17 + 40) = v49;
        v50 = *(__m128i *)(*(_QWORD *)(v17 + 32) + 16 * v49);
        v33 = (__int64 *)(v17 + 16);
        v47 = *(_QWORD *)(*(_QWORD *)(v17 + 32) + 16 * v49);
        v48 = _mm_cvtsi128_si32(_mm_srli_si128(v50, 8));
      }
      v15 = *v33;
      *v33 = v47;
      --*(_DWORD *)(v17 + 4);
      *v13 = v15;
      *(_DWORD *)(v17 + 24) = v48;
      if ( v15 )
      {
        a2 = v116;
        continue;
      }
    }
    break;
  }
  v89 = -2147024882;
  if ( v14 == 1 )
    v14 = 0;
LABEL_170:
  if ( a3 )
  {
    v90 = (char *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( v90 )
      goto LABEL_172;
    v103 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( v103 && (v104 = CThreadContext::CThreadContext(v103), (v90 = (char *)v104) != 0LL) )
    {
      TlsSetValue(CThreadContext::s_dwTlsIndex, v104);
LABEL_172:
      detail::vector_facade<void const *,detail::pointer_buffer_impl<void const *,0>>::pop_back(v90 + 32);
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
  v91 = *(_DWORD *)(a1 + 48);
  if ( v91 != 10 )
  {
    *(_DWORD *)(a1 + 48) = v91 + 1;
    return v14;
  }
  if ( *(_DWORD *)(a1 + 52) > 0x40u )
    v16 = *(unsigned int *)(a1 + 52);
  if ( (unsigned __int64)(3 * v16) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
LABEL_192:
    *(_QWORD *)(a1 + 48) = 0LL;
    return v14;
  }
  if ( (unsigned int)(3 * v16) > *(_DWORD *)(a1 + 44) )
    goto LABEL_192;
  if ( !(_DWORD)v16 || 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v16 <= 0x10 )
  {
    v89 = -2147024809;
    goto LABEL_228;
  }
  v107 = GetProcessHeap();
  v108 = HeapAlloc(v107, 0, 16LL * (unsigned int)v16);
  if ( !v108 )
  {
LABEL_228:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v89, 0x11Eu, 0LL);
    goto LABEL_192;
  }
  v111 = *(void **)(a1 + 32);
  if ( v111 )
  {
    v112 = GetProcessHeap();
    HeapFree(v112, 0, v111);
  }
  *(_QWORD *)(a1 + 32) = v108;
  *(_DWORD *)(a1 + 44) = v16;
  *(_QWORD *)(a1 + 48) = 0LL;
  return v14;
}
