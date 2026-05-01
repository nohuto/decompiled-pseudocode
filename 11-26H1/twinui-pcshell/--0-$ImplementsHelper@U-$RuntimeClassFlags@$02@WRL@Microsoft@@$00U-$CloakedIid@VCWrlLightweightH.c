/*
 * XREFs of ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$CloakedIid@VCWrlLightweightHandlerServer@@@23@U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180074FE4
 * Callers:
 *     ??0CImmersiveWindowFactoryBase@@QEAA@XZ @ 0x180074F34 (--0CImmersiveWindowFactoryBase@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<CWrlLightweightHandlerServer>,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<CWrlLightweightHandlerServer>,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &CWrlLightweightHandlerBase::`vftable';
  *(_QWORD *)(a1 + 32) = 0LL;
  InitializeSRWLock((PSRWLOCK)(a1 + 24));
  *(_QWORD *)a1 = &CWrlLightweightHandlerServer::`vftable'{for `Microsoft::WRL::Details::Selector<CWrlLightweightHandlerBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWrlLightweightHandlerBase>,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>>'};
  *(_QWORD *)(a1 + 40) = &CWrlLightweightHandlerServer::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWrlLightweightHandlerBase>,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>>'};
  return a1;
}
