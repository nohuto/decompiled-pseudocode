/*
 * XREFs of ??1?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEAA@XZ @ 0x1800BD024
 * Callers:
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x1800BD044 (--1MPCGestureHandler@@UEAA@XZ.c)
 *     ??1MPCHandProcessor@@UEAA@XZ @ 0x1800BF5F0 (--1MPCHandProcessor@@UEAA@XZ.c)
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800C0030 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ??1MPCSixDofProcessor@@UEAA@XZ @ 0x1801BF160 (--1MPCSixDofProcessor@@UEAA@XZ.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801C06F0 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C2128 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ??1MPCGamepadProcessor@@UEAA@XZ @ 0x1801C2FFC (--1MPCGamepadProcessor@@UEAA@XZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801C3880 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$4 @ 0x1801D900F (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$4.c)
 * Callees:
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x1800BD174 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 */

__int64 __fastcall std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()();
  return result;
}
