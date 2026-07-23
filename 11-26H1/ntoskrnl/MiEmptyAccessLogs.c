/*
 * XREFs of MiEmptyAccessLogs @ 0x1404FB2E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403C4144 (MiCheckAndProcessCcAccessLog.c)
 *     MiDrainSystemAccessLog @ 0x1403C508C (MiDrainSystemAccessLog.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyAccessLogs(__int64 a1)
{
  volatile LONG *v1; // rsi
  void *v3; // r14
  KIRQL v4; // al
  void *i; // rcx
  ULONG *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 NextProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdi
  _QWORD *v14; // rdi
  __int64 v15; // rbp
  _OWORD v16[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = (volatile LONG *)(a1 + 18240);
  v3 = 0LL;
  memset(v16, 0, sizeof(v16));
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 18240));
  if ( !*(_DWORD *)(a1 + 18156) )
  {
    do
    {
      *(_DWORD *)(a1 + 18152) = 2;
      if ( v4 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      else
        ExReleaseSpinLockExclusive(v1, v4);
      for ( i = 0LL; ; i = (void *)v13 )
      {
        NextProcess = PsGetNextProcess(i);
        v13 = NextProcess;
        if ( !NextProcess )
          break;
        if ( (*(_DWORD *)(NextProcess + 1208) & 0xF) == 1 )
          v6 = &MiSystemPartition;
        else
          v6 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(NextProcess + 1198));
        if ( v6 == (ULONG *)a1 )
        {
          v7 = &unk_140E379A8;
          if ( (*(_DWORD *)(v13 + 1208) & 0xF) != 1 )
            v7 = (_QWORD *)(v13 + 1256);
          if ( *v7 )
          {
            KiStackAttachProcess((_KPROCESS *)v13, 0, (__int64)v16);
            MiDrainSystemAccessLog(v13 + 1024, v8, v9);
            KiUnstackDetachProcess((__int64)v16, 0);
          }
        }
      }
      if ( (ULONG *)a1 == &MiSystemPartition )
      {
        v14 = &unk_140E36E40;
        v15 = 4LL;
        do
        {
          if ( v14[15] )
            MiDrainSystemAccessLog((__int64)v14, v11, v12);
          v14 += 40;
          --v15;
        }
        while ( v15 );
      }
      MiCheckAndProcessCcAccessLog(a1, 0LL, 1LL);
      v4 = ExAcquireSpinLockExclusive(v1);
    }
    while ( *(_DWORD *)(a1 + 18152) != 2 );
    if ( !*(_DWORD *)(a1 + 18156) )
    {
      v3 = *(void **)(a1 + 18168);
      *(_QWORD *)(a1 + 18168) = 0LL;
    }
  }
  *(_DWORD *)(a1 + 18152) = 0;
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  else
    ExReleaseSpinLockExclusive(v1, v4);
  PsDereferencePartition(*(_QWORD *)(a1 + 256));
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
