/*
 * XREFs of ??0?$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVHapticDeviceManager@@@Z @ 0x1800C7ED4
 * Callers:
 *     ?OnDeviceRemoval@PTPProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800878D0 (-OnDeviceRemoval@PTPProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnHapticInterfaceRemoval@HapticProcessor@@QEAAJK@Z @ 0x1800C9C78 (-OnHapticInterfaceRemoval@HapticProcessor@@QEAAJK@Z.c)
 *     ?OnMouseRemoval@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z @ 0x1800C9E30 (-OnMouseRemoval@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z.c)
 *     ?TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1800CA94C (-TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DF060 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800DF1B0 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DF290 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceQueryRemove@HapticDeviceCollection@@MEAAJK@Z @ 0x1800DF700 (-OnDeviceQueryRemove@HapticDeviceCollection@@MEAAJK@Z.c)
 *     ?UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z @ 0x180194848 (-UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z.c)
 *     ?CheckForHapticMouseQueryRemove@MouseProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x18019BBB0 (-CheckForHapticMouseQueryRemove@MouseProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 *     ?CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x1801CA22C (-CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 *     ?OnDeviceQueryRemove@PTPProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801CA460 (-OnDeviceQueryRemove@PTPProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(__int64))(a2 + 16))(a2 + 16);
  return a1;
}
