/*
 * XREFs of PipCreateNewDependencyEdge @ 0x1405DB61C
 * Callers:
 *     PipAddDependencyEdgeBetweenNodes @ 0x1405DB580 (PipAddDependencyEdgeBetweenNodes.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipNotifyDependenciesChanged @ 0x14077B7B0 (PipNotifyDependenciesChanged.c)
 *     PipReferenceDependencyNode @ 0x14077F420 (PipReferenceDependencyNode.c)
 *     PipAddRequestToEdge @ 0x1407A2704 (PipAddRequestToEdge.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char *__fastcall PipCreateNewDependencyEdge(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax
  char *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  KIRQL v11; // al
  _QWORD *v12; // r8
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx

  Pool2 = ExAllocatePool2(0x40uLL);
  v7 = (char *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 40) = a1;
    *(_QWORD *)(Pool2 + 32) = a2;
    v8 = Pool2;
    *(_DWORD *)(Pool2 + 48) = 0;
    v9 = (_QWORD *)(Pool2 + 56);
    v9[1] = v9;
    *v9 = v9;
    v7[72] = 0;
    if ( PipAddRequestToEdge(v8, a3) )
    {
      PipReferenceDependencyNode(a1);
      PipReferenceDependencyNode(a2);
      v11 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
      v12 = *(_QWORD **)(a2 + 40);
      v13 = v7 + 16;
      if ( *v12 != a2 + 32
        || (*v13 = a2 + 32,
            *((_QWORD *)v7 + 3) = v12,
            *v12 = v13,
            *(_QWORD *)(a2 + 40) = v13,
            v14 = *(_QWORD **)(a1 + 24),
            *v14 != a1 + 16) )
      {
        __fastfail(3u);
      }
      *((_QWORD *)v7 + 1) = v14;
      *(_QWORD *)v7 = a1 + 16;
      *v14 = v7;
      *(_QWORD *)(a1 + 24) = v7;
      KeReleaseSpinLock(&PiDependencyEdgeWriteLock, v11);
      PipNotifyDependenciesChanged(a1, a2);
    }
    else
    {
      ExFreePoolWithTag(v7, 0x53706E50u);
      return 0LL;
    }
  }
  return v7;
}
