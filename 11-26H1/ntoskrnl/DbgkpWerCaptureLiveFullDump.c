/*
 * XREFs of DbgkpWerCaptureLiveFullDump @ 0x140B413AC
 * Callers:
 *     DbgkpWerProcessPolicyResult @ 0x14078EF50 (DbgkpWerProcessPolicyResult.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 *     DbgkpWerStartDeferredLiveDump @ 0x14078EFA8 (DbgkpWerStartDeferredLiveDump.c)
 *     DbgkpWerInvokeCallbacks @ 0x140B415C8 (DbgkpWerInvokeCallbacks.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140B4168C (DbgkpWerInitializeDeferredLiveDump.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgkpWerCaptureLiveFullDump(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // eax
  __int64 Pool2; // rax
  __int64 v6; // rsi
  int started; // ebx
  int *v8; // rdx
  int v9; // r8d
  int v10; // eax
  int v11; // eax
  const CHAR *v12; // r8
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v15; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 104);
  *a2 = 1;
  *(_DWORD *)(a1 + 80) = 0x10000000;
  v15 = 0LL;
  DbgPrintEx(5u, 3u, "DBGK: Creating full dump.  ComponentName %ws, Defer = %d\n", a1, (v2 >> 1) & 1);
  Pool2 = ExAllocatePool2(0x100uLL);
  v6 = Pool2;
  if ( !Pool2 )
  {
    DbgPrintEx(5u, 0, "DBGK: Could not allocate an Io Control.\n");
    return (unsigned int)-1073741801;
  }
  *(_QWORD *)(a1 + 120) = Pool2;
  v8 = (int *)(Pool2 + 24);
  *(_DWORD *)Pool2 = 2;
  *(_DWORD *)(Pool2 + 4) = 56;
  *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 32LL);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 24LL) & 1) != 0 )
    *v8 |= 4u;
  v9 = *v8;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 24LL) & 0x10) != 0 )
  {
    v9 |= 0x20u;
    *v8 = v9;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 24LL) & 4) != 0 )
    *(_DWORD *)(Pool2 + 28) |= 1u;
  *v8 = v9 | 0x10;
  v10 = *(_DWORD *)(a1 + 104);
  v14 = 0LL;
  if ( (v10 & 2) != 0 )
  {
    *v8 |= 8u;
    started = DbgkpWerInitializeDeferredLiveDump(a1);
    if ( started < 0 )
      return (unsigned int)started;
  }
  else
  {
    v11 = WerLiveKernelOpenDumpFile(*(_QWORD *)(a1 + 96), &v14);
    started = v11;
    if ( v11 < 0 )
    {
      v12 = "DBGK: WerLiveKernelOpenDumpFile failed. Status = 0x%X\n";
      goto LABEL_12;
    }
    *(_QWORD *)(v6 + 8) = v14;
  }
  started = DbgkpWerInvokeCallbacks(a1);
  if ( started < 0 )
    return (unsigned int)started;
  started = IoCaptureLiveDump(
              *(_DWORD *)(a1 + 32),
              *(_QWORD *)(a1 + 40),
              *(_QWORD *)(a1 + 48),
              *(_QWORD *)(a1 + 56),
              *(struct _KEVENT **)(a1 + 64),
              v6,
              &v15);
  if ( (*(_DWORD *)(a1 + 104) & 2) == 0 )
  {
    if ( started >= 0 )
    {
      v11 = WerLiveKernelSubmitReport(*(_QWORD *)(a1 + 96), 0LL);
      started = v11;
      if ( v11 >= 0 )
      {
        *(_DWORD *)(a1 + 104) |= 1u;
        return (unsigned int)started;
      }
      v12 = "DBGK: DbgkpWerCaptureLiveFullDump: WerLiveKernelSubmitReport failed with status 0x%X\n";
LABEL_12:
      DbgPrintEx(5u, 0, v12, (unsigned int)v11);
      return (unsigned int)started;
    }
LABEL_19:
    DbgPrintEx(
      5u,
      0,
      "DBGK: DbgkpWerCaptureLiveFullDump: IoCaptureLiveDump failed with status 0x%X\n",
      (unsigned int)started);
    return (unsigned int)started;
  }
  if ( (int)(started + 0x80000000) >= 0 && started != -1073741802 )
    goto LABEL_19;
  *(_QWORD *)(a1 + 128) = v15;
  started = DbgkpWerStartDeferredLiveDump(a1);
  if ( started >= 0 )
    *a2 = 0;
  return (unsigned int)started;
}
