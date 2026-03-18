/*
 * XREFs of ?Dispose@FxCommonBuffer@@UEAAEXZ @ 0x140081B20
 * Callers:
 *     <none>
 * Callees:
 *     ?CallCleanup@FxObject@@QEAAXXZ @ 0x14003840C (-CallCleanup@FxObject@@QEAAXXZ.c)
 *     ?FreeCommonBuffer@FxCommonBuffer@@QEAAXXZ @ 0x140070F58 (-FreeCommonBuffer@FxCommonBuffer@@QEAAXXZ.c)
 *     Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline @ 0x14008A6A0 (Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall FxCommonBuffer::Dispose(FxCommonBuffer *this)
{
  char v2; // bl

  v2 = 0;
  if ( Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline() && this->m_DmaEnabler->m_RunningUserModeDriver )
    FxObject::CallCleanup(this);
  else
    v2 = 1;
  FxCommonBuffer::FreeCommonBuffer(this);
  return v2;
}
