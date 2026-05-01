/*
 * XREFs of RmpClientWnfMessageQueueWorker @ 0x18000A550
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientWnfMessageQueueShouldRun @ 0x18000A680 (RmpClientWnfMessageQueueShouldRun.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpClientWnfMessageQueueWorker(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int *v4; // r14
  _QWORD *v5; // rax
  _QWORD *v7; // rcx

  RtlAcquireSRWLockExclusive(a2 + 32);
  while ( (unsigned int)RmpClientWnfMessageQueueShouldRun(a2) )
  {
    v3 = *(_DWORD *)(a2 + 64);
    if ( (v3 & 2) != 0 )
    {
      *(_DWORD *)(a2 + 64) = v3 & 0xFFFFFFFD;
      RtlReleaseSRWLockExclusive(a2 + 32);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a2 + 40))(*(_QWORD *)(a2 + 8), 0LL, 0LL);
    }
    else
    {
      v4 = *(unsigned int **)(a2 + 16);
      v5 = (_QWORD *)(a2 + 16);
      if ( v4 == (unsigned int *)(a2 + 16)
        || *((_QWORD **)v4 + 1) != v5
        || (v7 = *(_QWORD **)v4, *(unsigned int **)(*(_QWORD *)v4 + 8LL) != v4) )
      {
        __fastfail(3u);
      }
      *v5 = v7;
      v7[1] = v5;
      *(_OWORD *)v4 = 0LL;
      RtlReleaseSRWLockExclusive(a2 + 32);
      (*(void (__fastcall **)(_QWORD, unsigned int *, _QWORD))(a2 + 40))(*(_QWORD *)(a2 + 8), v4 + 5, v4[4]);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    }
    RtlAcquireSRWLockExclusive(a2 + 32);
  }
  *(_DWORD *)(a2 + 64) &= ~1u;
  return RtlReleaseSRWLockExclusive(a2 + 32);
}
