/*
 * XREFs of BmlFunctionalizePath @ 0x140342374
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x140341EF8 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     Feature_AlwaysResetBackTrackSourceMode__private_IsEnabledDeviceUsageNoInline @ 0x140098258 (Feature_AlwaysResetBackTrackSourceMode__private_IsEnabledDeviceUsageNoInline.c)
 *     BmlPinNextBestTargetMode @ 0x1402D9F44 (BmlPinNextBestTargetMode.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1402DC840 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlGetNextBestSourceMode @ 0x1402DE3F8 (BmlGetNextBestSourceMode.c)
 *     BmlUnPinSourceMode @ 0x1402E0A6C (BmlUnPinSourceMode.c)
 *     BmlIsSecondaryHardwareClonePath @ 0x1403ECF28 (BmlIsSecondaryHardwareClonePath.c)
 */

__int64 __fastcall BmlFunctionalizePath(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v8; // rax
  __int64 v9; // rbp
  VIDPN_MGR *v10; // rax
  struct DMMVIDPNTARGETMODESET *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DMMVIDPNSOURCEMODESET *v14; // rbx
  __int64 BestTargetMode; // rdi
  __int64 v16; // r12
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int NextBestSourceMode; // eax
  VIDPN_MGR *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // ebx
  struct DMMVIDPNTARGETMODESET *v32; // [rsp+80h] [rbp+8h] BYREF
  VIDPN_MGR *v33; // [rsp+88h] [rbp+10h]
  unsigned int v34; // [rsp+90h] [rbp+18h] BYREF
  __int64 v35; // [rsp+98h] [rbp+20h]

  v35 = a4;
  v5 = a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  v9 = 120 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v10 = *(VIDPN_MGR **)(a2 + 48);
  WdLogGlobalForLineNumber = 3630;
  v33 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3635;
  }
  v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 88));
  v32 = v11;
  v14 = v11;
  if ( !v11 )
  {
    LODWORD(BestTargetMode) = -1071774968;
LABEL_36:
    if ( *(_WORD *)(a1 + v9 + 66)
      && !(unsigned __int8)BmlIsSecondaryHardwareClonePath(a1, (unsigned int)v5, 0LL)
      && *(_WORD *)(a1 + v9 + 64) )
    {
      if ( (unsigned int)Feature_AlwaysResetBackTrackSourceMode__private_IsEnabledDeviceUsageNoInline() )
        *(_WORD *)(a1 + v9 + 64) = 0;
      v31 = BmlUnPinSourceMode(a1, a2, v5);
      if ( v31 >= 0 )
      {
        if ( !(unsigned int)Feature_AlwaysResetBackTrackSourceMode__private_IsEnabledDeviceUsageNoInline() )
          *(_WORD *)(a1 + v9 + 64) = 0;
      }
      else
      {
        WdLogSingleEntry3(3LL, a1, a2, v5);
        WdLogGlobalForLineNumber = 3792;
        LODWORD(BestTargetMode) = v31;
      }
    }
LABEL_16:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v32, 0LL);
    return (unsigned int)BestTargetMode;
  }
  if ( *((struct DMMVIDPNTARGETMODESET **)v11 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v11 + 48) )
  {
    LODWORD(BestTargetMode) = -1071774970;
    goto LABEL_36;
  }
  LODWORD(v16) = -1;
  v34 = -1;
  if ( !*(_WORD *)(a1 + v9 + 64) )
  {
    if ( !*(_WORD *)(a1 + v9 + 66) || (unsigned __int8)BmlIsSecondaryHardwareClonePath(a1, (unsigned int)v5, 0LL) )
    {
      WdLogNewEntry5_WdTrace(v13, v12);
      WdLogGlobalForLineNumber = 3657;
      if ( !*((_QWORD *)v14 + 18) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3660;
      }
      BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, v5, a4);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18) + 24) = BestTargetMode;
      WdLogGlobalForLineNumber = 3666;
      if ( (int)BestTargetMode >= 0 )
        ++*(_WORD *)(a1 + v9 + 64);
      goto LABEL_16;
    }
    if ( *((_QWORD *)v14 + 18) )
    {
      WdLogSingleEntry0((unsigned int)(v17 + 1));
      WdLogGlobalForLineNumber = 3675;
    }
    goto LABEL_24;
  }
  if ( !*((_QWORD *)v11 + 18) )
  {
    WdLogSingleEntry0((unsigned int)v12);
    WdLogGlobalForLineNumber = 3679;
  }
  v21 = (int)BmlPinNextBestTargetMode(a1, a2, v5, a4);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22) + 24) = v21;
  WdLogGlobalForLineNumber = 3688;
  if ( (int)v21 < 0 )
  {
    if ( *(_WORD *)(a1 + v9 + 66) && !(unsigned __int8)BmlIsSecondaryHardwareClonePath(a1, (unsigned int)v5, 0LL) )
    {
      LODWORD(v16) = *(_DWORD *)(*((_QWORD *)v14 + 18) + 24LL);
      v34 = v16;
LABEL_24:
      LODWORD(BestTargetMode) = -1071774970;
      while ( *(_WORD *)(a1 + v9 + 64) < *(_WORD *)(a1 + v9 + 66) )
      {
        NextBestSourceMode = BmlGetNextBestSourceMode(a1, a2, v5, (__int64)v14, v16, &v34);
        LODWORD(BestTargetMode) = NextBestSourceMode;
        if ( NextBestSourceMode < 0 )
        {
          if ( NextBestSourceMode != -1071774970 )
          {
            WdLogSingleEntry4(3LL, NextBestSourceMode, a1, v5, a2);
            WdLogGlobalForLineNumber = 3727;
          }
          goto LABEL_36;
        }
        v16 = v34;
        if ( v34 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3733;
        }
        v27 = v33;
        ++*(_WORD *)(a1 + v9 + 64);
        BestTargetMode = (int)VIDPN_MGR::PinVidPnSourceMode(v27, v14, v16, 1);
        v30 = WdLogNewEntry5_WdTrace(v29, v28);
        *(_QWORD *)(v30 + 24) = v16;
        *(_QWORD *)(v30 + 32) = BestTargetMode;
        WdLogGlobalForLineNumber = 3738;
        if ( (int)BestTargetMode >= 0 )
        {
          LODWORD(BestTargetMode) = BmlPinNextBestTargetMode(a1, a2, v5, v35);
          if ( (int)BestTargetMode >= 0 )
            goto LABEL_16;
        }
        *(_DWORD *)(a1 + v9 + 88) = BestTargetMode;
        ++*(_DWORD *)(a1 + v9 + 72);
        if ( (_DWORD)BestTargetMode != -1071774970 )
        {
          WdLogSingleEntry4(3LL, (int)BestTargetMode, a1, a2, v5);
          WdLogGlobalForLineNumber = 3758;
          goto LABEL_36;
        }
      }
      goto LABEL_36;
    }
    WdLogNewEntry5_WdTrace(v25, v24);
    WdLogGlobalForLineNumber = 3698;
    *(_WORD *)(a1 + v9 + 64) = 0;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v32, 0LL);
    return 3223192326LL;
  }
  else
  {
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v32, 0LL);
    return (unsigned int)v21;
  }
}
