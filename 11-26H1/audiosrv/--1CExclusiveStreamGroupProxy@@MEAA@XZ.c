/*
 * XREFs of ??1CExclusiveStreamGroupProxy@@MEAA@XZ @ 0x1800F99B8
 * Callers:
 *     ??_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800FA5DC (--_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180043770 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CExclusiveStreamGroupProxy::~CExclusiveStreamGroupProxy(CExclusiveStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CExclusiveStreamGroupProxy::`vftable';
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  v2->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CExclusiveStreamGroupProxy::`vftable'{for `IStreamGroupProxy'};
  *((_QWORD *)this + 2) = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioGraphCallback>'};
  *((_QWORD *)this + 44) = &CExclusiveStreamGroupProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 45) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  CBaseStreamGroupProxy::DisconnectFromSaDevice(v2);
  v3 = *((_QWORD *)this + 92);
  if ( v3 )
  {
    *((_QWORD *)this + 92) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>((__int64)this);
}
