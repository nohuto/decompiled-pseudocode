/*
 * XREFs of ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1400E7EE0
 * Callers:
 *     ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x140223450 (-DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ.c)
 *     ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x1402238FC (-RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ.c)
 *     ?SetThreadPriority@CInputThreadBase@@QEAAXXZ @ 0x1402239A0 (-SetThreadPriority@CInputThreadBase@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThreadBase::_CalledOnInputThread(CInputThreadBase *this)
{
  return (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)this + 10);
}
