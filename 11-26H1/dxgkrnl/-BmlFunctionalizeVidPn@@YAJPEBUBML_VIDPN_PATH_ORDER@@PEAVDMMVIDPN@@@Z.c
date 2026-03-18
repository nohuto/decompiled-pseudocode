/*
 * XREFs of ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x140341EF8
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1403427E0 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x14041E938 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1402DFC14 (BmlGetRecommendedContentSizeForPath.c)
 *     BmlFunctionalizePath @ 0x140342374 (BmlFunctionalizePath.c)
 */

__int64 __fastcall BmlFunctionalizeVidPn(const struct BML_VIDPN_PATH_ORDER *a1, struct DMMVIDPN *a2)
{
  VIDPN_MGR *v4; // r15
  unsigned __int16 v5; // bp
  DMMVIDPNTOPOLOGY *v6; // r12
  unsigned __int16 v7; // di
  unsigned __int16 v8; // ax
  __int64 v9; // rbp
  __int64 v10; // rdx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // rdi
  __int64 v16; // rdx
  struct DMMVIDPNPRESENTPATH *v17; // r11
  unsigned int i; // r8d
  struct DMMVIDPNTARGETMODESET *v19; // rax
  __int16 v20; // cx
  unsigned __int16 v21; // di
  __int64 v22; // rsi
  __int64 result; // rax
  _QWORD *v24; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DMMVIDPNPRESENTPATH *v26; // rbp
  struct DMMVIDPNTARGETMODESET *v27; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4015;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4016;
  }
  v4 = (VIDPN_MGR *)*((_QWORD *)a2 + 6);
  if ( !v4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4019;
  }
  v5 = 0;
  v6 = (struct DMMVIDPN *)((char *)a2 + 96);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = a2;
  WdLogGlobalForLineNumber = 4021;
LABEL_8:
  if ( v5 >= *(unsigned __int8 *)a1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)a1;
      if ( v7 >= v8 )
        break;
      v9 = v7;
      v10 = *((_QWORD *)a1 + 15 * v7 + 2);
      Path = DMMVIDPNTOPOLOGY::FindPath(
               (struct DMMVIDPN *)((char *)a2 + 96),
               *(_DWORD *)(v10 + 24),
               *(_DWORD *)(v10 + 28));
      if ( !Path )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4091;
      }
      v14 = BmlFunctionalizePath(a1, a2, v7, Path);
      if ( v14 < 0 )
      {
        if ( v14 != -1071774970 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
          v24[3] = a2;
          v24[4] = a1;
          v24[5] = v7;
          result = (unsigned int)v14;
          WdLogGlobalForLineNumber = 4120;
          return result;
        }
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = v7;
        WdLogGlobalForLineNumber = 4105;
        ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v4);
        DxgkLogCodePointPacket(0x11u, v7, 0, 0, *(_QWORD *)((char *)ContainingAdapter + 412));
        if ( !v7 )
          return 3223192326LL;
        --v7;
      }
      else
      {
        ++v7;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = v9;
        WdLogGlobalForLineNumber = 4100;
      }
    }
    v21 = 0;
    if ( (_BYTE)v8 )
    {
      do
      {
        v22 = *((_QWORD *)a1 + 15 * v21 + 2);
        if ( (*(_QWORD *)v22 & 0x20000000000000LL) != 0 )
        {
          if ( (*(_QWORD *)v22 & 0x20200LL) != 0x20200 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4138;
          }
          v26 = DMMVIDPNTOPOLOGY::FindPath(v6, *(_DWORD *)(v22 + 24), *(_DWORD *)(v22 + 28));
          if ( !v26 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4142;
          }
          if ( (int)BmlGetRecommendedContentSizeForPath((unsigned __int8 *)a1, v21, (__int64)v26, v22) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4151;
          }
        }
        ++v21;
      }
      while ( v21 < *(unsigned __int8 *)a1 );
    }
    return 0LL;
  }
  v15 = 120LL * v5;
  v16 = *(_QWORD *)((char *)a1 + v15 + 16);
  *(_WORD *)((char *)a1 + v15 + 64) = 0;
  *(_WORD *)((char *)a1 + v15 + 68) = 0;
  v17 = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)a2 + 96), *(_DWORD *)(v16 + 24), *(_DWORD *)(v16 + 28));
  if ( v17 )
  {
    for ( i = 0; i < v5; ++i )
    {
      if ( *(_DWORD *)(*((_QWORD *)a1 + 15 * i + 2) + 24LL) == *(_DWORD *)(*((_QWORD *)a1 + 15 * v5 + 2) + 24LL) )
      {
        if ( *(_WORD *)((char *)a1 + v15 + 66) )
        {
          _mm_lfence();
          WdLogSingleEntry5(
            3LL,
            v5,
            a2,
            *(unsigned int *)(*(_QWORD *)((char *)a1 + v15 + 16) + 24LL),
            *(unsigned int *)(*(_QWORD *)((char *)a1 + v15 + 16) + 28LL),
            a1);
          WdLogGlobalForLineNumber = 4077;
          return 3223192345LL;
        }
LABEL_22:
        ++v5;
        goto LABEL_8;
      }
    }
    v19 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v17 + 11));
    v20 = *(_WORD *)((char *)a1 + v15 + 66);
    v27 = v19;
    if ( *((_QWORD *)v19 + 18) )
    {
      if ( !v20 )
      {
LABEL_20:
        if ( v19 )
          ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v19 + 88));
        goto LABEL_22;
      }
    }
    else if ( v20 )
    {
      goto LABEL_20;
    }
    _mm_lfence();
    WdLogSingleEntry5(
      3LL,
      v5,
      a2,
      *(unsigned int *)(*(_QWORD *)((char *)a1 + v15 + 16) + 24LL),
      *(unsigned int *)(*(_QWORD *)((char *)a1 + v15 + 16) + 28LL),
      a1);
    WdLogGlobalForLineNumber = 4063;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v27, 0LL);
    return 3223192328LL;
  }
  _mm_lfence();
  WdLogSingleEntry5(
    3LL,
    a1,
    v5,
    *(unsigned int *)(*(_QWORD *)((char *)a1 + v15 + 16) + 24LL),
    *(unsigned int *)(*(_QWORD *)((char *)a1 + v15 + 16) + 28LL),
    a2);
  WdLogGlobalForLineNumber = 4041;
  return 3223192345LL;
}
