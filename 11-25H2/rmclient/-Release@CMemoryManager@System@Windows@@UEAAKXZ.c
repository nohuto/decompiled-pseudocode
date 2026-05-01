/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@UEAAKXZ @ 0x18000C0E0
 * Callers:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x1800152A0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@UIMemoryManager.c)
 *     ?Release@CMemoryManager@System@Windows@@WCI@EAAKXZ @ 0x1800152B0 (-Release@CMemoryManager@System@Windows@@WCI@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WDA@EAAKXZ @ 0x1800152C0 (-Release@CMemoryManager@System@Windows@@WDA@EAAKXZ.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WDI@EAAKXZ @ 0x1800152D0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@UI_ea_1800152D0.c)
 *     ?Release@CMemoryManager@System@Windows@@WEA@EAAKXZ @ 0x1800152E0 (-Release@CMemoryManager@System@Windows@@WEA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::Release(Windows::System::CMemoryManager *this)
{
  signed __int32 i; // edx
  unsigned __int32 v2; // ebx
  int v3; // edi
  void (*v5)(void); // rax

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
    if ( v3 && Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v5 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      goto LABEL_11;
    }
  }
  else if ( !v3 && i == 2 && Microsoft::WRL::Details::ModuleBase::module_ )
  {
    v5 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
LABEL_11:
    v5();
  }
  return v2;
}
