/*
 * XREFs of ??1VPTPTouchpad@@QEAA@XZ @ 0x140220640
 * Callers:
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x140221270 (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsActive@VPTPTouchpad@@QEBA_NXZ @ 0x1401C5C70 (-IsActive@VPTPTouchpad@@QEBA_NXZ.c)
 */

void __fastcall VPTPTouchpad::~VPTPTouchpad(VPTPTouchpad ***this)
{
  VPTPTouchpad **v1; // rdx
  VPTPTouchpad **v2; // rax

  v1 = *this;
  if ( (*this)[1] != (VPTPTouchpad *)this || (v2 = this[1], *v2 != (VPTPTouchpad *)this) )
    __fastfail(3u);
  *v2 = (VPTPTouchpad *)v1;
  v1[1] = (VPTPTouchpad *)v2;
  if ( VPTPTouchpad::IsActive((VPTPTouchpad *)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 104);
}
