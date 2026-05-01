/*
 * XREFs of _lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_::operator() @ 0x18039613C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___::Run @ 0x1803982C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _lambda_6f97718575e1cd15cbb9f08738e16ff5_::_lambda_6f97718575e1cd15cbb9f08738e16ff5_ @ 0x1802DCEA4 (_lambda_6f97718575e1cd15cbb9f08738e16ff5_--_lambda_6f97718575e1cd15cbb9f08738e16ff5_.c)
 *     wil::details::lambda_call__lambda_06cee8b7657ee3176f0221e6d0549cd2___::_lambda_call__lambda_06cee8b7657ee3176f0221e6d0549cd2___ @ 0x180395E5C (wil--details--lambda_call__lambda_06cee8b7657ee3176f0221e6d0549cd2___--_lambda_call__lambda_06ce.c)
 *     ?ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x180396CC8 (-ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z @ 0x180397080 (-GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1803993EC (-UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_::operator()(__int64 *a1)
{
  _QWORD *v2; // rax
  HMONITOR v3; // rax
  int FramePosition; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+28h] [rbp-40h] BYREF
  char v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-30h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  struct tagRECT v13; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = lambda_6f97718575e1cd15cbb9f08738e16ff5_::_lambda_6f97718575e1cd15cbb9f08738e16ff5_(&v11, *a1, a1 + 1);
  *(_QWORD *)v8 = *v2;
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v9, v2 + 1);
  v10 = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  if ( *(_DWORD *)(*a1 + 768) != 2 )
    goto LABEL_9;
  v3 = MonitorFromWindow(*(HWND *)(*a1 + 352), 2u);
  FramePosition = CVirtualTouchpadExperienceManager::ComputeDesiredSizeForMonitor(
                    (CVirtualTouchpadExperienceManager *)*a1,
                    v3);
  v5 = FramePosition;
  if ( FramePosition >= 0 )
  {
    v13 = 0LL;
    FramePosition = CVirtualTouchpadExperienceManager::GetFramePosition((CVirtualTouchpadExperienceManager *)*a1, &v13);
    v5 = FramePosition;
    if ( FramePosition < 0 )
    {
      v6 = 820LL;
      goto LABEL_6;
    }
    *(_DWORD *)(*a1 + 320) = v13.left + *(_DWORD *)(*a1 + 300) / 2;
    *(_DWORD *)(*a1 + 324) = v13.top + *(_DWORD *)(*a1 + 304) / 2;
    FramePosition = CVirtualTouchpadExperienceManager::UpdateFramePositionAndSize((CVirtualTouchpadExperienceManager *)*a1);
    v5 = FramePosition;
    if ( FramePosition < 0 )
    {
      v6 = 823LL;
      goto LABEL_6;
    }
LABEL_9:
    v5 = 0;
    goto LABEL_10;
  }
  v6 = 818LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)FramePosition);
LABEL_10:
  wil::details::lambda_call__lambda_06cee8b7657ee3176f0221e6d0549cd2___::_lambda_call__lambda_06cee8b7657ee3176f0221e6d0549cd2___((__int64 *)v8);
  return v5;
}
