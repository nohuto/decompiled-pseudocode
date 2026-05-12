/*
 * XREFs of RaidGetNpemControlInterface @ 0x140094604
 * Callers:
 *     RaidQueryLedState @ 0x140095808 (RaidQueryLedState.c)
 *     RaidSetLedStateByNpem @ 0x140095F84 (RaidSetLedStateByNpem.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidQueryNpemControlInterface @ 0x14009594C (RaidQueryNpemControlInterface.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidGetNpemControlInterface(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 Pool; // rbx
  __int64 v7; // rdx
  int NpemControlInterface; // ebp

  if ( !a2 )
    return 3221225485LL;
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v3 != 1094997074 )
    return 3221225485LL;
  if ( !v3 )
    return 3221225473LL;
  v5 = *(_QWORD *)(v3 + 5768);
  if ( v5 )
  {
    *a2 = v5;
    return 0LL;
  }
  else
  {
    Pool = RaidAllocatePool(64LL, 64LL, 1347314002LL, a1);
    if ( Pool )
    {
      NpemControlInterface = RaidQueryNpemControlInterface(*(PDEVICE_OBJECT *)(v3 + 32));
      if ( NpemControlInterface < 0
        || (LOBYTE(v7) = 1,
            NpemControlInterface = (*(__int64 (__fastcall **)(_QWORD, __int64))(Pool + 32))(*(_QWORD *)(Pool + 8), v7),
            NpemControlInterface < 0) )
      {
        ExFreePoolWithTag((PVOID)Pool, 0x504E6152u);
        Pool = 0LL;
      }
      else
      {
        *a2 = Pool;
      }
      *(_QWORD *)(v3 + 5768) = Pool;
      return (unsigned int)NpemControlInterface;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
