/*
 * XREFs of ExEnumHandleTable @ 0x14092BB30
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x14052DB88 (IoRevokeHandlesForProcess.c)
 *     EtwpObjectHandleRundown @ 0x14077E4F4 (EtwpObjectHandleRundown.c)
 *     ObShutdownSystem @ 0x1407C5600 (ObShutdownSystem.c)
 *     ObFindHandleForObject @ 0x1409BB240 (ObFindHandleForObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x1409BBA80 (IopQueryProcessIdsUsingFile.c)
 *     ObInitProcess @ 0x1409BCC28 (ObInitProcess.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1409BDC4C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExEnumHandleTable(unsigned int *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // rbx
  unsigned __int8 v6; // bp
  __int64 *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9

  CurrentThread = KeGetCurrentThread();
  v5 = 4LL;
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v9 = (__int64 *)ExpLookupHandleTableEntry(a1, 4LL);
  while ( 2 )
  {
    if ( v9 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v9);
          v10 = *v9;
          if ( (*v9 & 1) != 0 )
            break;
          if ( !v10 )
            goto LABEL_6;
          ExpBlockOnLockedHandleEntry((__int64)a1, v9, v10);
        }
      }
      while ( v10 != _InterlockedCompareExchange64(v9, v10 - 1, v10) );
      v6 = guard_dispatch_icall_no_overrides((__int64)a1, (__int64)v9);
      if ( !v6 )
      {
LABEL_6:
        v11 = v5 + 4;
        if ( (v5 ^ (unsigned __int64)(v5 + 4)) >= 0x400 )
          v9 = (__int64 *)ExpLookupHandleTableEntry(a1, v5 + 8);
        else
          v9 += 2;
        v5 = v11;
        continue;
      }
      if ( a4 )
        *a4 = v5;
    }
    break;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v6;
}
