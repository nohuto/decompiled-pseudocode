/*
 * XREFs of ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18000EEA0
 * Callers:
 *     ?AddRef@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180014DA0 (-AddRef@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WCI@EAAKXZ @ 0x180014DB0 (-AddRef@CMemoryManager@System@Windows@@WCI@EAAKXZ.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WDA@EAAKXZ @ 0x180014DC0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@UIM_ea_180014DC0.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WDI@EAAKXZ @ 0x180014DD0 (-AddRef@CMemoryManager@System@Windows@@WDI@EAAKXZ.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WEA@EAAKXZ @ 0x180014DE0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@UIM_ea_180014DE0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
        __int64 a1)
{
  signed __int32 v1; // eax
  unsigned int v2; // ebx

  v1 = *(_DWORD *)(a1 + 108);
  if ( v1 == 0x7FFFFFFF )
  {
LABEL_9:
    v2 = 0x7FFFFFFF;
  }
  else
  {
    while ( 1 )
    {
      v2 = v1 + 1;
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), v1 + 1, v1) )
        break;
      v1 = *(_DWORD *)(a1 + 108);
      if ( v1 == 0x7FFFFFFF )
        goto LABEL_9;
    }
  }
  if ( (*(_BYTE *)(a1 + 128) & 4) == 0 && v2 == 2 && Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return v2;
}
