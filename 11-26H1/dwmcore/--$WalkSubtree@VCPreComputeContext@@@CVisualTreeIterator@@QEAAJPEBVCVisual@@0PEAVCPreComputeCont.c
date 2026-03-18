/*
 * XREFs of ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800A0850
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18008D838 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?last@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ @ 0x180018840 (-last@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@PEBXV?$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAPEAPEBX_K0@Z @ 0x18009FA24 (-reserve_region@-$vector_facade@PEBXV-$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAPEAPEBX.c)
 *     ?pop_back@?$vector_facade@PEBXV?$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@QEAAXXZ @ 0x1800A007C (-pop_back@-$vector_facade@PEBXV-$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@QEAAXXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180260224 (--0CTreeData@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        CPreComputeContext *a4,
        ...)
{
  CPreComputeContext *v4; // rbp
  __int64 *Value; // rbx
  __int64 *v8; // rsi
  unsigned __int64 v9; // rax
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  void *v13; // r8
  __int64 *v14; // r13
  unsigned int v15; // ebx
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rbx
  char v20; // al
  int **v21; // rdx
  _QWORD *v22; // rax
  unsigned int **v23; // rcx
  int v24; // eax
  CPreComputeContext *v25; // r12
  __int64 *v26; // rcx
  bool v27; // al
  int v28; // eax
  int v29; // r8d
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rcx
  __m128i v33; // xmm1
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // r8
  __int64 v38; // rbp
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rbx
  int v43; // r9d
  int v44; // r11d
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  int *v52; // r9
  __int64 v53; // r8
  _BYTE *v54; // rax
  __int64 v55; // rcx
  _QWORD **v56; // r9
  _QWORD *v57; // r9
  _QWORD *i; // r8
  unsigned int *v59; // rdx
  unsigned int v60; // r9d
  HANDLE ProcessHeap; // rax
  CTreeData *v62; // rcx
  void ***v63; // rcx
  void **v64; // rax
  __int64 v65; // rbp
  __int64 v66; // rcx
  __int64 v67; // rax
  unsigned int v68; // eax
  unsigned int v69; // ebp
  __int64 v70; // r15
  __int64 v71; // r11
  __int64 v72; // rcx
  unsigned __int64 v73; // r8
  __int64 v74; // r9
  unsigned __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rcx
  int v78; // eax
  unsigned __int64 v79; // rdx
  __int64 v80; // rsi
  __int64 v81; // r10
  __int64 v82; // rax
  unsigned __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rax
  unsigned __int64 v87; // r11
  __int64 v88; // rax
  unsigned __int64 v89; // rsi
  __int64 v90; // r8
  _BYTE *v91; // rax
  __int64 v92; // rcx
  void ****v93; // rcx
  __int64 v94; // r9
  int v95; // r14d
  __int64 *v96; // rdi
  int v97; // eax
  __int64 v99; // rdx
  unsigned int v100; // ebx
  unsigned int v101; // r15d
  HANDLE v102; // rax
  void *v103; // rax
  void *v104; // r14
  CThreadContext *v105; // rax
  CThreadContext *v106; // rax
  CThreadContext *v107; // rax
  CThreadContext *v108; // rax
  HANDLE v109; // rax
  LPVOID v110; // rsi
  unsigned int v111; // edi
  __int64 v112; // rdx
  void *v113; // rdi
  HANDLE v114; // rax
  __int128 v115; // [rsp+40h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v118; // [rsp+A8h] [rbp+10h]
  bool v119; // [rsp+B0h] [rbp+18h] BYREF
  CPreComputeContext *v120; // [rsp+B8h] [rbp+20h]
  __int64 v121; // [rsp+C0h] [rbp+28h] BYREF
  va_list va; // [rsp+C0h] [rbp+28h]
  va_list va1; // [rsp+C8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v121 = va_arg(va1, _QWORD);
  v120 = a4;
  v118 = a2;
  *(_DWORD *)(a1 + 64) = 1;
  v4 = a4;
  if ( !a3 )
    goto LABEL_9;
  Value = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v107 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v107 || (v108 = CThreadContext::CThreadContext(v107), (Value = (__int64 *)v108) == 0LL) )
    {
      v111 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      v112 = 76LL;
LABEL_230:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v112,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)v111);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v111, 0x3Eu, 0LL);
      v15 = v111;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v111, 0xD6u, 0LL);
      return v15;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v108);
  }
  v8 = Value + 4;
  v9 = detail::pointer_buffer_impl<CVisual *,0>::last(Value + 4);
  if ( (Value[4] & 3) == 0 )
    goto LABEL_215;
  if ( (Value[4] & 3) == 1 )
  {
    v10 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFCuLL);
    goto LABEL_210;
  }
  if ( (Value[4] & 3) != 2 )
  {
    if ( (Value[4] & 3) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_215:
    v10 = Value + 4;
    goto LABEL_210;
  }
  v10 = 0LL;
LABEL_210:
  while ( v10 != (_QWORD *)v9 && *v10 != a3 )
    ++v10;
  if ( v10 != (_QWORD *)detail::pointer_buffer_impl<CVisual *,0>::last(v8) )
  {
    v111 = -2147467260;
    v112 = 82LL;
    goto LABEL_230;
  }
  v11 = detail::pointer_buffer_impl<CVisual *,0>::last(v8);
  v12 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v8);
  *(_QWORD *)detail::vector_facade<void const *,detail::pointer_buffer_impl<void const *,0>>::reserve_region(
               v8,
               (__int64)(v11 - v12) >> 3,
               v13) = a3;
  detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v8);
  a2 = v118;
LABEL_9:
  v14 = (__int64 *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  v15 = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v16 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  v17 = 64LL;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v16 + 102) & 0x20) == 0 && v16 != a2 )
    {
      v18 = a1;
      goto LABEL_18;
    }
    v18 = a1;
    LOBYTE(v121) = 0;
    v19 = *(_QWORD *)(a1 + 56);
    if ( !v19 )
      goto LABEL_15;
    v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 192LL))(*(_QWORD *)(a1 + 56));
    v21 = (int **)(v16 + 224);
    if ( !v20 )
    {
      v52 = *v21;
      if ( **v21 >= 0 )
      {
        v23 = (unsigned int **)(v16 + 224);
        goto LABEL_58;
      }
      v53 = (unsigned int)v52[1];
      v54 = v52 + 2;
      v55 = 0LL;
      if ( (_DWORD)v53 )
      {
        while ( *v54 != 1 )
        {
          v55 = (unsigned int)(v55 + 1);
          ++v54;
          if ( (unsigned int)v55 >= (unsigned int)v53 )
            goto LABEL_167;
        }
      }
      else
      {
LABEL_167:
        if ( (unsigned int)v55 >= (unsigned int)v53 )
        {
          v56 = 0LL;
LABEL_55:
          v57 = *v56;
          v23 = (unsigned int **)(v16 + 224);
          if ( v57 )
          {
            for ( i = (_QWORD *)*v57; ; i = (_QWORD *)*i )
            {
              v23 = (unsigned int **)(v16 + 224);
              if ( i == v57 )
                break;
              v22 = i - 44;
              if ( i[4] == v19 )
                goto LABEL_14;
            }
          }
LABEL_58:
          v59 = *v23;
          v60 = **v23;
          if ( (v60 & 0x10000000) == 0 )
            goto LABEL_59;
          v90 = v59[1];
          v91 = v59 + 2;
          v92 = 0LL;
          if ( (_DWORD)v90 )
          {
            while ( *v91 != 4 )
            {
              v92 = (unsigned int)(v92 + 1);
              ++v91;
              if ( (unsigned int)v92 >= (unsigned int)v90 )
                goto LABEL_188;
            }
          }
          else
          {
LABEL_188:
            if ( (unsigned int)v92 >= (unsigned int)v90 )
            {
              v93 = 0LL;
LABEL_172:
              v63 = *v93;
              if ( v63 )
              {
                *v59 = v60 & 0xEFFFFFFF;
                v94 = 0LL;
                if ( (_DWORD)v90 )
                {
                  while ( *((_BYTE *)v59 + v94 + 8) != 4 )
                  {
                    v94 = (unsigned int)(v94 + 1);
                    if ( (unsigned int)v94 >= (unsigned int)v90 )
                      goto LABEL_176;
                  }
                  *((_BYTE *)v59 + v94 + 8) = 0;
                }
LABEL_176:
                v64 = *v63;
                goto LABEL_177;
              }
LABEL_59:
              ProcessHeap = GetProcessHeap();
              v62 = (CTreeData *)HeapAlloc(ProcessHeap, 0, 0x188uLL);
              if ( !v62 )
                ModuleFailFastForHRESULT(-2147024882, retaddr);
              CTreeData::CTreeData(v62);
              v64 = &CVisualTreeData::`vftable';
              *v63 = &CVisualTreeData::`vftable';
              v63[48] = 0LL;
LABEL_177:
              ((void (__fastcall *)(void ***, __int64, __int64))v64[1])(v63, v19, v16);
              goto LABEL_15;
            }
          }
          v93 = (void ****)((char *)&v59[2 * v92] + ((v90 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
          goto LABEL_172;
        }
      }
      v56 = (_QWORD **)((char *)&v52[2 * v55] + ((v53 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
      goto LABEL_55;
    }
    v22 = (_QWORD *)(v16 + 320);
LABEL_14:
    v23 = (unsigned int **)(v16 + 224);
    if ( !v22 )
      goto LABEL_58;
LABEL_15:
    v24 = CPreComputeContext::PreSubgraph(v4, *(const struct CVisualTree **)(a1 + 56), (bool *)va);
    v15 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0xF2u, 0LL);
      v95 = -2147024882;
      goto LABEL_181;
    }
    if ( !(_BYTE)v121 )
      goto LABEL_17;
    v34 = *v14;
    v35 = *(_QWORD *)(*v14 + 80);
    v36 = v35 & 3;
    if ( (v35 & 3) != 0 )
    {
      if ( (*(_DWORD *)(*v14 + 80) & 3) == 1LL )
      {
        v37 = v35 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_66:
        v38 = *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
LABEL_67:
        v41 = v35 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_68;
      }
      if ( (*(_DWORD *)(*v14 + 80) & 3) == 2LL )
      {
        v37 = 0LL;
        goto LABEL_32;
      }
      if ( (*(_DWORD *)(*v14 + 80) & 3) != 3LL )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v37 = v34 + 80;
    if ( (v35 & 3) == 0 )
    {
      v38 = 1LL;
      goto LABEL_92;
    }
    if ( v36 == 1 )
      goto LABEL_66;
    if ( (unsigned __int64)(v36 - 2) >= 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_32:
    v38 = 0LL;
    v39 = v36 - 1;
    if ( !v39 )
      goto LABEL_67;
    v40 = v39 - 1;
    if ( !v40 )
    {
      v41 = 0LL;
      goto LABEL_68;
    }
    if ( v40 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_92:
    v41 = v34 + 80;
LABEL_68:
    v65 = (__int64)(v37 + 8 * v38 - v41) >> 3;
    if ( !(_DWORD)v65 )
      break;
    v66 = *(unsigned int *)(a1 + 40);
    *(_QWORD *)&v115 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v115 + 1) = *(unsigned int *)(a1 + 24);
    v67 = *(unsigned int *)(a1 + 44);
    if ( (_DWORD)v66 == (_DWORD)v67 )
    {
      v95 = -2147024882;
      if ( (unsigned __int64)(2 * v67) > 0xFFFFFFFF )
      {
        v99 = 98LL;
        goto LABEL_198;
      }
      v100 = 64;
      if ( (unsigned int)(2 * v67) > 0x40 )
        v100 = 2 * v67;
      v101 = 16 * v66;
      if ( (unsigned __int64)(16 * v66) > 0xFFFFFFFF )
      {
        v99 = 101LL;
        v17 = 64LL;
LABEL_198:
        v15 = -2147024362;
LABEL_199:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v99,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v15);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v15);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x87u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x100u, 0LL);
        goto LABEL_181;
      }
      if ( 0xFFFFFFFFFFFFFFFFuLL / v100 <= 0x10 )
      {
        v95 = -2147024882;
        v15 = -2147024809;
        goto LABEL_208;
      }
      v102 = GetProcessHeap();
      v103 = HeapAlloc(v102, 0, 16LL * v100);
      v104 = v103;
      if ( !v103 )
      {
        v95 = -2147024882;
        v15 = -2147024882;
LABEL_208:
        v99 = 104LL;
        v17 = 64LL;
        goto LABEL_199;
      }
      memcpy_0(v103, *(const void **)(a1 + 32), v101);
      operator delete(*(void **)(a1 + 32));
      *(_QWORD *)(a1 + 32) = v104;
      v18 = a1;
      *(_DWORD *)(a1 + 44) = v100;
    }
    v15 = 0;
    *(_OWORD *)(*(_QWORD *)(v18 + 32) + 16LL * (unsigned int)(*(_DWORD *)(v18 + 40))++) = v115;
    v68 = *(_DWORD *)(v18 + 52);
    if ( v68 <= *(_DWORD *)(v18 + 40) )
      v68 = *(_DWORD *)(v18 + 40);
    *(_DWORD *)(v18 + 52) = v68;
    if ( *(_DWORD *)(v18 + 28) == 1 )
      v69 = 0;
    else
      v69 = v65 - 1;
    *(_DWORD *)(v18 + 24) = v69;
    v70 = *v14;
    v71 = *(_QWORD *)(*v14 + 80);
    v72 = v71 & 3;
    if ( (v71 & 3) != 0 )
    {
      if ( (*(_DWORD *)(*v14 + 80) & 3) == 1LL )
      {
        v73 = v71 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_82:
        v74 = *(_QWORD *)((v71 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
LABEL_83:
        v75 = v71 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_84;
      }
      if ( (*(_DWORD *)(*v14 + 80) & 3) == 2LL )
      {
        v73 = 0LL;
        goto LABEL_78;
      }
      if ( (*(_DWORD *)(*v14 + 80) & 3) != 3LL )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v73 = v70 + 80;
    if ( (v71 & 3) == 0 )
    {
      v74 = 1LL;
      goto LABEL_127;
    }
    if ( v72 == 1 )
      goto LABEL_82;
    if ( (unsigned __int64)(v72 - 2) >= 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_78:
    v74 = 0LL;
    if ( v72 == 1 )
      goto LABEL_83;
    if ( v72 == 2 )
    {
      v75 = 0LL;
      goto LABEL_84;
    }
LABEL_127:
    v75 = v70 + 80;
LABEL_84:
    if ( (__int64)(v73 + 8 * v74 - v75) >> 3 > (unsigned __int64)v69 )
    {
      if ( (v71 & 3) == 0 )
        goto LABEL_131;
      v76 = v72 - 1;
      if ( v76 )
      {
        v77 = v76 - 1;
        if ( v77 )
        {
          if ( v77 != 1 )
            ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_131:
          v87 = v70 + 80;
        }
        else
        {
          v87 = 0LL;
        }
      }
      else
      {
        v87 = v71 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      v88 = *(_QWORD *)(v87 + 8LL * v69);
      goto LABEL_133;
    }
    v88 = 0LL;
LABEL_133:
    v18 = a1;
    *v14 = v88;
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v70;
    v17 = 64LL;
    if ( !v88 )
      goto LABEL_17;
    v16 = v88;
LABEL_138:
    v4 = v120;
    a2 = v118;
  }
  v15 = 1;
LABEL_17:
  a2 = v118;
LABEL_18:
  v25 = v120;
  v26 = (__int64 *)(v18 + 16);
  while ( 2 )
  {
    v27 = 1;
    v119 = 1;
    if ( (*(_BYTE *)(v16 + 102) & 0x20) != 0 || v16 == a2 )
    {
      v28 = CPreComputeContext::PostSubgraph(v25, *(const struct CVisualTree **)(v18 + 56), &v119);
      v26 = (__int64 *)(v18 + 16);
      v15 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x11Eu, 0LL);
        v95 = -2147024882;
        goto LABEL_181;
      }
      v27 = v119;
    }
    if ( !v27 )
      goto LABEL_23;
    v42 = *v26;
    if ( !*v26 )
      goto LABEL_47;
    v43 = *(_DWORD *)(v18 + 28);
    if ( v43 != 1 )
    {
      if ( !v43 && *(_DWORD *)(v18 + 24) )
        goto LABEL_104;
      goto LABEL_47;
    }
    v44 = *(_DWORD *)(v18 + 24);
    if ( v44 == -1 )
    {
LABEL_47:
      v15 = 1;
      goto LABEL_48;
    }
    v45 = *(_QWORD *)(v42 + 80);
    v46 = v45 & 3;
    if ( (v45 & 3) == 0 )
      goto LABEL_142;
    if ( (*(_DWORD *)(v42 + 80) & 3) == 1LL )
    {
      v47 = v45 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_101:
      v48 = *(_QWORD *)((v45 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
LABEL_102:
      v51 = v45 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_103;
    }
    if ( (*(_DWORD *)(v42 + 80) & 3) == 2LL )
    {
      v47 = 0LL;
      goto LABEL_42;
    }
    if ( (*(_DWORD *)(v42 + 80) & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_142:
    v47 = v42 + 80;
    if ( (v45 & 3) == 0 )
    {
      v48 = 1LL;
      goto LABEL_147;
    }
    if ( v46 == 1 )
      goto LABEL_101;
    if ( (unsigned __int64)(v46 - 2) >= 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_42:
    v48 = 0LL;
    v49 = v46 - 1;
    if ( !v49 )
      goto LABEL_102;
    v50 = v49 - 1;
    if ( !v50 )
    {
      v51 = 0LL;
      goto LABEL_103;
    }
    if ( v50 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_147:
    v51 = v42 + 80;
LABEL_103:
    if ( v44 + 1 >= (unsigned int)((__int64)(v47 + 8 * v48 - v51) >> 3) )
      goto LABEL_47;
LABEL_104:
    v78 = *(_DWORD *)(v18 + 24);
    v79 = v42 + 80;
    v80 = *(_QWORD *)(v42 + 80);
    v81 = (unsigned int)(v78 + 1);
    if ( v43 != 1 )
      v81 = (unsigned int)(v78 - 1);
    v82 = v80 & 3;
    switch ( v80 & 3 )
    {
      case 0LL:
        goto LABEL_154;
      case 1LL:
        v83 = v80 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_114:
        v84 = *(_QWORD *)((v80 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
LABEL_115:
        v79 = v80 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_116;
      case 2LL:
        v83 = 0LL;
        goto LABEL_110;
    }
    if ( (v80 & 3) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_154:
    v83 = v42 + 80;
    if ( (v80 & 3) == 0 )
    {
      v84 = 1LL;
      goto LABEL_116;
    }
    if ( v82 == 1 )
      goto LABEL_114;
    if ( (unsigned __int64)(v82 - 2) >= 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_110:
    v84 = 0LL;
    v85 = v82 - 1;
    if ( !v85 )
      goto LABEL_115;
    v86 = v85 - 1;
    if ( v86 )
    {
      if ( v86 != 1 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    else
    {
      v79 = 0LL;
    }
LABEL_116:
    if ( (__int64)(v83 + 8 * v84 - v79) >> 3 <= (unsigned __int64)(unsigned int)v81 )
    {
      v16 = 0LL;
    }
    else
    {
      switch ( v80 & 3 )
      {
        case 0LL:
          goto LABEL_135;
        case 1LL:
          v89 = v80 & 0xFFFFFFFFFFFFFFFCuLL;
          break;
        case 2LL:
          v89 = 0LL;
          break;
        case 3LL:
LABEL_135:
          v89 = v42 + 80;
          break;
        default:
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      v16 = *(_QWORD *)(v89 + 8 * v81);
    }
    v15 = 0;
    *v14 = v16;
    *(_DWORD *)(v18 + 24) = v81;
    if ( v16 )
      goto LABEL_138;
LABEL_48:
    v26 = (__int64 *)(v18 + 16);
LABEL_23:
    if ( *(_DWORD *)(v18 + 4) )
    {
      v29 = *(_DWORD *)(v18 + 40);
      v30 = 0LL;
      v31 = 0;
      if ( v29 )
      {
        v32 = (unsigned int)(v29 - 1);
        *(_DWORD *)(v18 + 40) = v32;
        v33 = *(__m128i *)(*(_QWORD *)(v18 + 32) + 16 * v32);
        v26 = (__int64 *)(v18 + 16);
        v30 = v33.m128i_i64[0];
        v31 = _mm_cvtsi128_si32(_mm_srli_si128(v33, 8));
      }
      v16 = *v26;
      *v26 = v30;
      --*(_DWORD *)(v18 + 4);
      *v14 = v16;
      *(_DWORD *)(v18 + 24) = v31;
      if ( v16 )
      {
        a2 = v118;
        continue;
      }
    }
    break;
  }
  v95 = -2147024882;
  if ( v15 == 1 )
    v15 = 0;
LABEL_181:
  if ( a3 )
  {
    v96 = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( v96 )
      goto LABEL_183;
    v105 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( v105 && (v106 = CThreadContext::CThreadContext(v105), (v96 = (__int64 *)v106) != 0LL) )
    {
      TlsSetValue(CThreadContext::s_dwTlsIndex, v106);
LABEL_183:
      detail::vector_facade<void const *,detail::pointer_buffer_impl<void const *,0>>::pop_back(v96 + 4);
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
  v97 = *(_DWORD *)(a1 + 48);
  if ( v97 != 10 )
  {
    *(_DWORD *)(a1 + 48) = v97 + 1;
    return v15;
  }
  if ( *(_DWORD *)(a1 + 52) > 0x40u )
    v17 = *(unsigned int *)(a1 + 52);
  if ( (unsigned __int64)(3 * v17) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
LABEL_195:
    *(_QWORD *)(a1 + 48) = 0LL;
    return v15;
  }
  if ( (unsigned int)(3 * v17) > *(_DWORD *)(a1 + 44) )
    goto LABEL_195;
  if ( !(_DWORD)v17 || 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v17 <= 0x10 )
  {
    v95 = -2147024809;
    goto LABEL_228;
  }
  v109 = GetProcessHeap();
  v110 = HeapAlloc(v109, 0, 16LL * (unsigned int)v17);
  if ( !v110 )
  {
LABEL_228:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v95, 0x11Eu, 0LL);
    goto LABEL_195;
  }
  v113 = *(void **)(a1 + 32);
  if ( v113 )
  {
    v114 = GetProcessHeap();
    HeapFree(v114, 0, v113);
  }
  *(_QWORD *)(a1 + 32) = v110;
  *(_DWORD *)(a1 + 44) = v17;
  *(_QWORD *)(a1 + 48) = 0LL;
  return v15;
}
