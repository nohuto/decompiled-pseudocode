/*
 * XREFs of ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1402DB4C0
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002D0DC (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z @ 0x140266C40 (-PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I@Z.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1402DAE80 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1402DB240 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 * Callees:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14002C9E0 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140053EAC (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1402DB730 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::PinMode(DMMVIDPNTARGETMODESET *this, unsigned int a2)
{
  __int64 v2; // rsi
  _QWORD *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  DMMVIDPNPRESENTPATH *v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r15
  DMMVIDPNTOPOLOGY *v12; // r14
  unsigned int PathSourceFromTarget; // r8d
  _QWORD *v14; // rsi

  v2 = a2;
  if ( !*((_BYTE *)this + 136) )
  {
    WdLogSingleEntry2(7LL, a2, this);
    result = 3223192352LL;
    WdLogGlobalForLineNumber = 325;
    return result;
  }
  v4 = (_QWORD *)((char *)this + 48);
  if ( (_QWORD *)*v4 == v4 || (v6 = *v4 - 8LL, *v4 == 8LL) )
  {
LABEL_3:
    WdLogSingleEntry2(2LL, a2, this);
    result = 3223192394LL;
    WdLogGlobalForLineNumber = 338;
    return result;
  }
  while ( *(_DWORD *)(v6 + 24) != a2 )
  {
    v7 = *(_QWORD **)(v6 + 8);
    v6 = (__int64)(v7 - 1);
    if ( v7 == v4 )
      v6 = 0LL;
    if ( !v6 )
      goto LABEL_3;
  }
  v10 = *((_QWORD *)this + 14);
  v11 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = v6;
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL);
    result = 3223192329LL;
    WdLogGlobalForLineNumber = 360;
    return result;
  }
  if ( !*(_QWORD *)(v10 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v12 = (DMMVIDPNTOPOLOGY *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v10 + 40) + 64LL) + 96);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v12, *(_DWORD *)(v10 + 24));
  if ( PathSourceFromTarget == -1 )
  {
    WdLogSingleEntry2(2LL, v2, this);
    result = 3223192384LL;
    WdLogGlobalForLineNumber = 377;
    return result;
  }
  v14 = (_QWORD *)*((_QWORD *)v12 + 3);
  if ( v14 == (_QWORD *)((char *)v12 + 24) )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = (DMMVIDPNPRESENTPATH *)(v14 - 1);
    while ( v8 )
    {
      if ( *(_DWORD *)(*((_QWORD *)v8 + 11) + 24LL) == PathSourceFromTarget
        && *(_DWORD *)(*((_QWORD *)v8 + 12) + 24LL) == *(_DWORD *)(v10 + 24) )
      {
        break;
      }
      v9 = (_QWORD *)*((_QWORD *)v8 + 1);
      v8 = (DMMVIDPNPRESENTPATH *)(v9 - 1);
      if ( v9 == (_QWORD *)((char *)v12 + 24) )
        v8 = 0LL;
    }
    if ( v8 )
      goto LABEL_15;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 389;
LABEL_15:
  if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(v8) )
  {
    *(D3DDDI_RATIONAL *)(v6 + 152) = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v6 + 72));
    result = 0LL;
    *(_DWORD *)(v6 + 160) = 1;
  }
  else
  {
    WdLogSingleEntry5(
      2LL,
      *(unsigned int *)(v6 + 84),
      *(unsigned int *)(v6 + 88),
      *(unsigned int *)(v6 + 92),
      *(unsigned int *)(v6 + 96),
      *(unsigned int *)(v10 + 24));
    result = 3223192389LL;
    WdLogGlobalForLineNumber = 401;
    *((_QWORD *)this + 18) = v11;
  }
  return result;
}
