/*
 * XREFs of ?MakeAndInitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@SAJAEBUSTATE_MACHINE_ENGINE_CONFIG@3@PEAPEAV123@@Z @ 0x1400E99E4
 * Callers:
 *     ?Initialize@NdisWdfIdle@@QEAAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B2E48 (-Initialize@NdisWdfIdle@@QEAAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAX_N@Z @ 0x1400E9480 (-Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAX_N@Z.c)
 *     ?Initialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAJAEBUSTATE_MACHINE_ENGINE_CONFIG@3@@Z @ 0x1400E9798 (-Initialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAJAEBUSTATE_MACHINE_ENGINE_CONFIG.c)
 *     ?AllocatePoolWithTag@Memory@SmFx@@YAPEAXW4PoolType@12@_KI@Z @ 0x1400E9EEC (-AllocatePoolWithTag@Memory@SmFx@@YAPEAXW4PoolType@12@_KI@Z.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::MakeAndInitialize(
        const struct SmFx::STATE_MACHINE_ENGINE_CONFIG *a1,
        struct SmFx::StateMachineEngine::StateMachineEngineImpl **a2)
{
  unsigned int poolTag; // eax
  __int64 v3; // r8
  char *PoolWithTag; // rax
  char *v7; // rdi
  int v8; // ebx

  poolTag = a1->poolTag;
  v3 = 2017881427LL;
  if ( poolTag )
    v3 = poolTag;
  PoolWithTag = (char *)SmFx::Memory::AllocatePoolWithTag(a1, 1056LL, v3);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x420uLL);
    *(_WORD *)(v7 + 981) = 257;
    v7[983] = 2;
    *a2 = (struct SmFx::StateMachineEngine::StateMachineEngineImpl *)v7;
    *((_QWORD *)v7 + 131) = a2;
    v8 = SmFx::StateMachineEngine::StateMachineEngineImpl::Initialize(
           (SmFx::StateMachineEngine::StateMachineEngineImpl *)v7,
           a1);
    if ( v8 < 0 )
    {
      SmFx::StateMachineEngine::StateMachineEngineImpl::Destroy(
        (SmFx::StateMachineEngine::StateMachineEngineImpl *)v7,
        0);
      *a2 = 0LL;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
