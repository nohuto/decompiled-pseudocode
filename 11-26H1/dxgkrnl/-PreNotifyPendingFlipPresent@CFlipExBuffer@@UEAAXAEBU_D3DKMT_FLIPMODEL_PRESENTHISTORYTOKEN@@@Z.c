/*
 * XREFs of ?PreNotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x14004A190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::PreNotifyPendingFlipPresent(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2)
{
  UINT64 PresentLimitSemaphoreId; // r8

  PresentLimitSemaphoreId = a2->PresentLimitSemaphoreId;
  if ( a2->FenceValue )
    *((_QWORD *)this + 46) = a2->FenceValue;
  if ( PresentLimitSemaphoreId )
    ++*((_DWORD *)this + 88);
}
