/*
 * XREFs of KiFlushQueueApc @ 0x14030F2D8
 * Callers:
 *     KeRundownApcQueues @ 0x14094BFD8 (KeRundownApcQueues.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14030F2A0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 */

_QWORD *__fastcall KiFlushQueueApc(__int64 a1, char a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  unsigned __int8 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = (_QWORD *)(16LL * a2 + a1 + 152);
  v8 = 0;
  if ( a2 == 1 )
  {
    KiAcquireThreadLockRaiseToDpc(a1, &v8);
    if ( (_QWORD *)*v3 != v3 )
      goto LABEL_4;
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    __writecr8(v8);
    return 0LL;
  }
  if ( (_QWORD *)*v3 == v3 )
    return 0LL;
  KiAcquireThreadLockRaiseToDpc(a1, &v8);
LABEL_4:
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 == v3 )
  {
    v4 = 0LL;
  }
  else
  {
    if ( (_QWORD *)v4[1] != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    v6 = v4;
    do
    {
      *((_BYTE *)v6 + 66) = 0;
      v6 = (_QWORD *)*v6;
    }
    while ( v6 != v4 );
    v3[1] = v3;
    *v3 = v3;
  }
  KiReleaseThreadLockLowerIrql(a1, v8);
  return v4;
}
