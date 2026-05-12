/*
 * XREFs of NvmeAdapterLock @ 0x1400D9540
 * Callers:
 *     NvmeAdapterPowerDownDevice @ 0x140124260 (NvmeAdapterPowerDownDevice.c)
 *     NvmeAdapterStopDeviceIrp @ 0x14019F188 (NvmeAdapterStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterLock(__int64 a1)
{
  struct _ERESOURCE *v2; // rdi
  volatile signed __int32 **v3; // rbx
  volatile signed __int32 *i; // rax

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(*(_QWORD *)(a1 + 1152) + 948LL), 0);
  }
  else if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
  {
    KeEnterCriticalRegion();
    v2 = (struct _ERESOURCE *)(a1 + 1192);
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1192), 1u);
    v3 = (volatile signed __int32 **)(a1 + 1304);
    for ( i = *v3; i != (volatile signed __int32 *)v3; i = *(volatile signed __int32 **)i )
      _interlockedbittestandset(i + 209, 0);
    ExReleaseResourceLite(v2);
    KeLeaveCriticalRegion();
  }
}
