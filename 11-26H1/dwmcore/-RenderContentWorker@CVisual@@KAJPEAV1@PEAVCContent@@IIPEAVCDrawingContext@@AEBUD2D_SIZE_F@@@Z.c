/*
 * XREFs of ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18007A6F0
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180079CF0 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180079E90 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18001E070 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18001E494 (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18001E878 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800796A8 (--0-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$emplace@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18007A668 (--$emplace@IIV-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@-$vector_facade@UC.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::RenderContentWorker(
        struct CVisual *a1,
        struct CContent *a2,
        int a3,
        __int64 a4,
        struct CDrawingContext *a5,
        const struct D2D_SIZE_F *a6)
{
  volatile signed __int32 *v6; // rbx
  struct CContent *v7; // r12
  struct CDrawingContext *v9; // r14
  __int64 v10; // rsi
  int v11; // r15d
  char *v12; // rdi
  __int64 v13; // rsi
  __int64 *v14; // r13
  __int64 v15; // rdi
  int v16; // r12d
  int v17; // eax
  volatile signed __int32 *v18; // rdi
  __int64 v19; // rbx
  unsigned int v20; // esi
  int v21; // eax
  int v22; // edi
  int v23; // edi
  __int64 v25; // r15
  volatile signed __int32 *v26; // rdi
  int v27; // esi
  int v28; // esi
  __int64 v29; // rdx
  __int64 v30; // rax
  _BYTE *v31; // r8
  __int64 v32; // rcx
  _QWORD **v33; // rcx
  _QWORD *v34; // rcx
  _QWORD *i; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rbx
  unsigned int v41; // [rsp+20h] [rbp-68h]
  __int64 v42; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int32 *v43; // [rsp+38h] [rbp-50h] BYREF
  __int64 v44; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v6 = 0LL;
  v7 = a2;
  v9 = a5;
  if ( !*((_BYTE *)a5 + 8067) )
    goto LABEL_20;
  v10 = *((_QWORD *)a5 + 993);
  v11 = -2003292412;
  a5 = (struct CDrawingContext *)*((_QWORD *)a5 + 3);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 192LL))(v10) )
  {
    v12 = (char *)a1 + 320;
LABEL_4:
    if ( v12 )
    {
      v13 = *((_QWORD *)v12 + 3);
      v14 = (__int64 *)(v12 + 16);
      v15 = *((_QWORD *)v12 + 2);
      v16 = 0;
      while ( 1 )
      {
        if ( v15 == v13 )
          goto LABEL_7;
        if ( *(_DWORD *)v15 == a3 && !*(_DWORD *)(v15 + 4) )
        {
          v25 = *(_QWORD *)(v15 + 8);
          if ( !*(_QWORD *)((*(__int64 (__fastcall **)(struct CDrawingContext *))(*(_QWORD *)a5 + 40LL))(a5) + 568)
            || *(_BYTE *)(v25 + 85)
            || !*(_QWORD *)(v25 + 24) )
          {
            break;
          }
        }
        v15 += 16LL;
      }
      v18 = *(volatile signed __int32 **)(v15 + 8);
      if ( v18 )
      {
        if ( _InterlockedAdd(v18 + 2, 1u) <= 0 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v41);
        goto LABEL_15;
      }
LABEL_7:
      a5 = 0LL;
      v17 = CDrawListCache::InternalCreate(0, &a5);
      v16 = v17;
      v11 = v17;
      if ( v17 >= 0 )
      {
        v18 = (volatile signed __int32 *)a5;
        if ( *((_BYTE *)a5 + 85) || !*((_QWORD *)a5 + 3) )
        {
          CMILRefCountImpl::AddReference((struct CDrawingContext *)((char *)a5 + 8));
          v43 = 0LL;
          a5 = (struct CDrawingContext *)v18;
          v36 = detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
                  v14,
                  0LL);
          *(_DWORD *)v36 = a3;
          *(_DWORD *)(v36 + 4) = 0;
          wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::com_ptr_t<CDrawListCache,wil::err_returncode_policy>(
            (__int64 *)(v36 + 8),
            (__int64 *)&a5);
          wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&a5);
        }
        else
        {
          CMILRefCountImpl::AddReference((struct CDrawingContext *)((char *)a5 + 8));
          v42 = v14[1];
          v43 = 0LL;
          a5 = (struct CDrawingContext *)v18;
          detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace<unsigned int,unsigned int,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
            v14,
            &v44,
            &v42,
            a3,
            0,
            (volatile signed __int32 **)&a5);
        }
        wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v43);
LABEL_15:
        v19 = *v14;
        if ( (unsigned __int64)((v14[1] - *v14) >> 4) > 1 )
        {
          v37 = *v14;
          while ( v19 != v14[1] )
          {
            v38 = *(_QWORD *)(v19 + 8);
            if ( (volatile signed __int32 *)v38 == v18 )
              goto LABEL_74;
            v39 = 0LL;
            if ( g_pComposition )
              v39 = *((_QWORD *)g_pComposition + 110);
            if ( (unsigned __int64)(v39 - *(_QWORD *)(v38 + 16)) <= 0x1E )
            {
LABEL_74:
              v19 += 16LL;
            }
            else
            {
              v40 = (v19 - v37) >> 4;
              detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
                v14,
                v40,
                1LL);
              v37 = *v14;
              v19 = *v14 + 16 * v40;
            }
          }
        }
        v6 = v18;
        goto LABEL_17;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x1Cu, 0LL);
      v26 = (volatile signed __int32 *)a5;
      if ( a5 )
      {
        v27 = _InterlockedDecrement((volatile signed __int32 *)a5 + 2);
        if ( v27 < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v41);
        if ( !v27 )
        {
          if ( _InterlockedAdd(v26 + 2, 1u) <= 0 )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x18,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v41);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 24LL))(v26);
          v28 = _InterlockedDecrement(v26 + 2);
          if ( v28 < -1 )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x26,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v41);
          if ( !v28 )
          {
            if ( _InterlockedDecrement(v26 + 2) < -1 )
              wil::details::in1diag3::Log_Hr(
                retaddr,
                (void *)0x26,
                (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                (const char *)0x8007029CLL,
                v41);
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v26 + 16LL))(v26, 1LL);
            v20 = v16;
            goto LABEL_53;
          }
        }
      }
LABEL_17:
      v11 = v16;
      v20 = v16;
      if ( v16 >= 0 )
      {
        v7 = a2;
        goto LABEL_19;
      }
LABEL_53:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x6C8u, 0LL);
      goto LABEL_54;
    }
    goto LABEL_19;
  }
  v29 = *((_QWORD *)a1 + 28);
  if ( *(int *)v29 < 0 )
  {
    v30 = *(unsigned int *)(v29 + 4);
    v31 = (_BYTE *)(v29 + 8);
    v32 = 0LL;
    if ( (_DWORD)v30 )
    {
      while ( *v31 != 1 )
      {
        v32 = (unsigned int)(v32 + 1);
        ++v31;
        if ( (unsigned int)v32 >= (unsigned int)v30 )
          goto LABEL_65;
      }
    }
    else
    {
LABEL_65:
      if ( (unsigned int)v32 >= (unsigned int)v30 )
      {
        v33 = 0LL;
LABEL_59:
        v34 = *v33;
        if ( v34 )
        {
          for ( i = (_QWORD *)*v34; i != v34; i = (_QWORD *)*i )
          {
            v12 = (char *)(i - 44);
            if ( i[4] == v10 )
              goto LABEL_4;
          }
        }
        goto LABEL_19;
      }
    }
    v33 = (_QWORD **)(v29 + ((v30 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v32);
    goto LABEL_59;
  }
LABEL_19:
  v20 = v11;
  if ( v11 < 0 )
  {
LABEL_54:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2F50, 3u, v11, 0xF4Du, 0LL);
    goto LABEL_22;
  }
LABEL_20:
  v21 = (*(__int64 (__fastcall **)(struct CContent *, struct CDrawingContext *, const struct D2D_SIZE_F *, volatile signed __int32 *))(*(_QWORD *)v7 + 208LL))(
          v7,
          v9,
          a6,
          v6);
  v20 = v21;
  if ( v21 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2F50, 3u, v21, 0xF52u, 0LL);
LABEL_22:
  if ( v6 )
  {
    v22 = _InterlockedDecrement(v6 + 2);
    if ( v22 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v41);
    if ( !v22 )
    {
      if ( _InterlockedAdd(v6 + 2, 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v41);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 24LL))(v6);
      v23 = _InterlockedDecrement(v6 + 2);
      if ( v23 < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v41);
      if ( !v23 )
      {
        if ( _InterlockedDecrement(v6 + 2) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v41);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 16LL))(v6, 1LL);
      }
    }
  }
  return v20;
}
