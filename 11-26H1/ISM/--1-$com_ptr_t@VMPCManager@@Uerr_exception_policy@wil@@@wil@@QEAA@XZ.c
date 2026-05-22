/*
 * XREFs of ??1?$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B5E0C
 * Callers:
 *     ?OnDeviceRemoval@PTPProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800878D0 (-OnDeviceRemoval@PTPProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ??1MPCManagerConnection@@UEAA@XZ @ 0x1800B602C (--1MPCManagerConnection@@UEAA@XZ.c)
 *     ?OnHapticInterfaceRemoval@HapticProcessor@@QEAAJK@Z @ 0x1800C9C78 (-OnHapticInterfaceRemoval@HapticProcessor@@QEAAJK@Z.c)
 *     ?OnMouseRemoval@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z @ 0x1800C9E30 (-OnMouseRemoval@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z.c)
 *     ?TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1800CA94C (-TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DF060 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800DF1B0 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DF290 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceQueryRemove@HapticDeviceCollection@@MEAAJK@Z @ 0x1800DF700 (-OnDeviceQueryRemove@HapticDeviceCollection@@MEAAJK@Z.c)
 *     ??1SystemContextEndpointProxy@@UEAA@XZ @ 0x18014376C (--1SystemContextEndpointProxy@@UEAA@XZ.c)
 *     ?UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z @ 0x180194848 (-UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z.c)
 *     ?CheckForHapticMouseQueryRemove@MouseProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x18019BBB0 (-CheckForHapticMouseQueryRemove@MouseProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 *     ?CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x1801CA22C (-CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 *     ?OnDeviceQueryRemove@PTPProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801CA460 (-OnDeviceQueryRemove@PTPProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     _HapticDeviceCollection::OnDeviceQueryRemove_::_1_::dtor$0 @ 0x1801D9372 (_HapticDeviceCollection--OnDeviceQueryRemove_--_1_--dtor$0.c)
 *     _HapticProcessor::OnMouseRemoval_::_1_::dtor$1 @ 0x1801D9384 (_HapticProcessor--OnMouseRemoval_--_1_--dtor$1.c)
 *     _HapticProcessor::TryAttachHapticMouse_::_1_::dtor$0 @ 0x1801D93A8 (_HapticProcessor--TryAttachHapticMouse_--_1_--dtor$0.c)
 *     _PenDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1801D9FBB (_PenDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 *     _PenInterface::UpdateTransducerProperties_::_1_::dtor$0 @ 0x1801D9FF1 (_PenInterface--UpdateTransducerProperties_--_1_--dtor$0.c)
 *     _PTPProcessor::OnDeviceRemoval_::_1_::dtor$0 @ 0x1801DA003 (_PTPProcessor--OnDeviceRemoval_--_1_--dtor$0.c)
 *     _PTPProcessor::OnDeviceQueryRemove_::_1_::dtor$0 @ 0x1801DCA00 (_PTPProcessor--OnDeviceQueryRemove_--_1_--dtor$0.c)
 *     _PTPProcessor::CheckForHapticTouchpadArrival_::_1_::dtor$2 @ 0x1801DD627 (_PTPProcessor--CheckForHapticTouchpadArrival_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<MPCManager,wil::err_exception_policy>::~com_ptr_t<MPCManager,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 16) + 8LL))(v1 + 16);
  return result;
}
