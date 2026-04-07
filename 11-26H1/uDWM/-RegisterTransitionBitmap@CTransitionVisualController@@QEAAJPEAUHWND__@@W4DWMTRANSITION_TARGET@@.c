/*
 * XREFs of ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x1800CFB88
 * Callers:
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800E4818 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180071634 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@CProjectionBorderManager@@I@Z @ 0x1800BE1A4 (-AddMultipleAndSet@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@C.c)
 */

__int64 __fastcall CTransitionVisualController::RegisterTransitionBitmap(
        __int64 a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        _OWORD *a5,
        __int128 *a6,
        void *a7,
        unsigned __int64 a8)
{
  __int64 v8; // rax
  __int64 v12; // r8
  signed int v13; // ecx
  signed int v14; // edx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned int v17; // edi
  CBaseObject *v18; // rcx
  __int128 v19; // xmm1
  int v20; // eax
  unsigned int v22; // eax
  CBaseObject *v23; // rcx
  _BYTE v24[48]; // [rsp+38h] [rbp-49h] BYREF
  CBaseObject *v25; // [rsp+68h] [rbp-19h]

  v8 = 0LL;
  v25 = 0LL;
  v12 = 0LL;
  v13 = a4[2] - *a4;
  v14 = a4[3] - a4[1];
  if ( v14 >= 0 )
    v12 = (unsigned int)v14;
  *(_OWORD *)v24 = 0LL;
  if ( v13 >= 0 )
    v8 = (unsigned int)v13;
  v15 = v8 * v12;
  memset(&v24[16], 0, 32);
  if ( v15 > 0xFFFFFFFF || (v16 = 4LL * (unsigned int)v15, v16 > 0xFFFFFFFF) || a8 < (unsigned int)v16 )
  {
    v17 = -2147024809;
    v22 = 3090;
  }
  else
  {
    if ( v13 < 0 )
      v13 = 0;
    if ( v14 < 0 )
      v14 = 0;
    v17 = CBitmapSource::Create(v13, v14);
    if ( (v17 & 0x80000000) == 0 )
    {
      if ( a3 == 22 )
      {
        v18 = *(CBaseObject **)(a1 + 184);
        if ( v18 )
          CBaseObject::Release(v18);
        *(_QWORD *)(a1 + 184) = 0LL;
        return v17;
      }
      *(_QWORD *)v24 = a2;
      *(_DWORD *)&v24[8] = a3;
      v25 = 0LL;
      v19 = *a6;
      *(_OWORD *)&v24[12] = *a5;
      *(_OWORD *)&v24[28] = v19;
      v20 = DynArray<CProjectionBorderManager::VisualInfo,0>::AddMultipleAndSet(a1 + 152, (__int64)v24);
      v17 = v20;
      if ( v20 >= 0 )
        return v17;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v20,
        0xC0Du,
        0LL);
      goto LABEL_19;
    }
    v22 = 3071;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v17,
    v22,
    0LL);
  if ( a3 != 22 )
  {
LABEL_19:
    if ( v25 )
      CBaseObject::Release(v25);
    return v17;
  }
  v23 = *(CBaseObject **)(a1 + 184);
  if ( v23 )
  {
    CBaseObject::Release(v23);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  return v17;
}
