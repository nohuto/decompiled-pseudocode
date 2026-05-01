/*
 * XREFs of ?SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompThumbnailAnimation@@_N@Z @ 0x1804967CC
 * Callers:
 *     ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x18049218C (-Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z.c)
 * Callees:
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x180018764 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723___ @ 0x180491688 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_7900d5c1cfc51d603dc477285f886.c)
 *     ?shared_from_this@?$enable_shared_from_this@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18049923C (-shared_from_this@-$enable_shared_from_this@UBootProviderActivator@implementation@Shell@Internal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppThumbnailWindow::SetRectAndCallback(
        __int64 a1,
        Geometry::CRect *a2,
        __int64 a3,
        unsigned int a4,
        char a5)
{
  int AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723; // ebx
  __int64 v10; // rdx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // r8
  __int64 v13; // rdx
  __int64 v14; // [rsp+38h] [rbp-21h] BYREF
  std::_Ref_count_base *v15; // [rsp+40h] [rbp-19h]
  __int64 v16; // [rsp+50h] [rbp-9h] BYREF
  std::_Ref_count_base *v17; // [rsp+58h] [rbp-1h]
  char v18; // [rsp+60h] [rbp+7h]
  __int64 v19; // [rsp+68h] [rbp+Fh] BYREF
  std::_Ref_count_base *v20; // [rsp+70h] [rbp+17h]
  char v21; // [rsp+78h] [rbp+1Fh]
  _QWORD v22[2]; // [rsp+80h] [rbp+27h] BYREF
  char v23; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]

  if ( Geometry::CRect::IsEmpty(a2) )
  {
    AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723 = -2147467259;
    v10 = 734LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723);
    return (unsigned int)AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723;
  }
  if ( !a3 )
  {
    AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723 = -2147024882;
    v10 = 735LL;
    goto LABEL_3;
  }
  std::enable_shared_from_this<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::shared_from_this(
    a1,
    &v14);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v16, &v14);
  v18 = a5;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(a1 + 120));
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v19, &v16);
  v21 = a5;
  *(_QWORD *)(a1 + 120) = 0LL;
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v22, &v19);
  v23 = a5;
  AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723___(0LL, (__int64)v22, v12, (_QWORD *)(a1 + 120));
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  if ( AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723 < 0 )
  {
    v13 = 748LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723);
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    return (unsigned int)AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723;
  }
  AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723 = (*(__int64 (__fastcall **)(__int64, Geometry::CRect *, _QWORD, _QWORD))(*(_QWORD *)a3 + 24LL))(a3, a2, a4, *(_QWORD *)(a1 + 120));
  if ( AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723 < 0 )
  {
    v13 = 749LL;
    goto LABEL_11;
  }
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  return 0LL;
}
