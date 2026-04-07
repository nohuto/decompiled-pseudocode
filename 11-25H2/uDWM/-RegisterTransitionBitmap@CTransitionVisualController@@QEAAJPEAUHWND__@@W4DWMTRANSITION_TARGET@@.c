/*
 * XREFs of ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x1800D2A48
 * Callers:
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800E88A8 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180058914 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@CProjectionBorderManager@@I@Z @ 0x1800BDCCC (-AddMultipleAndSet@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@C.c)
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
  signed int v8; // r10d
  int v11; // edx
  __int64 v13; // rax
  CMILRefCountBase *v14; // rbx
  signed int v15; // edx
  __int64 v16; // r8
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  int v19; // edi
  CBaseObject *v20; // rcx
  __int128 v21; // xmm1
  int v22; // eax
  unsigned int v24; // eax
  CBaseObject *v25; // rcx
  CMILRefCountBase *v26; // [rsp+30h] [rbp-51h] BYREF
  _OWORD v27[3]; // [rsp+38h] [rbp-49h] BYREF
  CBaseObject *v28; // [rsp+68h] [rbp-19h]

  v8 = a4[2] - *a4;
  v11 = a4[3];
  v28 = 0LL;
  v13 = (unsigned int)v8;
  v14 = 0LL;
  if ( v8 < 0 )
    v13 = 0LL;
  v26 = 0LL;
  v15 = v11 - a4[1];
  v16 = (unsigned int)v15;
  if ( v15 < 0 )
    v16 = 0LL;
  v17 = v13 * v16;
  memset(v27, 0, sizeof(v27));
  if ( v17 > 0xFFFFFFFF || (v18 = 4LL * (unsigned int)v17, v18 > 0xFFFFFFFF) || a8 < (unsigned int)v18 )
  {
    v19 = -2147024809;
    v24 = 3147;
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v19,
      v24,
      0LL);
    if ( a3 == 22 )
    {
      v25 = *(CBaseObject **)(a1 + 184);
      if ( v25 )
      {
        CBaseObject::Release(v25);
        *(_QWORD *)(a1 + 184) = 0LL;
      }
      goto LABEL_24;
    }
LABEL_22:
    if ( v28 )
      CBaseObject::Release(v28);
    goto LABEL_24;
  }
  if ( v8 < 0 )
    v8 = 0;
  if ( v15 < 0 )
    v15 = 0;
  v19 = CBitmapSource::Create(v8, v15, v8, v15, a7, &v26);
  if ( v19 < 0 )
  {
    v14 = v26;
    v24 = 3128;
    goto LABEL_29;
  }
  if ( a3 != 22 )
  {
    v14 = v26;
    *(_QWORD *)&v27[0] = a2;
    DWORD2(v27[0]) = a3;
    v28 = v26;
    v21 = *a6;
    *(_OWORD *)((char *)v27 + 12) = *a5;
    *(_OWORD *)((char *)&v27[1] + 12) = v21;
    if ( v26 )
      CMILRefCountBase::AddRef(v26);
    v22 = DynArray<CProjectionBorderManager::VisualInfo,0>::AddMultipleAndSet(a1 + 152, (__int64)v27);
    v19 = v22;
    if ( v22 >= 0 )
      goto LABEL_24;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v22,
      0xC46u,
      0LL);
    goto LABEL_22;
  }
  v20 = *(CBaseObject **)(a1 + 184);
  if ( v20 )
    CBaseObject::Release(v20);
  v14 = v26;
  *(_QWORD *)(a1 + 184) = v26;
  if ( v14 )
  {
    CMILRefCountBase::AddRef(v14);
LABEL_24:
    if ( v14 )
      CBaseObject::Release(v14);
  }
  return (unsigned int)v19;
}
