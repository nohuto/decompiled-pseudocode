/*
 * XREFs of MiDeleteWorkingSetList @ 0x1404C9FB8
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140B41970 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MiDeleteProcessLargePageCache @ 0x1404CA01C (MiDeleteProcessLargePageCache.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteWorkingSetList(__int64 a1)
{
  _QWORD *v1; // rdi
  void *v3; // rcx

  v1 = *(_QWORD **)(a1 + 16);
  if ( v1 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
    {
      MiDeleteProcessLargePageCache(a1 - 1024);
      v3 = (void *)v1[5];
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      ExFreePoolWithTag(v1, 0);
    }
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
