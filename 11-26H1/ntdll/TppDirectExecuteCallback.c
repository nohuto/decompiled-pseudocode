/*
 * XREFs of TppDirectExecuteCallback @ 0x180065EA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppFreeDirectParams @ 0x180065F9C (TppFreeDirectParams.c)
 *     TpPostTask @ 0x180066A90 (TpPostTask.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _TEB *__fastcall TppDirectExecuteCallback(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  volatile signed __int64 *v7; // rcx
  struct _TEB *result; // rax
  __int128 v9; // [rsp+30h] [rbp-28h]
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF

  v10 = 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 32), a2);
  v4 = *(_QWORD **)(a2 + 40);
  v5 = (_QWORD *)(a2 + 40);
  if ( v4 == (_QWORD *)(a2 + 40) )
  {
    v4 = 0LL;
  }
  else
  {
    if ( (_QWORD *)v4[1] != v5 || (v6 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v5 = v6;
    *(_QWORD *)(v6 + 8) = v5;
  }
  v7 = (volatile signed __int64 *)(a2 + 32);
  if ( (_QWORD *)*v5 == v5 )
  {
    result = RtlReleaseSRWLockExclusive(v7);
  }
  else
  {
    RtlReleaseSRWLockExclusive(v7);
    result = (struct _TEB *)TpPostTask(a2, a1[16], 1LL, 0LL);
  }
  if ( v4 )
  {
    v9 = *((_OWORD *)v4 - 2);
    v10 = *((_OWORD *)v4 - 1);
    TppFreeDirectParams();
    a1[11] = *(_QWORD *)(a2 + 56);
    a1[12] = a2;
    return (struct _TEB *)(*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int128 *))(a2 + 56))(
                            a1,
                            a2,
                            *((_QWORD *)&v9 + 1),
                            &v10);
  }
  return result;
}
