/*
 * XREFs of ?SetPdo@WDFDEVICE_INIT@@QEAAXPEAVFxDevice@@@Z @ 0x14003C2F8
 * Callers:
 *     imp_WdfPdoInitAllocate @ 0x14003C1D0 (imp_WdfPdoInitAllocate.c)
 * Callees:
 *     <none>
 */

void __fastcall WDFDEVICE_INIT::SetPdo(WDFDEVICE_INIT *this, FxDevice *Parent)
{
  this->Characteristics |= 0x80u;
  this->InitType = FxDeviceInitTypePdo;
  this->Pdo.Parent = Parent;
  if ( !Parent->m_PowerPageableCapable )
    this->PowerPageable = 0;
}
