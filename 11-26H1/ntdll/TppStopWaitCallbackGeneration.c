/*
 * XREFs of TppStopWaitCallbackGeneration @ 0x18010D3F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x180067A40 (TppCancelWait.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _TEB *__fastcall TppStopWaitCallbackGeneration(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  volatile signed __int64 *v3; // rsi
  int v5; // edi
  struct _TEB *result; // rax
  unsigned int v7; // ecx
  signed int v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  v3 = (volatile signed __int64 *)(a1 + 240);
  v8 = 0;
  v5 = a2;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240), a2);
  TppCancelWait(a1, v2 + 112, v5 != 0 ? 2 : 0, &v8);
  ++*(_BYTE *)(a1 + 355);
  result = RtlReleaseSRWLockExclusive(v3);
  if ( v8 < 0 )
  {
    v7 = -v8;
    result = (struct _TEB *)(unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, v8);
    if ( (_DWORD)result == v7 )
      return (struct _TEB *)(**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
