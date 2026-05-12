/*
 * XREFs of NvmeNamespaceCreateErrorRecoveryContext @ 0x140102920
 * Callers:
 *     NvmeControllerCreateNvmeNamespace @ 0x140100594 (NvmeControllerCreateNvmeNamespace.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall NvmeNamespaceCreateErrorRecoveryContext(__int64 a1)
{
  unsigned int v2; // ebx
  _QWORD *Pool; // rax
  __int64 v4; // rax

  v2 = 0;
  Pool = (_QWORD *)RaidAllocatePool(64LL, 192LL, 1296982354LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 496) = Pool;
  if ( Pool )
  {
    *Pool = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
    v4 = *(_QWORD *)(a1 + 496);
    if ( *(_QWORD *)v4 )
    {
      *(_BYTE *)(v4 + 29) = 10;
    }
    else
    {
      v2 = -1073741670;
      if ( v4 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 496), 0x4D4E6152u);
        *(_QWORD *)(a1 + 496) = 0LL;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
