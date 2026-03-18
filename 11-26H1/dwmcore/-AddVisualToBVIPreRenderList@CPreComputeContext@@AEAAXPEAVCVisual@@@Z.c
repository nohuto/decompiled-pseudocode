/*
 * XREFs of ?AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z @ 0x18008FAA0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$destruct_range@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18008CC18 (--$destruct_range@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CC0E0 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVCVisual@@@std@@V?$checked_array_iterator@PEAPEAVCVisual@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCVisual@@@stdext@@V?$move_iterator@PEAPEAVCVisual@@@0@0V12@@Z @ 0x1801B0BF4 (--$uninitialized_move@V-$move_iterator@PEAPEAVCVisual@@@std@@V-$checked_array_iterator@PEAPEAVCV.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPreComputeContext::AddVisualToBVIPreRenderList(CPreComputeContext *this, struct CVisual *a2)
{
  __int64 v2; // rax
  struct _LIST_ENTRY *v4; // rsi
  struct _LIST_ENTRY *v5; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // r8
  char *v8; // r9
  struct _LIST_ENTRY *v9; // rdi
  _OWORD *v10; // r11
  _OWORD *v11; // rbx
  char *v12; // rax
  struct _LIST_ENTRY *v13; // rdi
  __int64 v14; // r11
  __int64 v15; // r11
  struct _LIST_ENTRY *v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // r9
  detail::liberal_expansion_policy *v20; // rcx
  struct _LIST_ENTRY *v21; // r8
  unsigned __int64 v22; // r14
  struct _LIST_ENTRY *v23; // rbx
  __int64 v24; // r12
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  struct _LIST_ENTRY *k; // r13
  struct CVisual *v29; // rax
  HANDLE ProcessHeap; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *v33; // rax
  struct _LIST_ENTRY *j; // rcx
  unsigned __int64 v35; // rdi
  struct _LIST_ENTRY *v36; // rbx
  struct _LIST_ENTRY *v37; // r8
  struct _LIST_ENTRY *v38; // rdx
  struct _LIST_ENTRY *v39; // rcx
  struct _LIST_ENTRY *v40; // rcx
  __int128 v41; // [rsp+20h] [rbp-89h] BYREF
  __int64 v42; // [rsp+30h] [rbp-79h]
  __int128 v43; // [rsp+40h] [rbp-69h] BYREF
  __int64 v44; // [rsp+50h] [rbp-59h]
  __int128 v45; // [rsp+60h] [rbp-49h] BYREF
  __int64 v46; // [rsp+70h] [rbp-39h]
  struct CVisual *v47; // [rsp+80h] [rbp-29h]
  LPVOID lpMem; // [rsp+88h] [rbp-21h]
  _OWORD *v49; // [rsp+90h] [rbp-19h]
  __int64 *v50; // [rsp+98h] [rbp-11h]
  _OWORD v51[2]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v52; // [rsp+C0h] [rbp+17h] BYREF

  v2 = *(_QWORD *)this;
  v47 = a2;
  *(_QWORD *)&v43 = 0LL;
  v4 = *(struct _LIST_ENTRY **)(v2 + 328);
  *((_QWORD *)&v43 + 1) = v4;
  lpMem = v51;
  v49 = v51;
  v50 = &v52;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v45, (__int64)v51, 1LL);
  v41 = v45;
  v42 = v46;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v41, 1LL);
  ++v49;
  v51[0] = v43;
  v5 = (struct _LIST_ENTRY *)*((_QWORD *)v49 - 1);
  if ( !((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v5->Flink[12].Flink)(v5) )
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(a2);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        v9 = i - 22;
        if ( i[2].Flink == v5 )
          goto LABEL_3;
      }
    }
    goto LABEL_42;
  }
  v9 = (struct _LIST_ENTRY *)((char *)a2 + 320);
LABEL_3:
  if ( !v9 )
  {
LABEL_42:
    v13 = 0LL;
    goto LABEL_13;
  }
  Flink = v9[9].Flink;
  Blink = v9[9].Blink;
  v10 = v49;
  v11 = lpMem;
  while ( 1 )
  {
    if ( Flink == Blink )
    {
      v13 = 0LL;
      goto LABEL_15;
    }
    v8 = (char *)((char *)v49 - (_BYTE *)lpMem);
    v12 = (char *)Flink->Flink[101].Flink;
    if ( (char *)Flink->Flink[101].Blink - v12 == (char *)v49 - (_BYTE *)lpMem )
      break;
LABEL_41:
    Flink = (struct _LIST_ENTRY *)((char *)Flink + 8);
  }
  v8 = (char *)((_BYTE *)lpMem - v12);
  while ( v12 != (char *)Flink->Flink[101].Blink )
  {
    if ( *(_QWORD *)v12 != *(_QWORD *)&v8[(_QWORD)v12] || *((_QWORD *)v12 + 1) != *(_QWORD *)&v8[(_QWORD)v12 + 8] )
      goto LABEL_41;
    v12 += 16;
  }
  Flink->Flink[111].Flink = v9[15].Blink[1].Blink[55].Flink;
  v13 = Flink->Flink;
LABEL_13:
  v11 = lpMem;
  v10 = v49;
LABEL_15:
  v14 = v10 - v11;
  if ( v14 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v41, (__int64)v11, v14);
    v11 = lpMem;
    v49 -= v15;
  }
  lpMem = 0LL;
  if ( v11 != v51 && v11 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v11);
  }
  if ( v13 && v13[7].Blink != v4[4].Blink )
  {
    if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *, struct _LIST_ENTRY *, char *))v4->Flink[12].Flink)(
           v4,
           Flink,
           Blink,
           v8) )
    {
      v16 = (struct _LIST_ENTRY *)((char *)a2 + 320);
LABEL_24:
      if ( v16 )
      {
        v17 = ((char *)v16[9].Blink - (char *)v16[9].Flink) >> 3;
        if ( v17 )
        {
          v18 = 8 * v17;
          stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v41, (__int64)v16[9].Flink, v17);
          detail::destruct_range<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>>(v19, v19 + v18);
          v16[9].Blink = (struct _LIST_ENTRY *)((char *)v16[9].Blink - v18);
        }
      }
    }
    else
    {
      v33 = CVisual::GetTreeDataListHead(a2);
      if ( v33 )
      {
        for ( j = v33->Flink; j != v33; j = j->Flink )
        {
          v16 = j - 22;
          if ( j[2].Flink == v4 )
            goto LABEL_24;
        }
      }
    }
  }
  v20 = (detail::liberal_expansion_policy *)v4[299].Blink;
  v21 = v4[299].Flink;
  v22 = (v20 - (detail::liberal_expansion_policy *)v21) >> 3;
  if ( !(((char *)v4[300].Flink - (char *)v20) >> 3) )
  {
    if ( v22 + 1 < v22 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x18008FF2BLL);
    }
    v35 = detail::liberal_expansion_policy::expand(v20, ((char *)v4[300].Flink - (char *)v21) >> 3, v22 + 1);
    v36 = (struct _LIST_ENTRY *)operator new[](saturated_mul(v35, 8uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v41, (__int64)v36, v22);
    v37 = v4[299].Blink;
    v38 = v4[299].Flink;
    v45 = v41;
    v46 = v42;
    std::uninitialized_move<std::move_iterator<CVisual * *>,stdext::checked_array_iterator<CVisual * *>>(
      &v41,
      v38,
      v37,
      &v45);
    v39 = v4[299].Flink;
    *(_QWORD *)&v43 = 0LL;
    v4[299].Flink = v36;
    if ( v39 == (struct _LIST_ENTRY *)&v4[300].Blink )
      v39 = 0LL;
    operator delete(v39);
    v40 = v4[299].Flink;
    v4[299].Blink = (struct _LIST_ENTRY *)((char *)v40 + 8 * v22);
    v4[300].Flink = (struct _LIST_ENTRY *)((char *)v40 + 8 * v35);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v43);
  }
  v23 = v4[299].Blink;
  v24 = (__int64)v4[299].Flink;
  v25 = ((__int64)v23 - v24) >> 3;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v41, v24 + 8 * v25, 1LL);
  v43 = v41;
  v44 = v42;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v43, 1LL);
  v26 = v25 - v22;
  if ( v25 - v22 > 1 )
    v26 = 1LL;
  v45 = v43;
  v46 = v44;
  v27 = 8 * v26;
  for ( k = (struct _LIST_ENTRY *)((char *)v23 - v27);
        v23 != k;
        *(_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v45) = v23->Flink )
  {
    v23 = (struct _LIST_ENTRY *)((char *)v23 - 8);
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v45);
  }
  if ( v25 - v22 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v41, v24, v25);
    v43 = v41;
    v44 = v42;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v43, v25);
    v41 = v43;
    v42 = v44;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v41, -((__int64)(8 * v25 - 8 * v22 - 8) >> 3));
    memmove_0((void *)(v43 + 8 * v44 - (8 * v25 - 8 * v22 - 8)), (const void *)(v24 + 8 * v22), 8 * v25 - 8 * v22 - 8);
  }
  v29 = v47;
  v4[299].Blink = (struct _LIST_ENTRY *)((char *)v4[299].Blink + 8);
  *(_QWORD *)(v24 + 8 * v22) = v29;
}
