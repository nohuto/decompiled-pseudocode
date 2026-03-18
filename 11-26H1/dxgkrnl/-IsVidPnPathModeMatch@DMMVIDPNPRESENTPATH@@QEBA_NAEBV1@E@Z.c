/*
 * XREFs of ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1404014A0
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x140444654 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_M.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14002DB64 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x14002DFB0 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002DFE8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x140034CE0 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x14004D940 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(DMMVIDPNTARGET **this, DMMVIDPNTARGET **a2, char a3)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *v4; // rbx
  bool v7; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v8; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v9; // eax
  struct DMMVIDPNTARGETMODESET *v10; // rbx
  __int64 v11; // r15
  struct DMMVIDPNTARGETMODESET *v12; // rdi
  __int64 v13; // r12
  struct DMMVIDPNTARGETMODESET *v14; // rbp
  _DWORD *v15; // r12
  struct DMMVIDPNTARGETMODESET *v16; // rsi
  _DWORD *v17; // r15

  v4 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)this + 29;
  v7 = 0;
  if ( !DMMVIDPNPRESENTPATH::IsFunctional((DMMVIDPNPRESENTPATH *)this)
    || (v8 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*v4),
        !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v8)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 688;
  }
  if ( !DMMVIDPNPRESENTPATH::IsFunctional((DMMVIDPNPRESENTPATH *)a2)
    || (v9 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*v4),
        !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v9)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 690;
  }
  if ( !a3 && *v4 != *((_DWORD *)a2 + 29) || *((_DWORD *)this + 28) != *((_DWORD *)a2 + 28) )
    return 0;
  v10 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[12]);
  v11 = *((_QWORD *)v10 + 18);
  if ( !v11 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 711;
  }
  v12 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(a2[12]);
  v13 = *((_QWORD *)v12 + 18);
  if ( !v13 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 714;
  }
  if ( !DMMVIDPNTARGETMODE::operator!=(v11, v13) )
  {
    v14 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[11]);
    v15 = (_DWORD *)*((_QWORD *)v14 + 18);
    if ( !v15 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 726;
    }
    v16 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(a2[11]);
    v17 = (_DWORD *)*((_QWORD *)v16 + 18);
    if ( !v17 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 729;
    }
    v7 = DMMVIDPNSOURCEMODE::operator==(v15, v17);
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v16 + 88));
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v14 + 88));
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v12 + 88));
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v10 + 88));
  return v7;
}
