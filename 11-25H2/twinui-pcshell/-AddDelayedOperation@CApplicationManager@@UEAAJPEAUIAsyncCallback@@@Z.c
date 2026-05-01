/*
 * XREFs of ?AddDelayedOperation@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180221210
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYPE@@@Z @ 0x1800D7B30 (-AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYP.c)
 */

__int64 __fastcall CApplicationManager::AddDelayedOperation(CApplicationManager *this, struct IAsyncCallback *a2)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = CApplicationManager::AddDelayedOperationInternal((__int64)this + 88, (__int64)a2, 3u);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
