/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728_____lambda_6df05c95eefd3a852cd1630e41907728___ @ 0x180302A98
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6df05c95eefd3a852cd1630e41907728___ @ 0x18030355C (Windows--Internal--ComTaskPool--QueueTask__lambda_6df05c95eefd3a852cd1630e41907728___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802EF970 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1802EF970.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728_____lambda_6df05c95eefd3a852cd1630e41907728___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(a1 + 2, a2);
  v5 = v4 + 16;
  *(_QWORD *)(v4 + 8) = a2[1];
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(
    (_QWORD *)(v4 + 16),
    a2 + 2);
  *(_QWORD *)(v5 + 8) = *(_QWORD *)(v6 + 8);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(v5 + 16));
  *(_QWORD *)(v5 + 16) = &CFramePresentationTelemetry::PresentWindow::`vftable';
  *a1 = &off_18072F0B0;
  return a1;
}
