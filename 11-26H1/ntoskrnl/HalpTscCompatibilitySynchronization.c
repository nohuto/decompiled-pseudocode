/*
 * XREFs of HalpTscCompatibilitySynchronization @ 0x140585FEC
 * Callers:
 *     HalpTscSynchronizationWorker @ 0x140586560 (HalpTscSynchronizationWorker.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 */

char HalpTscCompatibilitySynchronization()
{
  __int64 v0; // r8
  bool v1; // r11
  int v2; // eax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = HalpDisableInterrupts();
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v0, 0xFFFFFFFF) == 1 )
  {
    v2 = *(_DWORD *)(v0 + 40);
    *(_DWORD *)(v0 + 4) = 0;
    *(_DWORD *)(v0 + 8) = v2;
    *(_QWORD *)(v0 + 24) = 0LL;
    *(_QWORD *)(v0 + 16) = -1LL;
    _InterlockedDecrement((volatile signed __int32 *)v0);
  }
  else
  {
    do
      _mm_pause();
    while ( *(_DWORD *)v0 != -1 );
    _InterlockedOr(v7, 0);
  }
  v3 = __readcr2();
  __writecr2(v3);
  v4 = __rdtsc();
  while ( *(_DWORD *)(v0 + 4) != KeGetCurrentPrcb()->Number )
    _mm_pause();
  if ( !*(_BYTE *)(v0 + 34) || *(_DWORD *)(v0 + 36) != KeGetCurrentPrcb()->Number )
  {
    if ( v4 < *(_QWORD *)(v0 + 16) )
      *(_QWORD *)(v0 + 16) = v4;
    if ( v4 > *(_QWORD *)(v0 + 24) )
      *(_QWORD *)(v0 + 24) = v4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v0 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v0 + 8), 0xFFFFFFFF) == 1 )
  {
    *(_BYTE *)(v0 + 32) = *(_BYTE *)(v0 + 33) || *(_QWORD *)(v0 + 24) - *(_QWORD *)(v0 + 16) <= 0xF4240uLL;
    _InterlockedDecrement((volatile signed __int32 *)(v0 + 8));
  }
  else
  {
    do
      _mm_pause();
    while ( *(_DWORD *)(v0 + 8) != -1 );
    _InterlockedOr(v7, 0);
  }
  LOBYTE(v5) = *(_BYTE *)(v0 + 32);
  if ( (_BYTE)v5 )
  {
    v5 = *(_QWORD *)(v0 + 24);
    __writemsr(0x10u, v5);
  }
  if ( v1 )
    _enable();
  return v5;
}
