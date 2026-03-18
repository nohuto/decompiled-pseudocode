/*
 * XREFs of ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1402673A4
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x140444654 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_M.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x14004D940 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch(DMMVIDPNTARGET **this, DMMVIDPNTARGET **a2)
{
  bool v4; // r14
  struct DMMVIDPNTARGETMODESET *v5; // rbp
  __int64 v6; // rsi
  struct DMMVIDPNTARGETMODESET *v7; // rdi
  __int64 v8; // rbx
  struct DMMVIDPNTARGETMODESET *v9; // rsi
  __int64 v10; // r12
  struct DMMVIDPNTARGETMODESET *v11; // rbx
  __int64 v12; // r15

  v4 = 0;
  v5 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[12]);
  v6 = *((_QWORD *)v5 + 18);
  if ( !v6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 746;
  }
  v7 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(a2[12]);
  v8 = *((_QWORD *)v7 + 18);
  if ( !v8 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 749;
  }
  if ( !DMMVIDPNTARGETMODE::operator!=(v6, v8) )
  {
    v9 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[11]);
    v10 = *((_QWORD *)v9 + 18);
    if ( !v10 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 761;
    }
    v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(a2[11]);
    v12 = *((_QWORD *)v11 + 18);
    if ( !v12 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 764;
    }
    v4 = *(_DWORD *)(v10 + 96) == *(_DWORD *)(v12 + 96);
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v11 + 88));
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v9 + 88));
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v7 + 88));
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v5 + 88));
  return v4;
}
