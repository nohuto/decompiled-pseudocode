/*
 * XREFs of MiEmptyAccessLogs @ 0x140501AF0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403BA2D4 (MiCheckAndProcessCcAccessLog.c)
 *     MiDrainSystemAccessLog @ 0x1403BB21C (MiDrainSystemAccessLog.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x14096EE20 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyAccessLogs(__int64 a1)
{
  volatile LONG *v1; // rsi
  void *v3; // r14
  KIRQL v4; // al
  void *i; // rcx
  ULONG *v6; // rax
  _QWORD *v7; // rax
  __int64 NextProcess; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rdi
  __int64 v11; // rbp
  _OWORD v12[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = (volatile LONG *)(a1 + 18240);
  v3 = 0LL;
  memset(v12, 0, sizeof(v12));
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
      for ( i = 0LL; ; i = (void *)v9 )
      {
        NextProcess = PsGetNextProcess(i);
        v9 = NextProcess;
        if ( !NextProcess )
          break;
        if ( (*(_DWORD *)(NextProcess + 1208) & 0xF) == 1 )
          v6 = &MiSystemPartition;
        else
          v6 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(NextProcess + 1198));
        if ( v6 == (ULONG *)a1 )
        {
          v7 = &unk_140E37828;
          if ( (*(_DWORD *)(v9 + 1208) & 0xF) != 1 )
            v7 = (_QWORD *)(v9 + 1256);
          if ( *v7 )
          {
            KiStackAttachProcess((_KPROCESS *)v9, 0, (__int64)v12);
            MiDrainSystemAccessLog(v9 + 1024);
            KiUnstackDetachProcess((__int64)v12, 0);
          }
        }
      }
      if ( (ULONG *)a1 == &MiSystemPartition )
      {
        v10 = &unk_140E36CC0;
        v11 = 4LL;
        do
        {
          if ( v10[15] )
            MiDrainSystemAccessLog((__int64)v10);
          v10 += 40;
          --v11;
        }
        while ( v11 );
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
