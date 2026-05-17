/*
 * XREFs of TppTimerpStopCallbackGeneration @ 0x180102CD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelTimer @ 0x1800686D0 (TppCancelTimer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall TppTimerpStopCallbackGeneration(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  signed __int32 v4; // eax

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240), a2);
  v3 = *(_QWORD *)(a1 + 144);
  ++*(_BYTE *)(a1 + 355);
  LOBYTE(v4) = TppCancelTimer(a1, (volatile signed __int64 *)(v3 + 112), 0);
  if ( (_BYTE)v4 )
  {
    v4 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( v4 == 1 )
      LOBYTE(v4) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return v4;
}
