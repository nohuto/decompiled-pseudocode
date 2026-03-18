/*
 * XREFs of ?GetSubtreeZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x1801224A0
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091390 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetSubtreeZ(CVisual *this, CVisual **a2, int a3)
{
  int v3; // ebx
  __int64 v6; // rbp
  __int64 *v7; // rsi
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 j; // rax
  __int64 v12; // r12
  __int64 v13; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  _BYTE *v17; // r8
  __int64 v18; // rcx
  __int64 ****v19; // rcx
  __int64 ***v20; // rcx
  __int64 **i; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // r13
  unsigned __int64 v25; // r8
  __int64 *v26; // r9
  __int64 v27; // r8
  __int64 v28; // r10
  __int64 *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rax
  void (__fastcall ***v32)(_QWORD, __int64); // rcx
  __int64 *v33; // rbx
  __int128 v34; // [rsp+20h] [rbp-78h] BYREF
  __int64 v35; // [rsp+30h] [rbp-68h]
  __int128 v36; // [rsp+40h] [rbp-58h] BYREF
  __int64 v37; // [rsp+50h] [rbp-48h]
  __int64 *v38; // [rsp+A0h] [rbp+8h]
  __int64 v40; // [rsp+B8h] [rbp+20h]

  v3 = a3;
  v6 = 0LL;
  while ( 1 )
  {
    if ( !this )
      return 0LL;
    if ( !(*((unsigned __int8 (__fastcall **)(CVisual **))*a2 + 24))(a2) )
    {
      v15 = *((_QWORD *)this + 28);
      if ( *(int *)v15 >= 0 )
        goto LABEL_6;
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
      }
      else
      {
LABEL_37:
        if ( (unsigned int)v18 >= (unsigned int)v16 )
        {
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
          goto LABEL_6;
        }
      }
      v19 = (__int64 ****)(v15 + ((v16 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v18);
      goto LABEL_26;
    }
    v7 = (__int64 *)((char *)this + 320);
LABEL_5:
    if ( v7 )
    {
      v8 = v7[22];
      v9 = 0LL;
      v10 = v7[23];
      for ( j = v8; j != v10; j += 8LL )
      {
        if ( *(_DWORD *)(*(_QWORD *)j + 32LL) == v3 )
        {
          v9 = *(_QWORD *)j;
          break;
        }
      }
      v12 = *(_QWORD *)(*(_QWORD *)(v7[31] + 24) + 880LL);
      if ( v7[27] != v12 )
      {
        v7[27] = v12;
        if ( (unsigned __int64)((v10 - v8) >> 3) > 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v13 = v7[23];
              if ( v8 == v13 )
              {
                v3 = a3;
                goto LABEL_16;
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
            v23 = v7[22];
            v24 = (v8 - v23) >> 3;
            v25 = (v13 - v23) >> 3;
            if ( v24 + 1 > v25 )
              break;
            v38 = (__int64 *)(v23 + 8 * v25);
            stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v36, v7[22], v25);
            if ( v28 != v27 )
            {
              v34 = v36;
              v35 = v37;
              stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(
                &v34,
                v24);
              v29 = (__int64 *)(v23 + 8 * v24 + 8);
              v36 = v34;
              v37 = v35;
              stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v36, v38 - v29);
              v26 = v38;
              v30 = v34 + 8 * v35 - (_QWORD)v29;
              v40 = v30;
              while ( v29 != v26 )
              {
                v31 = *v29;
                *v29 = 0LL;
                v32 = *(void (__fastcall ****)(_QWORD, __int64))((char *)v29 + v30);
                *(__int64 *)((char *)v29 + v30) = v31;
                if ( v32 )
                {
                  (**v32)(v32, 1LL);
                  v26 = v38;
                  v30 = v40;
                }
                ++v29;
              }
            }
            v33 = v26 - 1;
            do
            {
              if ( *v33 )
              {
                (**(void (__fastcall ***)(__int64, __int64))*v33)(*v33, 1LL);
                v26 = v38;
              }
              ++v33;
            }
            while ( v33 != v26 );
            v7[23] -= 8LL;
            v8 = v7[22] + 8 * v24;
          }
          std::_Xoverflow_error("overflow");
          __debugbreak();
          return 0LL;
        }
      }
LABEL_16:
      if ( v9 )
        break;
    }
LABEL_6:
    if ( this == a2[9] )
      this = 0LL;
    else
      this = (CVisual *)*((_QWORD *)this + 11);
  }
  if ( g_pComposition )
    v6 = *((_QWORD *)g_pComposition + 110);
  if ( *(_QWORD *)(v9 + 16) != v6 )
    (*(void (__fastcall **)(__int64, CVisual **, __int64))(*(_QWORD *)v9 + 16LL))(v9, a2, v6);
  return *(unsigned int *)(v9 + 36);
}
