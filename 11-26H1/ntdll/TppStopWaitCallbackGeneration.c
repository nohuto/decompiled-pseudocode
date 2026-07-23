/*
 * XREFs of TppStopWaitCallbackGeneration @ 0x18010CF40
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x180087E90 (TppCancelWait.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppStopWaitCallbackGeneration(__int64 a1, int a2)
{
  __int64 v2; // rbx
  _RTL_SRWLOCK *v3; // rsi
  signed int v6; // ecx
  signed int v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  v3 = (_RTL_SRWLOCK *)(a1 + 240);
  v7 = 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  TppCancelWait(a1, v2 + 112, a2 != 0 ? 2 : 0, &v7);
  ++*(_BYTE *)(a1 + 355);
  RtlReleaseSRWLockExclusive(v3);
  v6 = v7;
  if ( v7 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v7) == -v6 )
    (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
}
