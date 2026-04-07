/*
 * XREFs of ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180023D1C
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001A06C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x180025564 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x18002DD10 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180031B64 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_NPEAVCVisual@@22PEA_N@Z @ 0x180032EE0 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z @ 0x180044CC0 (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002403C (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180024160 (-reset@-$shared_object@V-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800241BC (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180024260 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800243C4 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180024438 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180024460 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?HasSomethingToRender@CLegacyNonClientBackground@@QEBA_NXZ @ 0x180078940 (-HasSomethingToRender@CLegacyNonClientBackground@@QEBA_NXZ.c)
 *     ?CancelCrossfade@CButton@@QEAAJXZ @ 0x18008D478 (-CancelCrossfade@CButton@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTopLevelWindow::CloneVisualTreeForLivePreview(
        CTopLevelWindow *this,
        unsigned __int8 a2,
        struct CTopLevelWindow **a3)
{
  int v4; // r12d
  CLegacyNonClientBackground *v6; // rcx
  char v7; // dl
  __int64 v8; // rax
  char v9; // di
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r15d
  CButton **v15; // r14
  CButton *v16; // rax
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v27; // eax
  bool v28; // zf
  char v29; // al
  struct CTopLevelWindow *v30; // [rsp+30h] [rbp-D0h] BYREF
  void **v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  char v33; // [rsp+4Ch] [rbp-B4h]
  int v34; // [rsp+70h] [rbp-90h] BYREF
  const char *v35; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+80h] [rbp-80h]
  char v37; // [rsp+88h] [rbp-78h]
  int v38; // [rsp+90h] [rbp-70h]
  _BYTE v39[152]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v40; // [rsp+130h] [rbp+30h]
  int v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  int *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v45[3]; // [rsp+160h] [rbp+60h] BYREF
  int v46; // [rsp+178h] [rbp+78h]
  int *v47; // [rsp+180h] [rbp+80h]

  v4 = a2;
  v32 = 0;
  v33 = 0;
  v37 = 0;
  v34 = 0;
  v35 = "CloneWindow";
  v36 = 0LL;
  v38 = 0;
  v40 = 0LL;
  memset_0(v39, 0, sizeof(v39));
  v41 = 1;
  v42 = 0LL;
  v43 = &v32;
  v44 = 0LL;
  v45[0] = 0LL;
  v45[1] = &v31;
  v45[2] = 0LL;
  v46 = 0;
  v47 = &v34;
  v31 = &WindowFrameLoggingTelemetry::CloneWindow::`vftable';
  WindowFrameLoggingTelemetry::CloneWindow::StartActivity((WindowFrameLoggingTelemetry::CloneWindow *)&v31);
  v6 = (CLegacyNonClientBackground *)*((_QWORD *)this + 32);
  v7 = -9;
  if ( v6 )
  {
    if ( (_BYTE)v4 || (v28 = !CLegacyNonClientBackground::HasSomethingToRender(v6), v29 = 0, v28) )
      v29 = 8;
    *((_BYTE *)v6 + 36) &= v7;
    *((_BYTE *)v6 + 36) |= v29;
  }
  v8 = *((_QWORD *)this + 35);
  v9 = 8 * v4;
  if ( v8 )
  {
    *(_BYTE *)(v8 + 36) &= v7;
    *(_BYTE *)(v8 + 36) |= v9;
  }
  v10 = *((_QWORD *)this + 65);
  if ( v10 )
  {
    *(_BYTE *)(v10 + 36) &= v7;
    *(_BYTE *)(v10 + 36) |= v9;
  }
  v11 = *((_QWORD *)this + 67);
  if ( v11 )
  {
    *(_BYTE *)(v11 + 36) &= v7;
    *(_BYTE *)(v11 + 36) |= v9;
  }
  v12 = *((_QWORD *)this + 63);
  if ( v12 )
  {
    *(_BYTE *)(v12 + 36) &= v7;
    *(_BYTE *)(v12 + 36) |= v9;
  }
  v13 = *((_QWORD *)this + 93);
  if ( v13 )
  {
    *(_BYTE *)(v13 + 36) &= v7;
    *(_BYTE *)(v13 + 36) |= v9;
  }
  v14 = 0;
  v15 = (CButton **)((char *)this + 472);
  while ( v14 < 4 )
  {
    v16 = *v15;
    if ( *v15 )
    {
      *((_BYTE *)v16 + 36) &= v7;
      *((_BYTE *)v16 + 36) |= v9;
      if ( !(_BYTE)v4 )
      {
        v27 = CButton::CancelCrossfade(*v15);
        v19 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x157Fu, 0LL);
          goto LABEL_32;
        }
        v7 = -9;
      }
    }
    ++v14;
    ++v15;
  }
  v30 = 0LL;
  v17 = (8 * v4 + 2) | 1u;
  if ( (*((_BYTE *)this + 568) & 0x20) == 0 )
    v17 = (unsigned int)(8 * v4 + 2);
  v18 = CTopLevelWindow::CloneVisualTree(this, &v30, v17);
  v19 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x1591u, 0LL);
  }
  else
  {
    *a3 = v30;
    v20 = *((_QWORD *)this + 32);
    if ( v20 )
      *(_BYTE *)(v20 + 36) &= ~8u;
    v21 = *((_QWORD *)this + 35);
    if ( v21 )
      *(_BYTE *)(v21 + 36) &= ~8u;
    v22 = *((_QWORD *)this + 65);
    if ( v22 )
      *(_BYTE *)(v22 + 36) &= ~8u;
    v23 = *((_QWORD *)this + 67);
    if ( v23 )
      *(_BYTE *)(v23 + 36) &= ~8u;
    v24 = *((_QWORD *)this + 63);
    if ( v24 )
      *(_BYTE *)(v24 + 36) &= ~8u;
    v25 = *((_QWORD *)this + 93);
    if ( v25 )
      *(_BYTE *)(v25 + 36) &= ~8u;
  }
LABEL_32:
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v31, v19);
  v31 = &WindowFrameLoggingTelemetry::CloneWindow::`vftable';
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v31);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v45);
  wil::details::shared_object<wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v44);
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>(&v32);
  return v19;
}
