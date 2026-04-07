/*
 * XREFs of ?SetReceiver@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z @ 0x180059F28
 * Callers:
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800597C4 (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 * Callees:
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x18000F840 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this,
        struct Windows::UI::Composition::IVisual *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, char *); // rbx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = 0LL;
  v4 = *((_QWORD *)this + 12);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 120LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  v6 = v5(v4, &v18);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x100,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v6,
      v16);
    v11 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v7;
  }
  v8 = (_QWORD *)((char *)this + 104);
  if ( Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>((_QWORD *)this + 13) )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 64LL))(v18, *v8);
    v7 = v14;
    if ( v14 < 0 )
    {
      v15 = 260LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v14,
        v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
      return v7;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 13);
  }
  if ( a2 )
  {
    v12 = *((_QWORD *)this + 11);
    v13 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 64LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 13);
    v14 = v13(v12, (char *)this + 104);
    v7 = v14;
    if ( v14 < 0 )
    {
      v15 = 266LL;
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::UI::Composition::IVisual *))(*(_QWORD *)*v8 + 56LL))(
              *v8,
              a2);
      v7 = v14;
      if ( v14 < 0 )
      {
        v15 = 267LL;
      }
      else
      {
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 48LL))(v18, *v8);
        v7 = v14;
        if ( v14 >= 0 )
          goto LABEL_4;
        v15 = 268LL;
      }
    }
    goto LABEL_14;
  }
LABEL_4:
  v9 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
