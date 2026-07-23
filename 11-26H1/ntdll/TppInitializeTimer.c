/*
 * XREFs of TppInitializeTimer @ 0x180038F40
 * Callers:
 *     RtlpHpGCTimerEnable @ 0x1800CC558 (RtlpHpGCTimerEnable.c)
 * Callees:
 *     TppWorkInitialize @ 0x180037E20 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x180039110 (TppCleanupGroupAddMember.c)
 *     NtSetInformationWorkerFactory @ 0x180162470 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TppInitializeTimer(__int64 a1, char a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // eax
  void *v12; // rcx
  int WorkerFactoryInformation; // [rsp+40h] [rbp+8h] BYREF

  v6 = a4;
  if ( a4 )
    LODWORD(a4) = *(_DWORD *)(a4 + 56);
  result = TppWorkInitialize(a1, a3, v6, a4, a5, a6);
  if ( (int)result >= 0 )
  {
    v10 = *(_QWORD *)(a1 + 144);
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 432), 1u);
    if ( v11 <= 0 && v11 + 1 > 0 )
    {
      v12 = *(void **)(v10 + 56);
      WorkerFactoryInformation = 1;
      NtSetInformationWorkerFactory(v12, WorkerFactoryBindingCount, &WorkerFactoryInformation, 4u);
    }
    *(_QWORD *)(a1 + 240) = 0LL;
    *(_BYTE *)(a1 + 353) = a2;
    if ( v6 )
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(v6 + 48);
    if ( *(_QWORD *)(a1 + 16) )
      TppCleanupGroupAddMember(a1);
    return 0LL;
  }
  return result;
}
