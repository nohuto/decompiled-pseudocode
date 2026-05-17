/*
 * XREFs of TppDirectUnposted @ 0x1801591F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppFreeDirectParams @ 0x180065F9C (TppFreeDirectParams.c)
 */

struct _TEB *__fastcall TppDirectUnposted(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  struct _TEB *result; // rax

  v2 = (volatile signed __int64 *)(a1 + 32);
  v3 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    RtlAcquireSRWLockExclusive(v2, a2);
    v4 = *v3;
    if ( *v3 == v3 )
    {
      v4 = 0LL;
    }
    else
    {
      if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
        __fastfail(3u);
      *v3 = v5;
      v5[1] = v3;
    }
    result = RtlReleaseSRWLockExclusive(v2);
    if ( !v4 )
      break;
    TppFreeDirectParams((__int64)(v4 - 4));
  }
  return result;
}
