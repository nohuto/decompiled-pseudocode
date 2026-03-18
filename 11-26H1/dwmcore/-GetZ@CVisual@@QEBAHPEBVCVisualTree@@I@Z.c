/*
 * XREFs of ?GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x18008CC50
 * Callers:
 *     ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCOcclusionContext@@@Z @ 0x180219988 (-GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCOcclusionContext@@@Z.c)
 *     ?CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N2@Z @ 0x18023973C (-CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N2@Z.c)
 *     ?HasOverlappingCornerRects@COverlayContext@@KA_NPEAVOverlayPlaneInfo@1@AEBV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023C880 (-HasOverlappingCornerRects@COverlayContext@@KA_NPEAVOverlayPlaneInfo@1@AEBV-$vector_facade@PEAVO.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetZ(CVisual *this, CVisual **a2, int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbp
  __int64 *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 j; // rcx
  __int64 v12; // r13
  __int64 v13; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  _BYTE *v17; // r8
  __int64 v18; // rcx
  __int64 ****v19; // rcx
  __int64 ***v20; // rcx
  __int64 **i; // rax
  __int64 v22; // rcx
  __int64 v23; // r12
  unsigned __int64 v24; // r8
  __int64 *v25; // r9
  __int64 v26; // r8
  __int64 v27; // r10
  __int64 *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rax
  void (__fastcall ***v31)(_QWORD, __int64); // rcx
  __int64 *v32; // rbx
  __int128 v33; // [rsp+20h] [rbp-78h] BYREF
  __int64 v34; // [rsp+30h] [rbp-68h]
  __int128 v35; // [rsp+40h] [rbp-58h] BYREF
  __int64 v36; // [rsp+50h] [rbp-48h]
  __int64 *v37; // [rsp+A0h] [rbp+8h]
  __int64 v39; // [rsp+B8h] [rbp+20h]

  LODWORD(v3) = a3;
  v6 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !this )
        return 0LL;
      if ( (*((unsigned __int8 (__fastcall **)(CVisual **))*a2 + 24))(a2) )
        break;
      v15 = *((_QWORD *)this + 28);
      if ( *(int *)v15 >= 0 )
        goto LABEL_20;
      v16 = *(unsigned int *)(v15 + 4);
      v17 = (_BYTE *)(v15 + 8);
      v18 = 0LL;
      if ( (_DWORD)v16 )
      {
        while ( *v17 != 1 )
        {
          v18 = (unsigned int)(v18 + 1);
          ++v17;
          if ( (unsigned int)v18 >= (unsigned int)v16 )
            goto LABEL_37;
        }
LABEL_25:
        v19 = (__int64 ****)(v15 + ((v16 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v18);
        goto LABEL_26;
      }
LABEL_37:
      if ( (unsigned int)v18 < (unsigned int)v16 )
        goto LABEL_25;
      v19 = 0LL;
LABEL_26:
      v20 = *v19;
      if ( v20 )
      {
        for ( i = *v20; i != (__int64 **)v20; i = (__int64 **)*i )
        {
          v7 = (__int64 *)(i - 44);
          if ( i[4] == (__int64 *)a2 )
            goto LABEL_5;
        }
      }
LABEL_20:
      if ( this == a2[9] )
        goto LABEL_42;
      this = (CVisual *)*((_QWORD *)this + 11);
    }
    v7 = (__int64 *)((char *)this + 320);
LABEL_5:
    if ( !v7 )
      goto LABEL_20;
    v8 = v7[22];
    v9 = 0LL;
    v10 = v7[23];
    for ( j = v8; j != v10; j += 8LL )
    {
      if ( *(_DWORD *)(*(_QWORD *)j + 32LL) == (_DWORD)v3 )
      {
        v9 = *(_QWORD *)j;
        break;
      }
    }
    v12 = *(_QWORD *)(*(_QWORD *)(v7[31] + 24) + 880LL);
    if ( v7[27] == v12 )
      break;
    v7[27] = v12;
    if ( (unsigned __int64)((v10 - v8) >> 3) <= 1 )
      break;
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = v7[23];
        if ( v8 == v13 )
        {
          LODWORD(v3) = a3;
          goto LABEL_14;
        }
        if ( *(_QWORD *)v8 != v9 )
        {
          v22 = *(_QWORD *)(*(_QWORD *)v8 + 16LL);
          if ( v22 )
          {
            if ( (unsigned __int64)(v12 - v22) >= 0xA )
              break;
          }
        }
        v8 += 8LL;
      }
      v3 = v7[22];
      v23 = (v8 - v3) >> 3;
      v24 = (v13 - v3) >> 3;
      if ( v23 + 1 > v24 )
        break;
      v37 = (__int64 *)(v3 + 8 * v24);
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v35, v7[22], v24);
      if ( v27 != v26 )
      {
        v33 = v35;
        v34 = v36;
        stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v33, v23);
        v28 = (__int64 *)(v3 + 8 * v23 + 8);
        v35 = v33;
        v36 = v34;
        stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v35, v37 - v28);
        v25 = v37;
        v29 = v33 + 8 * v34 - (_QWORD)v28;
        v39 = v29;
        while ( v28 != v25 )
        {
          v30 = *v28;
          *v28 = 0LL;
          v31 = *(void (__fastcall ****)(_QWORD, __int64))((char *)v28 + v29);
          *(__int64 *)((char *)v28 + v29) = v30;
          if ( v31 )
          {
            (**v31)(v31, 1LL);
            v25 = v37;
            v29 = v39;
          }
          ++v28;
        }
      }
      v32 = v25 - 1;
      do
      {
        if ( *v32 )
        {
          (**(void (__fastcall ***)(__int64, __int64))*v32)(*v32, 1LL);
          v25 = v37;
        }
        ++v32;
      }
      while ( v32 != v25 );
      v7[23] -= 8LL;
      v8 = v7[22] + 8 * v23;
    }
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_42:
    this = 0LL;
  }
LABEL_14:
  if ( !v9 )
    goto LABEL_20;
  if ( g_pComposition )
    v6 = *((_QWORD *)g_pComposition + 110);
  if ( *(_QWORD *)(v9 + 16) != v6 )
    (*(void (__fastcall **)(__int64, CVisual **, __int64))(*(_QWORD *)v9 + 16LL))(v9, a2, v6);
  return *(unsigned int *)(v9 + 40);
}
