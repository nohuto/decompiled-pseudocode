/*
 * XREFs of ?SwitchBack@BackOperation@@UEAAJPEAUIApplicationView@@W4BackOperationFlags@@@Z @ 0x180503920
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18069CEEC (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18069D52C (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18069D908 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BackOperation::SwitchBack(__int64 a1, __int64 a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // ebx
  int ViewFullScreen; // eax
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v13 = (a1 + 16) & -(__int64)(a1 != 176);
  v14 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v13, 1);
  v6 = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = 589889;
    if ( (a3 & 1) != 0 )
    {
      ViewFullScreen = CAppLayoutOperation::_MakeViewFullScreen(a1 - 152, a2, 10LL);
      v7 = ViewFullScreen;
      if ( ViewFullScreen < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x47,
          (int)"pcshell\\twinui\\tabletmode\\lib\\backoperation.cpp",
          (const char *)(unsigned int)ViewFullScreen);
        v8 = v7;
        v9 = 58LL;
        goto LABEL_6;
      }
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 - 88), a2);
      v10 = 589891;
    }
    CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
    *(_DWORD *)(a1 - 72) = v10;
    v7 = 0;
    goto LABEL_9;
  }
  v8 = (unsigned int)v6;
  v9 = 55LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\tabletmode\\lib\\backoperation.cpp",
    (const char *)v8);
LABEL_9:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v13);
  return v7;
}
