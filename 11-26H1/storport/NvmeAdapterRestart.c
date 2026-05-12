/*
 * XREFs of NvmeAdapterRestart @ 0x1400DC7F4
 * Callers:
 *     NvmeAdapterStartDevice @ 0x1400DDCA8 (NvmeAdapterStartDevice.c)
 *     NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x140124E40 (NvmeAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     NvmeControllerRestart @ 0x1400FA9B4 (NvmeControllerRestart.c)
 */

void __fastcall NvmeAdapterRestart(__int64 a1)
{
  struct _ERESOURCE *v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
  {
    NvmeControllerRestart(*(_QWORD *)(a1 + 1152));
  }
  else if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
  {
    KeEnterCriticalRegion();
    v2 = (struct _ERESOURCE *)(a1 + 1192);
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1192), 1u);
    v3 = (_QWORD *)(a1 + 1304);
    for ( i = *(_QWORD **)(a1 + 1304); i != v3; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i + 216) == 2 )
        ((void (*)(void))NvmeControllerRestart)();
    }
    ExReleaseResourceLite(v2);
    KeLeaveCriticalRegion();
  }
}
