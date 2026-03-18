/*
 * XREFs of ?GetDrawListCache@CVisual@@QEBAJIIPEBVCVisualTree@@PEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18007A150
 * Callers:
 *     ?GetDrawListCache@CWindowNode@@AEBAJPEAVCDrawingContext@@IPEAPEAVCDrawListCache@@@Z @ 0x18020284C (-GetDrawListCache@CWindowNode@@AEBAJPEAVCDrawingContext@@IPEAPEAVCDrawListCache@@@Z.c)
 *     ?GetBorderDrawListCacheForCurrentVisual@CDrawingContext@@QEBAJPEAPEAVCDrawListCache@@@Z @ 0x180205E10 (-GetBorderDrawListCacheForCurrentVisual@CDrawingContext@@QEBAJPEAPEAVCDrawListCache@@@Z.c)
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

__int64 __fastcall CVisual::GetDrawListCache(
        CVisual *this,
        int a2,
        __int64 a3,
        const struct CVisualTree *a4,
        const struct IDeviceTarget *a5,
        struct CDrawListCache **a6)
{
  __int64 **v9; // rax
  int v10; // esi
  const struct IDeviceTarget *v11; // r12
  __int64 *v12; // r14
  struct CDrawListCache **v13; // r15
  __int64 *v14; // rbx
  __int64 *v15; // rdi
  __int64 v16; // rbp
  int v17; // eax
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rdi
  unsigned int v20; // ebx
  __int64 v22; // rdx
  __int64 v23; // rax
  _BYTE *v24; // r8
  __int64 v25; // rcx
  __int64 ****v26; // rdx
  __int64 ***v27; // rdx
  __int64 **i; // rcx
  volatile signed __int32 *v29; // rbx
  int v30; // ebp
  int v31; // ebp
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdi
  unsigned int v37; // [rsp+20h] [rbp-58h]
  unsigned int v38; // [rsp+20h] [rbp-58h]
  __int64 v39; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int32 *v40; // [rsp+38h] [rbp-40h] BYREF
  char v41; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CDrawListCache *v43; // [rsp+98h] [rbp+20h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a4 + 192LL))(a4) )
  {
    v22 = *((_QWORD *)this + 28);
    if ( *(int *)v22 >= 0 )
      return 2291674884LL;
    v23 = *(unsigned int *)(v22 + 4);
    v24 = (_BYTE *)(v22 + 8);
    v25 = 0LL;
    if ( (_DWORD)v23 )
    {
      while ( *v24 != 1 )
      {
        v25 = (unsigned int)(v25 + 1);
        ++v24;
        if ( (unsigned int)v25 >= (unsigned int)v23 )
          goto LABEL_35;
      }
    }
    else
    {
LABEL_35:
      if ( (unsigned int)v25 >= (unsigned int)v23 )
      {
        v26 = 0LL;
LABEL_28:
        v27 = *v26;
        if ( v27 )
        {
          for ( i = *v27; i != (__int64 **)v27; i = (__int64 **)*i )
          {
            v9 = i - 44;
            if ( i[4] == (__int64 *)a4 )
              goto LABEL_3;
          }
        }
        return 2291674884LL;
      }
    }
    v26 = (__int64 ****)(v22 + ((v23 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v25);
    goto LABEL_28;
  }
  v9 = (__int64 **)((char *)this + 320);
LABEL_3:
  if ( !v9 )
    return 2291674884LL;
  v10 = 0;
  v11 = a5;
  v12 = (__int64 *)(v9 + 2);
  v13 = a6;
  *a6 = 0LL;
  v14 = v9[2];
  v15 = v9[3];
  while ( 1 )
  {
    if ( v14 == v15 )
      goto LABEL_12;
    if ( *(_DWORD *)v14 == a2 && !*((_DWORD *)v14 + 1) )
    {
      v16 = v14[1];
      if ( !*(_QWORD *)((*(__int64 (__fastcall **)(const struct IDeviceTarget *))(*(_QWORD *)v11 + 40LL))(v11) + 568)
        || *(_BYTE *)(v16 + 85)
        || !*(_QWORD *)(v16 + 24) )
      {
        break;
      }
    }
    v14 += 2;
  }
  v18 = (volatile signed __int32 *)v14[1];
  if ( v18 )
  {
    if ( _InterlockedAdd(v18 + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v37);
    goto LABEL_20;
  }
LABEL_12:
  v43 = 0LL;
  v17 = CDrawListCache::InternalCreate(0, &v43);
  v10 = v17;
  if ( v17 >= 0 )
  {
    v18 = (volatile signed __int32 *)v43;
    if ( *((_BYTE *)v43 + 85) || !*((_QWORD *)v43 + 3) )
    {
      CMILRefCountImpl::AddReference((struct CDrawListCache *)((char *)v43 + 8));
      v40 = 0LL;
      v43 = (struct CDrawListCache *)v18;
      v32 = detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
              v12,
              0LL);
      *(_DWORD *)v32 = a2;
      *(_DWORD *)(v32 + 4) = 0;
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::com_ptr_t<CDrawListCache,wil::err_returncode_policy>(
        (__int64 *)(v32 + 8),
        (__int64 *)&v43);
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v43);
    }
    else
    {
      CMILRefCountImpl::AddReference((struct CDrawListCache *)((char *)v43 + 8));
      v39 = v12[1];
      v40 = 0LL;
      v43 = (struct CDrawListCache *)v18;
      detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace<unsigned int,unsigned int,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
        (_DWORD)v12,
        (unsigned int)&v41,
        (unsigned int)&v39,
        a2,
        0,
        (__int64)&v43);
    }
    wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v40);
LABEL_20:
    v19 = *v12;
    if ( (unsigned __int64)((v12[1] - *v12) >> 4) > 1 )
    {
      v33 = *v12;
      while ( v19 != v12[1] )
      {
        v34 = *(_QWORD *)(v19 + 8);
        if ( (volatile signed __int32 *)v34 == v18 )
          goto LABEL_57;
        v35 = 0LL;
        if ( g_pComposition )
          v35 = *((_QWORD *)g_pComposition + 110);
        if ( (unsigned __int64)(v35 - *(_QWORD *)(v34 + 16)) <= 0x1E )
        {
LABEL_57:
          v19 += 16LL;
        }
        else
        {
          v36 = (v19 - v33) >> 4;
          detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
            v12,
            v36,
            1LL);
          v33 = *v12;
          v19 = *v12 + 16 * v36;
        }
      }
    }
    *v13 = (struct CDrawListCache *)v18;
    goto LABEL_22;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x1Cu, 0LL);
  v29 = (volatile signed __int32 *)v43;
  if ( v43 )
  {
    v30 = _InterlockedDecrement((volatile signed __int32 *)v43 + 2);
    if ( v30 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v38);
    if ( !v30 )
    {
      if ( _InterlockedAdd(v29 + 2, 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v38);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 24LL))(v29);
      v31 = _InterlockedDecrement(v29 + 2);
      if ( v31 < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v38);
      if ( !v31 )
      {
        if ( _InterlockedDecrement(v29 + 2) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v38);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v29 + 16LL))(v29, 1LL);
        v20 = v10;
        goto LABEL_49;
      }
    }
  }
LABEL_22:
  v20 = v10;
  if ( v10 >= 0 )
    return v20;
LABEL_49:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x6C8u, 0LL);
  return v20;
}
