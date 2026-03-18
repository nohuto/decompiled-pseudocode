/*
 * XREFs of ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x18008B1F0
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088B00 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ??$?4U?$default_delete@VCOcclusionInfo@@@std@@$0A@@?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008B750 (--$-4U-$default_delete@VCOcclusionInfo@@@std@@$0A@@-$unique_ptr@VCOcclusionInfo@@U-$default_dele.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@YAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@V30@PEAV12@@Z @ 0x1801056B8 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_re.c)
 *     ??$destruct_range@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@detail@@YAXPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@0@Z @ 0x1801878B0 (--$destruct_range@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@std@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct COcclusionInfo *__fastcall CTreeData::GetOcclusionInfo(CTreeData *this, unsigned int a2, char a3)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r13
  void (__fastcall ***v7)(_QWORD, __int64); // r12
  unsigned __int64 v8; // rdi
  __int64 v9; // r8
  char *v11; // rbx
  detail::liberal_expansion_policy *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  char *i; // r14
  unsigned __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r14
  _QWORD *v23; // rbx
  _QWORD *v24; // rdi
  void (__fastcall ***v25)(_QWORD, __int64); // rax
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rsi
  unsigned __int64 v31; // r8
  __int64 *v32; // r14
  __int64 v33; // r8
  __int64 *v34; // rbx
  __int64 v35; // r13
  __int64 v36; // rax
  void (__fastcall ***v37)(_QWORD, __int64); // rcx
  __int64 *v38; // rbx
  unsigned __int64 v39; // r14
  LPVOID v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rax
  CTreeData *v44; // rdx
  CTreeData *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // [rsp+20h] [rbp-60h]
  __int64 v48; // [rsp+28h] [rbp-58h]
  __int128 v49; // [rsp+30h] [rbp-50h] BYREF
  __int64 v50; // [rsp+40h] [rbp-40h]
  __int128 v51; // [rsp+50h] [rbp-30h] BYREF
  __int64 v52; // [rsp+60h] [rbp-20h]
  unsigned __int64 v53; // [rsp+B0h] [rbp+30h]
  void (__fastcall ***v54)(_QWORD, __int64); // [rsp+C8h] [rbp+48h] BYREF

  v4 = *((_QWORD *)this + 22);
  LOBYTE(v5) = a3;
  v7 = 0LL;
  while ( v4 != *((_QWORD *)this + 23) )
  {
    if ( *(_DWORD *)(*(_QWORD *)v4 + 32LL) == a2 )
    {
      v7 = *(void (__fastcall ****)(_QWORD, __int64))v4;
      if ( *(_QWORD *)v4 )
        goto LABEL_5;
      break;
    }
    v4 += 8LL;
  }
  if ( a3 )
  {
    (*(void (__fastcall **)(_QWORD, void (__fastcall ****)(_QWORD, __int64), _QWORD))(**((_QWORD **)this + 31) + 352LL))(
      *((_QWORD *)this + 31),
      &v54,
      a2);
    v11 = (char *)*((_QWORD *)this + 23);
    v12 = (detail::liberal_expansion_policy *)*((_QWORD *)this + 22);
    v7 = v54;
    v8 = (v11 - (char *)v12) >> 3;
    v53 = v8;
    if ( (__int64)(*((_QWORD *)this + 24) - (_QWORD)v11) >> 3 )
    {
      v13 = (v11 - (char *)v12) >> 3;
    }
    else
    {
      if ( v8 + 1 < v8 )
      {
        std::_Xoverflow_error("overflow");
        __debugbreak();
        goto LABEL_37;
      }
      v39 = detail::liberal_expansion_policy::expand(v12, (__int64)(*((_QWORD *)this + 24) - (_QWORD)v12) >> 3, v8 + 1);
      v40 = operator new[](saturated_mul(v39, 8uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v51, (__int64)v40, v8);
      v41 = *((_QWORD *)this + 23);
      v42 = *((_QWORD *)this + 22);
      v49 = v51;
      v50 = v52;
      v43 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v49, (v41 - v42) >> 3);
      std::_Uninitialized_move_unchecked<std::move_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>,wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>(
        v42,
        v41,
        v43);
      detail::destruct_range<std::unique_ptr<COcclusionInfo>>(*((_QWORD *)this + 22), *((_QWORD *)this + 23));
      v44 = (CTreeData *)*((_QWORD *)this + 22);
      v45 = 0LL;
      *((_QWORD *)this + 22) = v40;
      if ( v44 != (CTreeData *)((char *)this + 200) )
        v45 = v44;
      operator delete(v45);
      v46 = *((_QWORD *)this + 22);
      v13 = v53;
      v11 = (char *)(v46 + 8 * v53);
      *((_QWORD *)this + 23) = v11;
      *((_QWORD *)this + 24) = v46 + 8 * v39;
    }
    v47 = *((_QWORD *)this + 22);
    v14 = (__int64)&v11[-v47] >> 3;
    v15 = v14 - v13;
    v48 = 8 * v14;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v51, 8 * v14 + v47, 1LL);
    v49 = v51;
    v50 = v52;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v49, 1LL);
    v16 = v15;
    if ( v15 > 1 )
      v16 = 1LL;
    v51 = v49;
    v52 = v50;
    v17 = 8 * v16;
    for ( i = &v11[-v17]; v11 != i; *v27 = v28 )
    {
      v11 -= 8;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v51);
      v27 = (_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v51);
      v28 = *(_QWORD *)v11;
      *(_QWORD *)v11 = 0LL;
    }
    if ( v15 <= 1 )
    {
LABEL_39:
      v19 = v53;
    }
    else
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v51, v47, v14);
      v49 = v51;
      v50 = v52;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v49, v14);
      v19 = v53;
      v51 = v49;
      v20 = v47 + 8 * v53;
      v52 = v50;
      v21 = v48 - 8 + v47;
      v22 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(
              &v51,
              -((v21 - v20) >> 3))
          - v21;
      while ( v20 != v21 )
      {
        v21 -= 8LL;
        std::unique_ptr<COcclusionInfo>::operator=<std::default_delete<COcclusionInfo>,0>(v22 + v21, v21);
      }
    }
    v23 = (_QWORD *)(v47 + 8 * v19);
    v24 = v23 + 1;
    if ( v47 + v48 < (unsigned __int64)(v23 + 1) )
      v24 = (_QWORD *)(v47 + v48);
    for ( ; v23 != v24; ++v23 )
    {
      if ( *v23 )
        (**(void (__fastcall ***)(_QWORD, __int64))*v23)(*v23, 1LL);
    }
    v25 = v54;
    *((_QWORD *)this + 23) += 8LL;
    v54 = 0LL;
    *(_QWORD *)(v47 + 8 * v19) = v25;
    if ( v54 )
    {
      (**v54)(v54, 1LL);
      return (struct COcclusionInfo *)v7;
    }
  }
LABEL_5:
  v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 24LL) + 880LL);
  if ( !(_BYTE)v5 && *((_QWORD *)this + 27) != v8 )
  {
    *((_QWORD *)this + 27) = v8;
    v3 = *((_QWORD *)this + 22);
    if ( (unsigned __int64)((*((_QWORD *)this + 23) - v3) >> 3) > 1 )
    {
      while ( 1 )
      {
        v9 = *((_QWORD *)this + 23);
        if ( v3 == v9 )
          break;
        if ( *(void (__fastcall ****)(_QWORD, __int64))v3 != v7
          && (v26 = *(_QWORD *)(*(_QWORD *)v3 + 16LL)) != 0
          && v8 - v26 >= 0xA )
        {
LABEL_37:
          v29 = *((_QWORD *)this + 22);
          v30 = (v3 - v29) >> 3;
          v31 = (v9 - v29) >> 3;
          v5 = v30 + 1;
          if ( v30 + 1 > v31 )
          {
            std::_Xoverflow_error("overflow");
            __debugbreak();
            goto LABEL_39;
          }
          v32 = (__int64 *)(v29 + 8 * v31);
          stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v51, *((_QWORD *)this + 22), v31);
          if ( v5 != v33 )
          {
            v49 = v51;
            v50 = v52;
            stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(
              &v49,
              v30);
            v34 = (__int64 *)(v29 + 8 * v5);
            v51 = v49;
            v52 = v50;
            stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v51, v32 - v34);
            v35 = v49 + 8 * v50 - (_QWORD)v34;
            while ( v34 != v32 )
            {
              v36 = *v34;
              *v34 = 0LL;
              v37 = *(void (__fastcall ****)(_QWORD, __int64))((char *)v34 + v35);
              *(__int64 *)((char *)v34 + v35) = v36;
              if ( v37 )
                (**v37)(v37, 1LL);
              ++v34;
            }
          }
          v38 = v32 - 1;
          do
          {
            if ( *v38 )
              (**(void (__fastcall ***)(__int64, __int64))*v38)(*v38, 1LL);
            ++v38;
          }
          while ( v38 != v32 );
          *((_QWORD *)this + 23) -= 8LL;
          v3 = *((_QWORD *)this + 22) + 8 * v30;
        }
        else
        {
          v3 += 8LL;
        }
      }
    }
  }
  return (struct COcclusionInfo *)v7;
}
