/*
 * XREFs of ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x18023F42C
 * Callers:
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x180216DA8 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     ?AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManagerAnimationHelper@@@Z @ 0x18038F070 (-AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManage.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18045FB90 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginWindowAnimation@CExperienceManagerAnimationHelper@@AEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x18023E4D0 (-BeginWindowAnimation@CExperienceManagerAnimationHelper@@AEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CExperienceManagerAnimationHelper::Begin(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 (__fastcall *v12)(__int64, __int64 *); // rbx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF

  v21 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  v13 = v12(a2, &v21);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v19 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, &v19);
    v14 = v16;
    if ( v16 >= 0 )
    {
      v16 = CExperienceManagerAnimationHelper::BeginWindowAnimation(a1, v19, a3, a4, a5, a6, a7, a8);
      v14 = v16;
      if ( v16 >= 0 )
      {
        v14 = 0;
        goto LABEL_11;
      }
      v17 = 125LL;
    }
    else
    {
      v17 = 124LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
      (const char *)(unsigned int)v16);
LABEL_11:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    return v14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7A,
    (int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
    (const char *)(unsigned int)v13);
  v15 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v14;
}
