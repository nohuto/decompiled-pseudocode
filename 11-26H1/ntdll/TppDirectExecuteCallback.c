/*
 * XREFs of TppDirectExecuteCallback @ 0x1800862F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppFreeDirectParams @ 0x1800863EC (TppFreeDirectParams.c)
 *     TpPostTask @ 0x180086EE0 (TpPostTask.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppDirectExecuteCallback(_QWORD *a1, _RTL_SRWLOCK *a2)
{
  _RTL_SRWLOCK *Value; // rbx
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rdx
  _RTL_SRWLOCK *v7; // rcx
  __int128 v8; // [rsp+30h] [rbp-28h]
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF

  v9 = 0LL;
  RtlAcquireSRWLockExclusive(a2 + 4);
  Value = (_RTL_SRWLOCK *)a2[5].Value;
  v5 = (unsigned __int64 *)&a2[5];
  if ( Value == &a2[5] )
  {
    Value = 0LL;
  }
  else
  {
    if ( (unsigned __int64 *)Value[1].Value != v5 || (v6 = Value->Value, *(_RTL_SRWLOCK **)(Value->Value + 8) != Value) )
      __fastfail(3u);
    *v5 = v6;
    *(_QWORD *)(v6 + 8) = v5;
  }
  v7 = a2 + 4;
  if ( (unsigned __int64 *)*v5 == v5 )
  {
    RtlReleaseSRWLockExclusive(v7);
  }
  else
  {
    RtlReleaseSRWLockExclusive(v7);
    TpPostTask(a2, a1[16], 1LL, 0LL);
  }
  if ( Value )
  {
    v8 = *(_OWORD *)&Value[-4].0;
    v9 = *(_OWORD *)&Value[-2].0;
    TppFreeDirectParams();
    a1[11] = a2[7].Value;
    a1[12] = a2;
    ((void (__fastcall *)(_QWORD *, _RTL_SRWLOCK *, _QWORD, __int128 *))a2[7].Value)(a1, a2, *((_QWORD *)&v8 + 1), &v9);
  }
}
