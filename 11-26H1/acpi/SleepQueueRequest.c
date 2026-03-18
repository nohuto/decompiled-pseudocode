/*
 * XREFs of SleepQueueRequest @ 0x14003971C
 * Callers:
 *     SleepStall @ 0x140011960 (SleepStall.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 */

__int64 __fastcall SleepQueueRequest(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 *v4; // rax
  unsigned int v5; // edi
  __int64 *v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 **v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v14; // rdx
  __int64 *v15; // rcx

  v2 = a2;
  v4 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, 0x40u);
  v5 = 0;
  v6 = v4;
  if ( !v4 )
  {
    LogError(-1072431102);
    AcpiDiagTraceAmlError(a1, -1072431102);
    PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431102;
  }
  v4[1] = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v4;
  v4[3] = (__int64)ProcessSleep;
  *(_DWORD *)v4 = 1346718803;
  byte_14008EB30 = KeAcquireSpinLockRaiseToDpc(&gmutSleep);
  v7 = &SleepQueue;
  v8 = MEMORY[0xFFFFF78000000008];
  v9 = MEMORY[0xFFFFF78000000008] + 10000 * v2;
  v6[6] = v9;
  v6[7] = a1;
  do
  {
    v10 = (__int64 **)(v7 + 1);
    v7 = (__int64 *)v7[1];
    if ( v7 == &SleepQueue )
      goto LABEL_4;
  }
  while ( v9 < v7[2] );
  v14 = *v7;
  v15 = v6 + 4;
  if ( *(__int64 **)(*v7 + 8) != v7 )
    goto LABEL_13;
  *v15 = v14;
  v6[5] = (__int64)v7;
  *(_QWORD *)(v14 + 8) = v15;
  *v7 = (__int64)v15;
LABEL_4:
  if ( *v10 != &SleepQueue )
    goto LABEL_7;
  v11 = SleepQueue;
  v12 = v6 + 4;
  if ( *(__int64 **)(SleepQueue + 8) != &SleepQueue )
LABEL_13:
    __fastfail(3u);
  *v12 = SleepQueue;
  v6[5] = (__int64)&SleepQueue;
  *(_QWORD *)(v11 + 8) = v12;
  SleepQueue = (__int64)(v6 + 4);
  ExSetTimer(SleepTimer, v8 - v6[6], 0LL, 0LL);
LABEL_7:
  KeReleaseSpinLock(&gmutSleep, byte_14008EB30);
  return v5;
}
