/*
 * XREFs of NvmeAdapterConnectControllerInternal @ 0x1400D3D60
 * Callers:
 *     NvmeAdapterConnectControllerWorker @ 0x1400D3F90 (NvmeAdapterConnectControllerWorker.c)
 *     NvmeAdapterConnectController @ 0x140197E74 (NvmeAdapterConnectController.c)
 * Callees:
 *     NvmeControllerAcquireRundown @ 0x1400C5B84 (NvmeControllerAcquireRundown.c)
 *     NvmeAdapterIsNvmeControllerPresent @ 0x1400D92C4 (NvmeAdapterIsNvmeControllerPresent.c)
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400E5018 (NvmeAdapterCleanupFabricNvmeController.c)
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400E5CC8 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E74A8 (NvmeAdapterDeleteNvmeController.c)
 *     NvmeAdapterStartFabricNvmeControllerOperations @ 0x1400EE3F8 (NvmeAdapterStartFabricNvmeControllerOperations.c)
 *     NvmeAdapterCreateNvmeController @ 0x1401A0988 (NvmeAdapterCreateNvmeController.c)
 *     NvmeAdapterSendControlAddNvmeController @ 0x1401A10DC (NvmeAdapterSendControlAddNvmeController.c)
 *     NvmeAdapterSendControlUpdateNvmeController @ 0x1401A133C (NvmeAdapterSendControlUpdateNvmeController.c)
 */

__int64 __fastcall NvmeAdapterConnectControllerInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        PVOID *a6)
{
  _BYTE *v6; // rdi
  PEX_RUNDOWN_REF_CACHE_AWARE *IsNvmeControllerPresent; // rax
  int NvmeController; // ebx
  PEX_RUNDOWN_REF_CACHE_AWARE *v10; // rcx
  PVOID v11; // rcx
  int v12; // eax
  PVOID DeferredContext[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+68h] [rbp+28h] BYREF

  v6 = a5;
  LODWORD(v15) = 0;
  DeferredContext[0] = 0LL;
  *a5 = 0;
  if ( *(_WORD *)(a2 + 16) == 0xFFFF )
  {
    NvmeController = NvmeAdapterCreateNvmeController(
                       *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
                       a1,
                       0,
                       (int)a2 + 24,
                       (__int64)DeferredContext);
    if ( NvmeController < 0 )
    {
      LODWORD(v15) = 5;
      goto LABEL_24;
    }
    v11 = DeferredContext[0];
    *v6 = 1;
    NvmeController = NvmeAdapterSendControlAddNvmeController(v11);
    if ( NvmeController < 0 )
    {
      LODWORD(v15) = 6;
      goto LABEL_24;
    }
    NvmeController = NvmeControllerAcquireRundown((__int64)DeferredContext[0]);
    if ( NvmeController < 0 )
    {
      LODWORD(v15) = 7;
      goto LABEL_24;
    }
    v10 = (PEX_RUNDOWN_REF_CACHE_AWARE *)DeferredContext[0];
  }
  else
  {
    IsNvmeControllerPresent = (PEX_RUNDOWN_REF_CACHE_AWARE *)NvmeAdapterIsNvmeControllerPresent(a1);
    DeferredContext[0] = IsNvmeControllerPresent;
    if ( !IsNvmeControllerPresent )
    {
      LODWORD(v15) = 1;
      NvmeController = -1073741275;
      goto LABEL_24;
    }
    ExReInitializeRundownProtectionCacheAware(IsNvmeControllerPresent[69]);
    NvmeController = NvmeControllerAcquireRundown((__int64)DeferredContext[0]);
    if ( NvmeController < 0 )
    {
      LODWORD(v15) = 2;
      goto LABEL_24;
    }
    v10 = (PEX_RUNDOWN_REF_CACHE_AWARE *)DeferredContext[0];
    if ( *((_DWORD *)DeferredContext[0] + 142) )
    {
      LODWORD(v15) = 3;
      NvmeController = -1073741808;
LABEL_8:
      ExReleaseRundownProtectionCacheAware(v10[69]);
      goto LABEL_24;
    }
    if ( (*((_BYTE *)DeferredContext[0] + 136) & 8) != 0 )
    {
      LODWORD(v15) = 4;
      NvmeController = -2147483631;
      goto LABEL_8;
    }
  }
  v12 = NvmeAdapterConnectFabricNvmeController(v10, *(_WORD *)(a2 + 20), (__int64)&v15);
  v10 = (PEX_RUNDOWN_REF_CACHE_AWARE *)DeferredContext[0];
  NvmeController = v12;
  if ( v12 < 0 )
    goto LABEL_8;
  NvmeController = NvmeAdapterSendControlUpdateNvmeController(DeferredContext[0]);
  if ( NvmeController >= 0 )
  {
    NvmeController = NvmeAdapterStartFabricNvmeControllerOperations(DeferredContext[0]);
    if ( NvmeController >= 0 )
    {
      *a6 = DeferredContext[0];
      return (unsigned int)NvmeController;
    }
    *((_DWORD *)DeferredContext[0] + 142) = 3;
    LODWORD(v15) = 29;
  }
  else
  {
    *((_DWORD *)DeferredContext[0] + 142) = 3;
    LODWORD(v15) = 28;
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeferredContext[0] + 69));
  NvmeAdapterCleanupFabricNvmeController(DeferredContext[0]);
LABEL_24:
  if ( *v6 )
  {
    NvmeAdapterDeleteNvmeController(DeferredContext);
    *v6 = 0;
  }
  return (unsigned int)NvmeController;
}
