/*
 * XREFs of ?RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1801DC1E0
 * Callers:
 *     ??$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1801DC130 (--$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800275B4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::RuntimeClassInitialize(TouchKeyboardExperienceManager *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, __int64 (__fastcall *)(char *), TouchKeyboardExperienceManager *, char *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (TouchKeyboardExperienceManager *)((char *)this + 48),
         &IID_ITouchKeyboardExperienceManager);
  if ( v2 < 0 )
  {
    v3 = 634LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (TouchKeyboardExperienceManager *)((char *)this + 48),
         &GUID_c9969d8d_c814_50fd_9f55_84a54e9453fc);
  if ( v2 < 0 )
  {
    v3 = 635LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 100);
  v2 = CoreUICreate((char *)this + 800);
  if ( v2 < 0 )
  {
    v3 = 636LL;
    goto LABEL_3;
  }
  v5 = *((_QWORD *)this + 100);
  v6 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(char *), TouchKeyboardExperienceManager *, char *))(*(_QWORD *)v5 + 144LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 101);
  v2 = v6(v5, TouchKeyboardExperienceManager::AnimationGapTimerCallback, this, (char *)this + 808);
  if ( v2 < 0 )
  {
    v3 = 640LL;
    goto LABEL_3;
  }
  return 0LL;
}
