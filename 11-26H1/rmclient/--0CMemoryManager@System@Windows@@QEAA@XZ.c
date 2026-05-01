/*
 * XREFs of ??0CMemoryManager@System@Windows@@QEAA@XZ @ 0x18000A538
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x18000A2D8 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVC.c)
 * Callees:
 *     ??0?$AgileActivationFactory@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18000A598 (--0-$AgileActivationFactory@U-$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManager.c)
 */

Windows::System::CMemoryManager *__fastcall Windows::System::CMemoryManager::CMemoryManager(
        Windows::System::CMemoryManager *this)
{
  Microsoft::WRL::AgileActivationFactory<Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  *(_QWORD *)this = &Windows::System::CMemoryManager::`vftable'{for `IActivationFactory'};
  *((_QWORD *)this + 1) = &Windows::System::CMemoryManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 5) = &Windows::System::CMemoryManager::`vftable'{for `Windows::System::IMemoryManagerStatics'};
  *((_QWORD *)this + 6) = &Windows::System::CMemoryManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>'};
  *((_QWORD *)this + 7) = &Windows::System::CMemoryManager::`vftable'{for `Windows::System::IMemoryManagerStatics3'};
  *((_QWORD *)this + 8) = &Windows::System::CMemoryManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics4>'};
  return this;
}
