/*
 * XREFs of DbgkWerCaptureLiveKernelDump2 @ 0x140B43D70
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x14060FE80 (PopPowerButtonWorkCallback.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B43CF0 (DbgkWerCaptureLiveKernelDump.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     DbgkpWerCleanupContext @ 0x14078EC38 (DbgkpWerCleanupContext.c)
 *     DbgkpWerFreePool @ 0x14078EF30 (DbgkpWerFreePool.c)
 *     DbgkpWerProcessPolicyResult @ 0x14078EF50 (DbgkpWerProcessPolicyResult.c)
 *     DbgkpWerIsFullLiveDumpDisabled @ 0x140B43FCC (DbgkpWerIsFullLiveDumpDisabled.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgkWerCaptureLiveKernelDump2(
        NTSTRSAFE_PCWSTR pszSrc,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct _KTHREAD *CurrentThread; // rax
  signed int v13; // edi
  __int64 Pool2; // rsi
  NTSTRSAFE_PCWSTR v15; // rax
  __int64 v16; // rcx
  int FirstArgument_high; // eax
  int v18; // ecx
  unsigned int v19; // ecx
  int v20; // eax
  char v21[4]; // [rsp+20h] [rbp-38h] BYREF
  int v22; // [rsp+24h] [rbp-34h] BYREF
  __int64 v23[6]; // [rsp+28h] [rbp-30h] BYREF

  v21[0] = 1;
  v22 = 0;
  v23[0] = 0LL;
  if ( KeGetCurrentIrql() )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump2: called at IRQL > PASSIVE_LEVEL\n");
    return 3221225800LL;
  }
  if ( !DbgkpWerInitialized )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump2: called before initialization.\n");
    return 3221225635LL;
  }
  if ( (unsigned __int8)DbgkpWerIsFullLiveDumpDisabled() )
  {
    DbgPrintEx(5u, 1u, "DBGK: Full Live Kernel Dumps are disabled. Failing request.\n");
    return 3221227524LL;
  }
  if ( !a7 )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump2: Called without dump control.\n");
    return 3221225485LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange((volatile __int32 *)&EmpParseLock.TrapFrame, 1) == 1 )
  {
    v13 = -1073741267;
  }
  else
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      if ( pszSrc )
      {
        v15 = pszSrc;
        v16 = 16LL;
        do
        {
          if ( !*v15 )
            break;
          ++v15;
          --v16;
        }
        while ( v16 );
        v13 = v16 == 0 ? 0xC000000D : 0;
        if ( v16 )
        {
          v13 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)Pool2, 0x10uLL, pszSrc);
          if ( v13 >= 0 )
          {
            FirstArgument_high = HIDWORD(EmpParseLock.FirstArgument);
            if ( (*(_BYTE *)(a7 + 24) & 2) != 0 )
              FirstArgument_high = 1;
            v22 = FirstArgument_high;
            v18 = *(_DWORD *)(Pool2 + 104);
            *(_QWORD *)(Pool2 + 56) = a5;
            v19 = v18 & 0xFFFFFFFD;
            *(_QWORD *)(Pool2 + 64) = a6;
            *(_DWORD *)(Pool2 + 32) = a2;
            *(_QWORD *)(Pool2 + 40) = a3;
            *(_QWORD *)(Pool2 + 48) = a4;
            *(_QWORD *)(Pool2 + 72) = a7;
            if ( (*(_DWORD *)(a7 + 24) & 8) == 0 )
              v19 |= 2u;
            *(_DWORD *)(Pool2 + 104) = v19;
            v20 = WerLiveKernelCreateReport(Pool2, &v22, v23);
            v13 = v20;
            if ( v20 >= 0 )
            {
              v13 = DbgkpWerProcessPolicyResult(Pool2, v22, v23[0], v21);
              if ( !v21[0] )
                goto LABEL_30;
            }
            else
            {
              DbgPrintEx(
                5u,
                0,
                "DBGK: DbgkWerCaptureLiveKernelDump: WerLiveKernelCreateReport failed, status 0x%x.\n\n",
                v20);
            }
          }
        }
      }
      else
      {
        v13 = -1073741811;
      }
      DbgkpWerCleanupContext(Pool2);
      DbgkpWerFreePool((void *)Pool2);
    }
    else
    {
      v13 = -1073741670;
    }
    _InterlockedExchange((volatile __int32 *)&EmpParseLock.TrapFrame, 0);
  }
LABEL_30:
  KeLeaveCriticalRegion();
  return (unsigned int)v13;
}
