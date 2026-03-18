/*
 * XREFs of ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x14041C384
 * Callers:
 *     ?CleanupWorker@BLTQUEUE@@AEAAXXZ @ 0x14028267C (-CleanupWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x140283A74 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140192B40 (-StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1402830B8 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall BLTQUEUE::ResetInternal(BLTQUEUE *this)
{
  BLTQUEUE::DiscardPendingPresent(this);
  BLTQUEUE::StopVSync((__int64)this, 0LL, 11LL);
  if ( (*((_DWORD *)this + 268) & 1) != 0 )
  {
    KeDetachProcess();
    *((_DWORD *)this + 268) &= ~1u;
  }
}
