/*
 * XREFs of IopAllocatePassiveInterruptBlock @ 0x140A9D3F0
 * Callers:
 *     IopConnectInterrupt @ 0x140A9CA10 (IopConnectInterrupt.c)
 * Callees:
 *     IopFindPassiveInterruptBlock @ 0x1403102F4 (IopFindPassiveInterruptBlock.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     IopInsertPassiveInterruptBlock @ 0x1404F8040 (IopInsertPassiveInterruptBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocatePassiveInterruptBlock(_DWORD *a1, _OWORD *a2)
{
  bool v2; // zf
  int v5; // eax
  unsigned int v6; // esi
  int inserted; // edi
  __int64 Pool2; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  char v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1 == 1;
  v13 = 0;
  if ( v2 && ((v5 = a1[2]) == 0 || v5 == 3) )
  {
    v6 = a1[3];
    if ( IopFindPassiveInterruptBlock(v6) )
    {
      return 0;
    }
    else
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      v9 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 8) = Pool2;
        *(_QWORD *)Pool2 = Pool2;
        *(_DWORD *)(Pool2 + 16) = a1[2];
        *(_DWORD *)(Pool2 + 20) = v6;
        *(_DWORD *)(Pool2 + 32) = a1[6];
        *(_OWORD *)(Pool2 + 40) = *a2;
        v10 = a1[2];
        if ( v10 )
        {
          if ( v10 == 3 )
            *(_BYTE *)(v9 + 28) = 0;
        }
        else
        {
          v11 = (unsigned int)a1[16];
          *(_DWORD *)(v9 + 24) = v11;
          *(_BYTE *)(v9 + 28) = guard_dispatch_icall_no_overrides(0LL, v11);
        }
        KeInitializeEvent((PRKEVENT)(v9 + 168), SynchronizationEvent, 1u);
        KeInitializeDpc((PRKDPC)(v9 + 104), (PKDEFERRED_ROUTINE)IopPassiveInterruptDpc, (PVOID)v9);
        *(_QWORD *)(v9 + 56) = 0LL;
        *(_QWORD *)(v9 + 88) = IopPassiveInterruptWorker;
        *(_QWORD *)(v9 + 96) = v9;
        *(_QWORD *)(v9 + 72) = 0LL;
        *(_BYTE *)(v9 + 105) = 2;
        inserted = IopInsertPassiveInterruptBlock(v9, &v13);
        if ( inserted < 0 || !v13 )
          ExFreePoolWithTag((PVOID)v9, 0x6269704Bu);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)inserted;
}
