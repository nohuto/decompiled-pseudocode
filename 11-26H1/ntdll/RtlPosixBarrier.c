/*
 * XREFs of RtlPosixBarrier @ 0x180141868
 * Callers:
 *     RtlBarrier @ 0x1801417F0 (RtlBarrier.c)
 *     RtlBarrierForDelete @ 0x180141800 (RtlBarrierForDelete.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlWakeAddressAll @ 0x18004D5B0 (RtlWakeAddressAll.c)
 *     RtlpWaitOnAddress @ 0x18007B580 (RtlpWaitOnAddress.c)
 */

char __fastcall RtlPosixBarrier(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbx
  int v4; // r14d
  int v5; // esi
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  char v9; // bp
  unsigned int v10; // r8d
  unsigned __int64 v11; // rtt
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v2 )
    return 0;
  v4 = *(_DWORD *)(v2 + 16);
  v5 = a2 & 0x10000;
  if ( (a2 & 0x10000) != 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(v2 + 8));
  v6 = *(_QWORD *)v2;
  do
  {
    v7 = (unsigned int)(v6 + 1);
    v8 = HIDWORD(v6);
    v9 = 0;
    LODWORD(v12) = HIDWORD(v6);
    v10 = HIDWORD(v6);
    if ( (_DWORD)v7 == v4 )
    {
      v10 = HIDWORD(v6) + 1;
      v7 = 0LL;
      LODWORD(v8) = HIDWORD(v6) + 1;
      LODWORD(v12) = HIDWORD(v6) + 1;
      v9 = 1;
    }
    v11 = v6;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v2, v7 | ((unsigned __int64)v10 << 32), v6);
  }
  while ( v11 != v6 );
  if ( v9 )
  {
    RtlWakeAddressAll(v2 + 4);
  }
  else if ( v10 == *(_DWORD *)(v2 + 4) )
  {
    do
      RtlpWaitOnAddress(v2 + 4, &v12, 4LL, 0LL, RtlpWaitOnAddressSpinCycleCount, 0LL);
    while ( (_DWORD)v8 == *(_DWORD *)(v2 + 4) );
  }
  if ( v5 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(v2 + 8));
  return v9;
}
