/*
 * XREFs of MiAcquirePrcbPageBatchList @ 0x140298760
 * Callers:
 *     MiUnlinkProtoPages @ 0x140296F60 (MiUnlinkProtoPages.c)
 *     MiActivateDecayNode @ 0x140298EF4 (MiActivateDecayNode.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

_DWORD *MiAcquirePrcbPageBatchList()
{
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *MmInternal; // r9
  ULONG_PTR v2; // rax
  _DWORD *v3; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  MmInternal = CurrentPrcb->MmInternal;
  v2 = (unsigned int)MmInternal[986];
  if ( (_DWORD)v2 == 2 )
    KeBugCheckEx(0x1Au, 0x443uLL, (ULONG_PTR)CurrentPrcb, v2, 0LL);
  v3 = &MmInternal[418 * v2 + 150];
  MmInternal[986] = v2 + 1;
  *(_OWORD *)v3 = 0LL;
  *((_OWORD *)v3 + 1) = 0LL;
  *((_OWORD *)v3 + 2) = 0LL;
  *((_OWORD *)v3 + 3) = 0LL;
  *((_OWORD *)v3 + 4) = 0LL;
  *((_OWORD *)v3 + 5) = 0LL;
  *((_OWORD *)v3 + 6) = 0LL;
  *((_QWORD *)v3 + 14) = 0LL;
  *((_WORD *)v3 + 64) = 0;
  *((_QWORD *)v3 + 15) = 0LL;
  return v3;
}
