/*
 * XREFs of BmlPinNextBestTargetMode @ 0x1402D9F44
 * Callers:
 *     BmlFunctionalizePath @ 0x140342374 (BmlFunctionalizePath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     BmlPinPathContentRotation @ 0x1402D76DC (BmlPinPathContentRotation.c)
 *     BmlPinPathContentScaling @ 0x1402D9D38 (BmlPinPathContentScaling.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1402DB240 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlGetNextBestTargetMode @ 0x1402DBD7C (BmlGetNextBestTargetMode.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1402E0800 (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlPinNextBestTargetMode(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v10; // rdi
  struct DMMVIDPNTARGETMODESET *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // esi
  int NextBestTargetMode; // eax
  unsigned int v19; // esi
  VIDPN_MGR *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int16 v24; // r8
  __int64 v25; // rcx
  __int64 result; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+50h] [rbp-28h]
  struct DMMVIDPNTARGETMODESET *v32; // [rsp+58h] [rbp-20h] BYREF
  VIDPN_MGR *v33; // [rsp+60h] [rbp-18h]
  unsigned int v35; // [rsp+C8h] [rbp+50h] BYREF
  unsigned __int16 v36; // [rsp+D0h] [rbp+58h]
  struct DMMVIDPNTARGETMODESET *v37; // [rsp+D8h] [rbp+60h] BYREF

  v36 = a3;
  v6 = 0;
  v33 = *(VIDPN_MGR **)(a2 + 48);
  v7 = a1 + 120LL * a3;
  v31 = a3;
  v8 = a1;
  if ( !v33 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3463;
  }
  v32 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 88));
  v10 = (__int64)v32;
  if ( v32 )
  {
    v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 96));
    v37 = v11;
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
    v14[3] = v11;
    v14[4] = *(unsigned __int16 *)(v7 + 68);
    v16 = *(unsigned __int16 *)(v7 + 70);
    v14[5] = v16;
    WdLogGlobalForLineNumber = 3474;
    if ( !v11 )
    {
      v17 = -1071774967;
      goto LABEL_29;
    }
    if ( *((struct DMMVIDPNTARGETMODESET **)v11 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v11 + 48) )
    {
      v17 = -1071774970;
LABEL_36:
      v8 = a1;
LABEL_29:
      v29 = WdLogNewEntry5_WdTrace(v16, v15);
      *(_QWORD *)(v29 + 24) = *(unsigned __int16 *)(v7 + 68);
      *(_QWORD *)(v29 + 32) = *(unsigned __int16 *)(v7 + 70);
      WdLogGlobalForLineNumber = 3591;
      if ( *(_WORD *)(v7 + 70) && *(_WORD *)(v7 + 68) )
      {
        if ( (int)BmlUnPinPartialPathModalityOnPath(v8, a2, v36) < 0 )
        {
          WdLogSingleEntry3(3LL, v8, v31, a2);
          WdLogGlobalForLineNumber = 3605;
        }
        *(_WORD *)(v7 + 68) = 0;
      }
      if ( v11 )
        ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v11 + 88));
      v6 = v17;
LABEL_19:
      ReferenceCounted::Release((ReferenceCounted *)(v10 + 88));
      return v6;
    }
    v16 = 0xFFFFFFFFLL;
    v35 = -1;
    if ( !*(_WORD *)(v7 + 68) )
    {
      if ( !*(_WORD *)(v7 + 70) )
      {
        if ( !*((_QWORD *)v11 + 18) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3494;
        }
        if ( (int)BmlPinPathContentScaling(v8, a2, a3) < 0 || (int)BmlPinPathContentRotation(v8, a2, a3) < 0 )
        {
          WdLogNewEntry5_WdTrace(v28, v27);
          WdLogGlobalForLineNumber = 3505;
          v6 = -1071774970;
        }
        else
        {
          ++*(_WORD *)(v7 + 68);
        }
LABEL_18:
        ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v11 + 88));
        goto LABEL_19;
      }
      if ( *((_QWORD *)v11 + 18) )
      {
        WdLogSingleEntry0(1LL);
        v16 = v35;
        WdLogGlobalForLineNumber = 3509;
      }
      goto LABEL_10;
    }
    if ( !*((_QWORD *)v11 + 18) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3514;
    }
    if ( *(_WORD *)(v7 + 70) )
    {
      v30 = *((_QWORD *)v11 + 18);
      v16 = *(unsigned int *)(v30 + 24);
      v35 = *(_DWORD *)(v30 + 24);
LABEL_10:
      v17 = -1071774970;
      while ( *(_WORD *)(v7 + 68) < *(_WORD *)(v7 + 70) )
      {
        LODWORD(v37) = 1;
        v32 = 0LL;
        NextBestTargetMode = BmlGetNextBestTargetMode(a1, a2, v36, v11, v10, v16, &v35, &v32, &v37);
        v17 = NextBestTargetMode;
        if ( NextBestTargetMode < 0 )
        {
          if ( NextBestTargetMode == -1071774970 )
            goto LABEL_36;
          v8 = a1;
          WdLogSingleEntry4(3LL, NextBestTargetMode, a1, v31, a2);
          WdLogGlobalForLineNumber = 3548;
          goto LABEL_29;
        }
        v19 = v35;
        if ( v35 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3554;
        }
        v20 = v33;
        ++*(_WORD *)(v7 + 68);
        v17 = VIDPN_MGR::PinVidPnTargetMode(v20, v11, v19, 1);
        if ( v17 >= 0 )
        {
          v22 = v35;
          v23 = WdLogNewEntry5_WdTrace(v21, v15);
          v24 = v36;
          *(_QWORD *)(v23 + 24) = v22;
          v25 = *((_QWORD *)v11 + 18);
          WdLogGlobalForLineNumber = 3562;
          *(_QWORD *)(v25 + 152) = v32;
          *(_DWORD *)(v25 + 160) = (_DWORD)v37;
          if ( (int)BmlPinPathContentScaling(a1, a2, v24) >= 0 && (int)BmlPinPathContentRotation(a1, a2, v36) >= 0 )
            goto LABEL_18;
          v17 = -1071774970;
        }
        *(_DWORD *)(v7 + 88) = v17;
        ++*(_DWORD *)(v7 + 76);
        if ( v17 != -1071774970 )
        {
          v8 = a1;
          WdLogSingleEntry4(3LL, v17, a1, v31, a2);
          WdLogGlobalForLineNumber = 3585;
          goto LABEL_29;
        }
        v16 = v35;
      }
      goto LABEL_36;
    }
    WdLogNewEntry5_WdTrace(v16, v15);
    WdLogGlobalForLineNumber = 3519;
    *(_WORD *)(v7 + 68) = 0;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v37, 0LL);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v32, 0LL);
    return 3223192326LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192328LL;
    WdLogGlobalForLineNumber = 3468;
  }
  return result;
}
