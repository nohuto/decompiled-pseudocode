/*
 * XREFs of ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x18007128C
 * Callers:
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x1800711B0 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x180071434 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x18008DBB0 (-CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopManager::EnsureDCompResources(CDesktopManager *this)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rsi
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64, GUID *, __int64); // r9
  __int64 v10; // r10
  int v11; // eax
  int v12; // eax
  int VisualTargetProxyFromSharedHandle; // eax
  int v14; // eax
  HANDLE hObject; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp+10h]

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 80);
  hObject = 0LL;
  if ( !*((_QWORD *)this + 10) )
  {
    v4 = *((_QWORD *)this + 6);
    v17 = 0xFFFFFFFE00000000uLL;
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**(_QWORD **)(v4 + 32) + 352LL))(
           *(_QWORD *)(v4 + 32),
           0xFFFFFFFE00000000uLL,
           (char *)this + 80);
    v6 = FailFastIfAccessDenied(v5);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x5C1u, 0LL);
    }
    else
    {
      v7 = (_QWORD *)((char *)this + 88);
      v8 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)this + 88);
      v11 = v9(v10, &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3, v8);
      v1 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x5C4u, 0LL);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL));
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 224LL))(
                *(_QWORD *)(*((_QWORD *)this + 6) + 32LL),
                *v7,
                &hObject);
        v1 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x5CAu, 0LL);
        }
        else
        {
          VisualTargetProxyFromSharedHandle = CCompositor::CreateVisualTargetProxyFromSharedHandle(
                                                *((CCompositor **)this + 6),
                                                hObject,
                                                (struct CVisualTargetProxy **)this + 12);
          v1 = VisualTargetProxyFromSharedHandle;
          if ( VisualTargetProxyFromSharedHandle < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, VisualTargetProxyFromSharedHandle, 0x5CCu, 0LL);
          }
          else
          {
            v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 24LL))(*v2, *v7);
            v1 = v14;
            if ( v14 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x5CEu, 0LL);
            else
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL));
          }
        }
      }
    }
    if ( hObject )
      CloseHandle(hObject);
  }
  return v1;
}
