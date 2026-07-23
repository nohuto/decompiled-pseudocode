/*
 * XREFs of IvtConfigureAts @ 0x1405A8660
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IvtUpdateScalableModeContextEntry @ 0x1404F9C68 (IvtUpdateScalableModeContextEntry.c)
 *     IvtAllocateTranslationStructures @ 0x140503418 (IvtAllocateTranslationStructures.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     IvtBuildDefaultDomain @ 0x1405A8490 (IvtBuildDefaultDomain.c)
 *     IvtFreeScalableModePasidTables @ 0x1405A8E04 (IvtFreeScalableModePasidTables.c)
 *     IvtGetDomainId @ 0x1405A8F60 (IvtGetDomainId.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IvtConfigureAts(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // edi
  bool v4; // r14
  int v7; // r12d
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  __int64 DomainId; // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  int v13; // r8d
  unsigned int *v14; // rdx
  int v15; // [rsp+28h] [rbp-D0h]
  int v16; // [rsp+30h] [rbp-C8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v18[14]; // [rsp+70h] [rbp-88h] BYREF

  v3 = 0;
  v4 = 0;
  v7 = 2 - (a3 != 0);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_QWORD *)(a2 + 80)
    || (memset_0(v18, 0, sizeof(v18)), result = IvtBuildDefaultDomain(a1, v18, *(_BYTE *)(a2 + 48)), (int)result >= 0)
    && (result = IvtAllocateTranslationStructures(a1, a2, v18), v3 = result, (int)result >= 0) )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
    DomainId = IvtGetDomainId(a1, a2);
    v11 = *(_QWORD *)(a2 + 88);
    v12 = *(_QWORD *)(a2 + 80);
    v13 = v12;
    if ( v11 )
    {
      if ( v12 )
        v4 = v11 != v12;
      *(_QWORD *)(a2 + 80) = v11;
      v13 = v11;
    }
    v14 = *(unsigned int **)(a2 + 72);
    *(_QWORD *)(a2 + 88) = 0LL;
    *(_DWORD *)(a2 + 96) = v7;
    IvtUpdateScalableModeContextEntry(a1, v14, v13, v7, 0, v15, v16, 0, DomainId);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v4 )
      IvtFreeScalableModePasidTables(a1, v12);
    return v3;
  }
  return result;
}
