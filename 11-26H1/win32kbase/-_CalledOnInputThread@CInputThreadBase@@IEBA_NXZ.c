/*
 * XREFs of ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x14012E2D8
 * Callers:
 *     SetThreadPriority @ 0x14021C2D0 (SetThreadPriority.c)
 *     ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x140225430 (-DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ.c)
 *     ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x1402255F8 (-RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThreadBase::_CalledOnInputThread(CInputThreadBase *this)
{
  return (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)this + 10);
}
