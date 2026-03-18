/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x14025CB60
 * Callers:
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x140264A10 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x140363614 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x14002A620 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002DFE8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002E0B0 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x14003B5AC (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@I@Z @ 0x14004D358 (--0DMMVIDPNTARGETMODE@@QEAA@I@Z.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x140053E18 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x140058868 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x14005E5B0 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x140061458 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x140095D9C (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1400967B8 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x14025C7DC (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x14025C94C (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402A76C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402A7894 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A890C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1402AB7A4 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1402DB240 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1402DC840 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140384408 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePathFromVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  __int64 v5; // rdi
  __int64 v8; // r14
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v10; // r8
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v11; // r13d
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DMMVIDPNSOURCEMODESET *v15; // rbx
  _QWORD *v16; // rax
  __int64 Container; // rdi
  __int64 v19; // r9
  int NumPathsFromSource; // eax
  int v21; // eax
  unsigned int v22; // r8d
  int v23; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rdx
  struct DMMVIDPNTARGETMODESET *v27; // rax
  __int64 v28; // rdx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  int v31; // ecx
  __int128 v32; // xmm0
  struct DMMVIDPNTARGETMODESET *v33; // rax
  DMMVIDPNSOURCEMODESET *v34; // rbx
  DMMVIDPNSOURCEMODE *v35; // rcx
  __int64 v36; // rdx
  UINT cx; // ecx
  int v38; // eax
  struct DMMVIDPNTARGETMODESET *v39; // rax
  char *v40; // r14
  char *v41; // rdi
  struct DMMVIDPNTARGETMODESET *v42; // rcx
  char *v43; // rax
  struct DMMVIDPNTARGETMODESET *v44; // rax
  __int64 v45; // rax
  char v46; // [rsp+40h] [rbp-C0h]
  char v47; // [rsp+41h] [rbp-BFh]
  unsigned int v48[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct DMMVIDPNTARGETMODESET *v49; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v50; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v51; // [rsp+60h] [rbp-A0h] BYREF
  struct DMMVIDPNTARGETMODESET *v52; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v53[24]; // [rsp+70h] [rbp-90h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v54; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v55[72]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v56; // [rsp+F8h] [rbp-8h]
  __int128 v57; // [rsp+108h] [rbp+8h]
  __int128 v58; // [rsp+118h] [rbp+18h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  int v60; // [rsp+130h] [rbp+30h]
  char v61; // [rsp+13Ch] [rbp+3Ch]
  __int64 v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]
  int v64; // [rsp+150h] [rbp+50h]

  v5 = a4;
  LODWORD(v49) = a4;
  v8 = a3;
  v46 = 0;
  v47 = 0;
  memset(&v54, 0, sizeof(v54));
  Path = 0LL;
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v55, 0);
  v50 = D3DKMDT_VPPS_UNPINNED;
  v11 = D3DKMDT_VPPR_UNPINNED;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2903;
  }
  if ( (_DWORD)v8 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2904;
  }
  if ( (_DWORD)v5 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2905;
  }
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2911;
  }
  LOBYTE(v10) = 2;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    v53,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    v10);
  v12 = DMMVIDPNTOPOLOGY::RemovePath(a2, v8, v5, 0LL);
  v15 = (struct DMMVIDPNSOURCEMODESET *)v12;
  if ( v12 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
    v16[3] = v8;
    v16[4] = v5;
    v16[5] = a2;
    v16[6] = v15;
    WdLogGlobalForLineNumber = 2921;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v53);
    return (unsigned int)v15;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v53);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  if ( *(_BYTE *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter(this) + 395) + 289LL)
    && *(_BYTE *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter(this) + 395) + 290LL)
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter(this) + 27) + 64LL) + 40LL) + 28LL) >= 0x4003u )
  {
    v51 = 0LL;
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v8, &v51);
    LODWORD(v15) = NumPathsFromSource;
    if ( NumPathsFromSource == -1071774919 )
    {
      v51 = 0LL;
    }
    else
    {
      if ( NumPathsFromSource < 0 )
      {
        WdLogSingleEntry3(2LL, v8, Container & -(__int64)(Container != -88), NumPathsFromSource);
        WdLogGlobalForLineNumber = 2948;
        return (unsigned int)v15;
      }
      if ( v51 == 1 )
      {
        v48[0] = 0;
        v21 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(a2, v8, 0LL, v48);
        LODWORD(v15) = v21;
        if ( v21 < 0 )
        {
          WdLogSingleEntry3(2LL, v8, Container & -(__int64)(Container != -88), v21);
          WdLogGlobalForLineNumber = 2967;
          return (unsigned int)v15;
        }
        if ( v48[0] == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2972;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(a2, v8, v48[0]);
        if ( !Path )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2976;
        }
        v22 = *((_DWORD *)Path + 29);
        v19 = 254LL;
        if ( v22 != 254 )
        {
          v23 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(v22);
          if ( v23 == 2 || v23 == 4 )
          {
            if ( !a5 )
            {
              LODWORD(v15) = -1071774970;
              WdLogSingleEntry3(2LL, v8, Container & -(__int64)(Container != -88), -1071774970LL);
              WdLogGlobalForLineNumber = 2996;
              return (unsigned int)v15;
            }
            v11 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v24);
            DMMVIDPNPRESENTPATH::UnpinContentRotation(Path, v25);
            v50 = *((_DWORD *)Path + 28);
            if ( v50 != D3DKMDT_VPPS_UNPINNED )
              DMMVIDPNPRESENTPATH::UnpinContentScaling(Path, v26);
            v27 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 12));
            v52 = v27;
            if ( v27 )
            {
              v28 = *((_QWORD *)v27 + 18);
              if ( v28 )
              {
                v29 = *(_OWORD *)(v28 + 72);
                v60 = *(_DWORD *)(v28 + 128);
                v30 = *(_OWORD *)(v28 + 88);
                v61 = *(_BYTE *)(v28 + 140);
                v62 = *(_QWORD *)(v28 + 144);
                v63 = *(_QWORD *)(v28 + 152);
                v31 = *(_DWORD *)(v28 + 160);
                v56 = v29;
                v64 = v31;
                v32 = *(_OWORD *)(v28 + 104);
                v47 = 1;
                v57 = v30;
                *(_QWORD *)&v30 = *(_QWORD *)(v28 + 120);
                v58 = v32;
                v59 = v30;
                DMMVIDPNTARGETMODESET::UnpinMode(v27, v28);
              }
            }
            v33 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
            *(_QWORD *)v48 = v33;
            v34 = v33;
            if ( v33 )
            {
              v35 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v33 + 18);
              if ( v35 )
              {
                v46 = 1;
                DMMVIDPNSOURCEMODE::Serialize(v35, &v54);
                DMMVIDPNSOURCEMODESET::UnpinMode(v34, v36);
                if ( v54.Type != D3DKMDT_RMT_TEXT )
                {
                  v54.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                         v54.Format.Graphics.PrimSurfSize.cx,
                                                                         v54.Format.Graphics.PrimSurfSize.cy);
                  cx = v54.Format.Graphics.VisibleRegionSize.cx;
                  v54.Format.Graphics.VisibleRegionSize.cx = v54.Format.Graphics.VisibleRegionSize.cy;
                  *(_QWORD *)(&v54.Format.Text + 3) = cx;
                }
              }
            }
            auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)v48, 0LL);
            auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v52, 0LL);
          }
        }
      }
    }
  }
  if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) != (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
  {
    v48[0] = -1;
    LOBYTE(v19) = 1;
    v48[1] = -1;
    v38 = VIDPN_MGR::FormalizeVidPnChange(this, Container & -(__int64)(Container != -88), 2LL, v19, v48);
    LODWORD(v15) = v38;
    if ( v38 < 0 )
    {
      WdLogSingleEntry4(2LL, v8, (unsigned int)v49, Container & -(__int64)(Container != -88), v38);
      WdLogGlobalForLineNumber = 3068;
      return (unsigned int)v15;
    }
  }
  if ( v46 )
  {
    v39 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
    v49 = v39;
    v15 = v39;
    if ( !v39 )
      goto LABEL_65;
    v40 = (char *)v39 + 48;
    v41 = 0LL;
    v42 = (struct DMMVIDPNTARGETMODESET *)*((_QWORD *)v39 + 6);
    if ( v42 != (struct DMMVIDPNTARGETMODESET *)((char *)v39 + 48) )
      v41 = (char *)v42 - 8;
    if ( !v41 )
      goto LABEL_65;
    do
    {
      if ( v54.Type != D3DKMDT_RMT_TEXT && *((_DWORD *)v41 + 18) != 2 )
        v54.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v41)->Stride;
      if ( DMMVIDPNSOURCEMODE::operator==(v41, (__int64)&v54) )
        break;
      v43 = (char *)*((_QWORD *)v41 + 1);
      v41 = v43 - 8;
      if ( v43 == v40 )
        v41 = 0LL;
    }
    while ( v41 );
    if ( !v41 )
    {
LABEL_65:
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3112;
      LODWORD(v15) = -1071774958;
      goto LABEL_66;
    }
    LODWORD(v15) = VIDPN_MGR::PinVidPnSourceMode(this, v15, *((_DWORD *)v41 + 6), 1);
    if ( (int)v15 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3124;
LABEL_66:
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v49, 0LL);
      return (unsigned int)v15;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v49, 0LL);
  }
  if ( v47 )
  {
    v44 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 12));
    v49 = v44;
    v15 = v44;
    if ( !v44 || (v45 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)v44 + 24, (__int64)v55)) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3143;
      LODWORD(v15) = -1071774958;
      goto LABEL_72;
    }
    LODWORD(v15) = VIDPN_MGR::PinVidPnTargetMode(this, v15, *(_DWORD *)(v45 + 24), 1);
    if ( (int)v15 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3155;
LABEL_72:
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v49, 0LL);
      return (unsigned int)v15;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v49, 0LL);
  }
  if ( v50 != D3DKMDT_VPPS_UNPINNED )
  {
    LODWORD(v15) = VIDPN_MGR::PinPathContentScaling(this, Path, v50);
    if ( (int)v15 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3170;
      return (unsigned int)v15;
    }
  }
  if ( v11 != D3DKMDT_VPPR_UNPINNED )
  {
    LODWORD(v15) = VIDPN_MGR::PinPathContentRotation(this, Path, v11);
    if ( (int)v15 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3185;
      return (unsigned int)v15;
    }
  }
  return 0LL;
}
