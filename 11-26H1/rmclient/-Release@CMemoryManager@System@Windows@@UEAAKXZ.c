/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@UEAAKXZ @ 0x18000B130
 * Callers:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x180014220 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@UIMemoryManager.c)
 *     ?Release@CMemoryManager@System@Windows@@WCI@EAAKXZ @ 0x180014230 (-Release@CMemoryManager@System@Windows@@WCI@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WDA@EAAKXZ @ 0x180014240 (-Release@CMemoryManager@System@Windows@@WDA@EAAKXZ.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WDI@EAAKXZ @ 0x180014250 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@UI_ea_180014250.c)
 *     ?Release@CMemoryManager@System@Windows@@WEA@EAAKXZ @ 0x180014260 (-Release@CMemoryManager@System@Windows@@WEA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::Release(Windows::System::CMemoryManager *this)
{
  signed __int32 i; // r8d
  unsigned __int32 v2; // edi
  int v3; // ebx
  struct Microsoft::WRL::Details::ModuleBase *v4; // rcx

  for ( i = *((_DWORD *)this + 27); i != 0x7FFFFFFF; i = *((_DWORD *)this + 27) )
  {
    if ( i == _InterlockedCompareExchange((volatile signed __int32 *)this + 27, i - 1, i) )
      break;
  }
  v2 = i - 1;
  v3 = *((_DWORD *)this + 32) & 4;
  if ( i == 1 )
  {
    if ( this )
      (*(void (__fastcall **)(Windows::System::CMemoryManager *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
    v4 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( v3 && Microsoft::WRL::Details::ModuleBase::module_ )
      goto LABEL_8;
  }
  else if ( !v3 && i == 2 )
  {
    v4 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_8:
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(v4);
  }
  return v2;
}
