/*
 * XREFs of ExEnumHandleTable @ 0x1408FBBA0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x14052B668 (IoRevokeHandlesForProcess.c)
 *     EtwpObjectHandleRundown @ 0x14077B8B4 (EtwpObjectHandleRundown.c)
 *     ObShutdownSystem @ 0x1407C25A0 (ObShutdownSystem.c)
 *     IopQueryProcessIdsUsingFile @ 0x1409705AC (IopQueryProcessIdsUsingFile.c)
 *     ObFindHandleForObject @ 0x1409710D0 (ObFindHandleForObject.c)
 *     ObInitProcess @ 0x140971938 (ObInitProcess.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140972A58 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExEnumHandleTable(unsigned int *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // rbx
  unsigned __int8 v6; // bp
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  v5 = 4LL;
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v10 = (__int64 *)ExpLookupHandleTableEntry(a1, 4LL);
  while ( 2 )
  {
    if ( v10 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v10);
          v11 = *v10;
          if ( (*v10 & 1) != 0 )
            break;
          if ( !v11 )
            goto LABEL_6;
          ExpBlockOnLockedHandleEntry((__int64)a1, v10, v11);
        }
      }
      while ( v11 != _InterlockedCompareExchange64(v10, v11 - 1, v11) );
      v6 = guard_dispatch_icall_no_overrides((__int64)a1, (__int64)v10);
      if ( !v6 )
      {
LABEL_6:
        v12 = v5 + 4;
        if ( (v5 ^ (unsigned __int64)(v5 + 4)) >= 0x400 )
          v10 = (__int64 *)ExpLookupHandleTableEntry(a1, v5 + 8);
        else
          v10 += 2;
        v5 = v12;
        continue;
      }
      if ( a4 )
        *a4 = v5;
    }
    break;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, v11);
  return v6;
}
