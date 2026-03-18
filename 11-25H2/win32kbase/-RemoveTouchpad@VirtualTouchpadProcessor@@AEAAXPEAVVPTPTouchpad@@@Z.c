/*
 * XREFs of ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x14021DAF8
 * Callers:
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x14021CCCC (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x14021CE04 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x14021D858 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x140033CF0 (-RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ??1VPTPTouchpad@@QEAA@XZ @ 0x14018DDD4 (--1VPTPTouchpad@@QEAA@XZ.c)
 *     ?IsActive@VPTPTouchpad@@QEBA_NXZ @ 0x1401A1E8C (-IsActive@VPTPTouchpad@@QEBA_NXZ.c)
 */

void __fastcall VirtualTouchpadProcessor::RemoveTouchpad(VirtualTouchpadProcessor *this, struct VPTPTouchpad *a2)
{
  struct RawInputManagerDeviceObject *v3; // rdx
  VPTPTouchpad ***v4; // rcx

  v3 = (struct RawInputManagerDeviceObject *)*((_QWORD *)a2 + 4);
  if ( v3 )
  {
    VirtualTouchpadProcessor::RemoveRimDevice(this, v3);
    *((_QWORD *)a2 + 4) = 0LL;
  }
  if ( !VPTPTouchpad::IsActive(a2) )
  {
    VPTPTouchpad::~VPTPTouchpad(v4);
    GreDeleteFastMutex((char *)a2);
  }
}
