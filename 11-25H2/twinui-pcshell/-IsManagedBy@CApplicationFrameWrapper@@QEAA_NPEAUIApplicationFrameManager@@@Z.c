/*
 * XREFs of ?IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z @ 0x1802CC474
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180080990 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18023A9B0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

bool __fastcall CApplicationFrameWrapper::IsManagedBy(struct IUnknown **this, struct IUnknown *a2)
{
  return SHIsSameObject(a2, this[15]);
}
