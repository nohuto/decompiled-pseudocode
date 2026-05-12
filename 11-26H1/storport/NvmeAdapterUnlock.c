/*
 * XREFs of NvmeAdapterUnlock @ 0x1400E0C44
 * Callers:
 *     NvmeAdapterStartDevice @ 0x1400DDCA8 (NvmeAdapterStartDevice.c)
 *     NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x140124E40 (NvmeAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterUnlock(__int64 a1)
{
  struct _ERESOURCE *v2; // rdi
  volatile signed __int32 **v3; // rbx
  volatile signed __int32 *i; // rdx

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)(a1 + 1152) + 948LL), 0);
  }
  else if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
  {
    KeEnterCriticalRegion();
    v2 = (struct _ERESOURCE *)(a1 + 1192);
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1192), 1u);
    v3 = (volatile signed __int32 **)(a1 + 1304);
    for ( i = *v3; i != (volatile signed __int32 *)v3; i = *(volatile signed __int32 **)i )
    {
      if ( *((_DWORD *)i + 216) == 2 )
        _interlockedbittestandreset(i + 209, 0);
    }
    ExReleaseResourceLite(v2);
    KeLeaveCriticalRegion();
  }
}
