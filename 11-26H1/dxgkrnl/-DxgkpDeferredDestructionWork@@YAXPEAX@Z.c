/*
 * XREFs of ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x14037B3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ @ 0x14037B3E0 (-DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14037C198 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgkpDeferredDestructionWork(ADAPTER_RENDER *a1)
{
  __int64 v2; // rcx

  ADAPTER_RENDER::DeferredDestructionWork(a1);
  v2 = *((_QWORD *)a1 + 2);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v2 + 16), (struct DXGADAPTER *)v2);
}
