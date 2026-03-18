/*
 * XREFs of ?EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z @ 0x1802994CC
 * Callers:
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x1802863B0 (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?NotifyPresent@CPresentStats@CDummyRemotingSwapChain@@QEAAJPEAVCD3DDevice@@I@Z @ 0x1802A2FDC (-NotifyPresent@CPresentStats@CDummyRemotingSwapChain@@QEAAJPEAVCD3DDevice@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::EnqueueSetEvent(CD3DDevice *this, void *a2)
{
  int v3; // edi
  int v4; // eax

  if ( *((_DWORD *)this + 281) )
  {
    v3 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0xC2Bu, 0LL);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 66) + 128LL))(*((_QWORD *)this + 66), a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0xC2Du, 0LL);
    else
      *((_BYTE *)this + 1491) = 0;
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v3, 0);
}
