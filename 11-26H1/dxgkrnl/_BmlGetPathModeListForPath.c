/*
 * XREFs of _BmlGetPathModeListForPath @ 0x1402DFF2C
 * Callers:
 *     _BmlGetPathModeListForAdapter @ 0x14041E938 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x14003B600 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x140046D20 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1402DC840 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlAreRawModesEnabled @ 0x1402DD6C0 (BmlAreRawModesEnabled.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1402DEB90 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlGetModeCategoryForRegion @ 0x1402DF1E4 (BmlGetModeCategoryForRegion.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1402E029C (_BmlGetPathModeListForPathTargetModes.c)
 *     BmlUnPinSourceMode @ 0x1402E0A6C (BmlUnPinSourceMode.c)
 *     BmlIsSecondaryHardwareClonePath @ 0x1403ECF28 (BmlIsSecondaryHardwareClonePath.c)
 */

__int64 __fastcall BmlGetPathModeListForPath(__int64 a1, __int64 a2, unsigned __int16 a3, CCD_MODE_RESULT_SET *a4)
{
  struct DMMVIDPNSOURCEMODE *NextMode; // r15
  __int64 v5; // rbp
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  VIDPN_MGR *v11; // rax
  __int64 v12; // rdx
  struct DMMVIDPNTARGETMODESET *v13; // rax
  struct DMMVIDPNTARGETMODESET *v14; // rbx
  int PathModeListForPathTargetModes; // ebp
  int v16; // edi
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 BitsPerPixel; // rcx
  unsigned __int16 v26; // di
  __int64 v27; // rbp
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  VIDPN_MGR *v32; // [rsp+30h] [rbp-68h]
  struct DMMVIDPNPRESENTPATH *Path; // [rsp+38h] [rbp-60h]
  struct DMMVIDPNTARGETMODESET *v34; // [rsp+40h] [rbp-58h] BYREF
  struct DMMVIDPNSOURCEMODE *v35; // [rsp+A8h] [rbp+10h]

  NextMode = 0LL;
  v5 = a3;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6794;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6795;
  }
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  v9 = 120 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  v10 = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v11 = *(VIDPN_MGR **)(a2 + 48);
  WdLogGlobalForLineNumber = 6799;
  v32 = v11;
  if ( !v11 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6804;
  }
  v12 = *(_QWORD *)(v9 + a1 + 16);
  *(_WORD *)(v9 + a1 + 64) = 0;
  *(_WORD *)(v9 + a1 + 68) = 0;
  Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(a2 + 96), *(_DWORD *)(v12 + 24), *(_DWORD *)(v12 + 28));
  v13 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
  v34 = v13;
  v14 = v13;
  if ( !v13 )
  {
    PathModeListForPathTargetModes = -1071774968;
    goto LABEL_9;
  }
  v18 = (_QWORD *)((char *)v13 + 48);
  if ( (_QWORD *)*v18 != v18 )
  {
    if ( (unsigned __int8)BmlIsSecondaryHardwareClonePath(a1, (unsigned int)v5, 0LL) )
    {
      WdLogNewEntry5_WdTrace(v20, v19);
      WdLogGlobalForLineNumber = 6829;
      if ( !*((_QWORD *)v14 + 18) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6832;
      }
    }
    *(_QWORD *)(v9 + a1 + 92) = 0LL;
    PathModeListForPathTargetModes = 0;
    *(_QWORD *)(v9 + a1 + 100) = 0LL;
    v21 = (_QWORD *)*v18;
    v35 = (struct DMMVIDPNSOURCEMODE *)*((_QWORD *)v14 + 18);
    if ( (_QWORD *)*v18 != v18 )
      NextMode = (struct DMMVIDPNSOURCEMODE *)(v21 - 1);
    while ( 1 )
    {
      if ( !NextMode )
        goto LABEL_9;
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v19);
      v22[3] = *((unsigned int *)NextMode + 6);
      v22[4] = *((unsigned int *)NextMode + 19);
      v22[5] = *((unsigned int *)NextMode + 20);
      BitsPerPixel = (unsigned int)DMMVIDPNSOURCEMODE::GetBitsPerPixel(NextMode, v23);
      v22[6] = BitsPerPixel;
      v22[7] = *((int *)NextMode + 24);
      ++*(_DWORD *)(v9 + a1 + 92);
      WdLogGlobalForLineNumber = 6852;
      if ( v35 && v35 != NextMode
        || !BmlAreRawModesEnabled(a1, v10)
        && (unsigned int)BmlGetModeCategoryForRegion((unsigned int *)NextMode + 19, (unsigned int *)(v9 + a1 + 36), 0) == 1
        || (v26 = a3, !BmlDoesSourceModeObeyConstraint(a1, a3, NextMode)) )
      {
        WdLogNewEntry5_WdTrace(BitsPerPixel, v24);
        WdLogGlobalForLineNumber = 6866;
        goto LABEL_32;
      }
      ++*(_DWORD *)(v9 + a1 + 96);
      v27 = *((unsigned int *)NextMode + 6);
      if ( !v35 )
      {
        v28 = (int)VIDPN_MGR::PinVidPnSourceMode(v32, v14, v27, 1);
        v31 = WdLogNewEntry5_WdTrace(v30, v29);
        *(_QWORD *)(v31 + 24) = v27;
        *(_QWORD *)(v31 + 32) = v28;
        WdLogGlobalForLineNumber = 6878;
        if ( (int)v28 < 0 )
        {
          PathModeListForPathTargetModes = 0;
          goto LABEL_32;
        }
        v26 = a3;
      }
      PathModeListForPathTargetModes = BmlGetPathModeListForPathTargetModes(a1, a2, v26, (int)Path, a4);
      if ( !v35 )
      {
        v16 = BmlUnPinSourceMode(a1, a2, v26);
        if ( v16 < 0 )
        {
          WdLogSingleEntry3(3LL, a1, a2, v10);
          WdLogGlobalForLineNumber = 6901;
          goto LABEL_10;
        }
      }
      if ( PathModeListForPathTargetModes < 0 )
      {
        WdLogSingleEntry3(2LL, a1, a2, v10);
        WdLogGlobalForLineNumber = 6909;
        ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v14 + 88));
        return (unsigned int)PathModeListForPathTargetModes;
      }
LABEL_32:
      NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(v14, NextMode);
    }
  }
  PathModeListForPathTargetModes = 0;
LABEL_9:
  v16 = PathModeListForPathTargetModes;
LABEL_10:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v34, 0LL);
  return (unsigned int)v16;
}
