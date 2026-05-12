/*
 * XREFs of StorChildAdapterPdoPowerIrp @ 0x14012F484
 * Callers:
 *     RaDriverPowerIrp @ 0x140072930 (RaDriverPowerIrp.c)
 * Callees:
 *     StorChildAdapterPdoAcquireRemoveLock @ 0x14012EFB4 (StorChildAdapterPdoAcquireRemoveLock.c)
 */

__int64 __fastcall StorChildAdapterPdoPowerIrp(__int64 a1, IRP *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // esi

  v4 = StorChildAdapterPdoAcquireRemoveLock(a1);
  v5 = 0;
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( a2->Tail.Overlay.CurrentStackLocation->MinorFunction != 2
      && a2->Tail.Overlay.CurrentStackLocation->MinorFunction != 3 )
    {
      v5 = -1073741637;
    }
    a2->IoStatus.Status = v5;
    IofCompleteRequest(a2, 0);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 64));
    return v5;
  }
  else
  {
    a2->IoStatus.Information = 0LL;
    a2->IoStatus.Status = v4;
    IofCompleteRequest(a2, 0);
    return v6;
  }
}
