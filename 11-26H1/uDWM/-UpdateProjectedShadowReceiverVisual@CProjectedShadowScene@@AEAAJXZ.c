/*
 * XREFs of ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x18004DAA4
 * Callers:
 *     ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z @ 0x18004D5E8 (-AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z.c)
 *     ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800BE080 (-RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C124 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetReceiver@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z @ 0x18004DC4C (-SetReceiver@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUIVisual@Composition@U.c)
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x18004DDF4 (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800664B8 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasCasters@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA_NXZ @ 0x18008D8C4 (-HasCasters@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectedShadowScene::UpdateProjectedShadowReceiverVisual(CProjectedShadowScene *this)
{
  CProjectedShadowScene::CProjectedShadowSceneInstance **v2; // rsi
  CProjectedShadowScene::CProjectedShadowSceneInstance **v3; // rdi
  CProjectedShadowScene::CProjectedShadowSceneInstance **v4; // r14
  int v5; // eax
  unsigned int v6; // esi
  CProjectedShadowScene::CProjectedShadowSceneInstance **v8; // r15
  int v9; // eax
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::UI::Composition::IVisual *v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CProjectedShadowScene::CProjectedShadowSceneInstance **)((char *)this + 24);
  v3 = (CProjectedShadowScene::CProjectedShadowSceneInstance **)((char *)this + 32);
  if ( CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(*((CProjectedShadowScene::CProjectedShadowSceneInstance **)this
                                                                        + 3)) )
  {
    v4 = v2;
  }
  else
  {
    if ( !CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(*v3) )
    {
      v4 = v2;
LABEL_5:
      if ( CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(*v2)
        || CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(*v3)
        || !*((_BYTE *)this + 64) )
      {
        return 0LL;
      }
      v5 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(*v4, 0LL);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBA,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
          (const char *)(unsigned int)v5,
          v13);
        return v6;
      }
      v10 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(*v3, 0LL);
      if ( v10 >= 0 )
      {
        v10 = CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual(this);
        if ( v10 >= 0 )
        {
          *((_BYTE *)this + 64) = 0;
          return 0LL;
        }
        v12 = 189LL;
      }
      else
      {
        v12 = 187LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v10,
        v13);
      return (unsigned int)v10;
    }
    v4 = (CProjectedShadowScene::CProjectedShadowSceneInstance **)((char *)this + 24);
  }
  v8 = v3;
  if ( *((_BYTE *)this + 64) )
    goto LABEL_5;
  v15 = 0LL;
  v9 = Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<Windows::UI::Composition::IVisual>((char *)this + 40, &v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 175LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v9,
      v13);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
    return (unsigned int)v10;
  }
  v9 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(*v2, v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 176LL;
    goto LABEL_20;
  }
  v9 = CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(*v8, v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 177LL;
    goto LABEL_20;
  }
  *((_BYTE *)this + 64) = 1;
  v9 = CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual(this);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 181LL;
    goto LABEL_20;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  return 0LL;
}
