/*
 * XREFs of ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18001CF50
 * Callers:
 *     ?GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18028B97C (-GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18001E240 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z @ 0x18001E36C (-Alloc@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z.c)
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18001E494 (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18001E878 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListCacheSet::GetCache(
        CDrawListCacheSet *this,
        int a2,
        int a3,
        const struct IDeviceTarget *a4,
        struct CDrawListCache **a5)
{
  struct CDrawListCache **v5; // r14
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  unsigned int v23; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v5 = a5;
  *a5 = 0LL;
  v10 = *(_QWORD *)this;
  v11 = *((_QWORD *)this + 1);
  while ( v10 != v11 )
  {
    if ( *(_DWORD *)v10 == a2 && *(_DWORD *)(v10 + 4) == a3 )
    {
      a5 = *(struct CDrawListCache ***)(v10 + 8);
      if ( !*(_QWORD *)((*(__int64 (__fastcall **)(const struct IDeviceTarget *))(*(_QWORD *)a4 + 40LL))(a4) + 568)
        || *((_BYTE *)a5 + 85)
        || !a5[3] )
      {
        v13 = *(_QWORD *)(v10 + 8);
        if ( v13 )
        {
          if ( _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u) <= 0 )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x18,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v23);
          goto LABEL_23;
        }
        break;
      }
    }
    v10 += 16LL;
  }
  a5 = 0LL;
  v12 = CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Alloc();
  v13 = v12;
  if ( !v12 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x24u, 0LL);
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&a5);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Cu, 0LL);
    return 2147942414LL;
  }
  *(_DWORD *)(v12 + 8) = 0;
  v14 = 0LL;
  *(_QWORD *)v12 = &CDrawListCache::`vftable';
  if ( g_pComposition )
    v14 = *((_QWORD *)g_pComposition + 110);
  *(_QWORD *)(v12 + 16) = v14;
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_QWORD *)(v12 + 32) = 0LL;
  *(_QWORD *)(v12 + 40) = 2LL;
  *(_QWORD *)(v12 + 72) = 0LL;
  *(_WORD *)(v12 + 84) = 0;
  *(_BYTE *)(v12 + 86) = 0;
  if ( _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v23);
  a5 = 0LL;
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&a5);
  a5 = 0LL;
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&a5);
  if ( *(_BYTE *)(v13 + 85) || !*(_QWORD *)(v13 + 24) )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v13 + 8));
    v15 = 0LL;
  }
  else
  {
    if ( _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v23);
    v15 = (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4;
  }
  a5 = (struct CDrawListCache **)v13;
  v25 = 0LL;
  v16 = detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
          this,
          v15);
  *(_DWORD *)v16 = a2;
  *(_DWORD *)(v16 + 4) = a3;
  *(_QWORD *)(v16 + 8) = v13;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v13 + 8));
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&a5);
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v25);
LABEL_23:
  v17 = *(_QWORD *)this;
  if ( (unsigned __int64)((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4) > 1 )
  {
    v19 = *(_QWORD *)this;
    while ( v17 != *((_QWORD *)this + 1) )
    {
      v20 = *(_QWORD *)(v17 + 8);
      if ( v20 == v13 )
        goto LABEL_33;
      v21 = 0LL;
      if ( g_pComposition )
        v21 = *((_QWORD *)g_pComposition + 110);
      if ( (unsigned __int64)(v21 - *(_QWORD *)(v20 + 16)) <= 0x1E )
      {
LABEL_33:
        v17 += 16LL;
      }
      else
      {
        v22 = (v17 - v19) >> 4;
        detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
          this,
          v22,
          1LL);
        v19 = *(_QWORD *)this;
        v17 = *(_QWORD *)this + 16 * v22;
      }
    }
  }
  *v5 = (struct CDrawListCache *)v13;
  return 0LL;
}
