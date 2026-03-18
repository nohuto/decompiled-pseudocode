/*
 * XREFs of ??1InkDevice@@UEAA@XZ @ 0x1402FDFE4
 * Callers:
 *     ??_EInkDevice@@UEAAPEAXI@Z @ 0x1402FB920 (--_EInkDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1402FF1A0 (-UnInitialize@InkDevice@@UEAAXXZ.c)
 *     ?UnInitialize@RimBackedDeviceBase@@UEAAXXZ @ 0x1402FF240 (-UnInitialize@RimBackedDeviceBase@@UEAAXXZ.c)
 */

void __fastcall InkDevice::~InkDevice(InkDevice *this)
{
  *(_QWORD *)this = &InkDevice::`vftable'{for `RimBackedDeviceBase'};
  *((_QWORD *)this + 4) = &InkDevice::`vftable'{for `InkFeedbackProviderBase'};
  InkDevice::UnInitialize(this);
  *((_QWORD *)this + 4) = &InkFeedbackProviderBase::`vftable';
  *(_QWORD *)this = &RimBackedDeviceBase::`vftable';
  RimBackedDeviceBase::UnInitialize(this);
}
