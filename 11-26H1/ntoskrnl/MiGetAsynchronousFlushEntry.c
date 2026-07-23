/*
 * XREFs of MiGetAsynchronousFlushEntry @ 0x1403CB994
 * Callers:
 *     MiFlushSubsection @ 0x1403CB290 (MiFlushSubsection.c)
 *     MiIssueAsynchronousFlush @ 0x1403CB874 (MiIssueAsynchronousFlush.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

_DWORD *__fastcall MiGetAsynchronousFlushEntry(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int8 CurrentIrql; // di
  unsigned int v4; // esi
  _DWORD *v5; // rcx
  _DWORD *v6; // rbx
  __int64 v8; // rax

  v2 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 1;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  v4 = 0;
  v5 = (_DWORD *)(v2 + 52);
  do
  {
    v6 = v5 - 13;
    if ( !*(_QWORD *)(v5 - 9) )
      break;
    if ( *v5 )
      break;
    ++v4;
    v5 += 66;
  }
  while ( v4 < 8 );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v4 == 8 )
    v6 = (_DWORD *)(v2
                  + 264LL
                  * (unsigned int)KeWaitForMultipleObjects(
                                    8u,
                                    (PVOID *)(v2 + 2112),
                                    WaitAny,
                                    WrPageOut,
                                    0,
                                    0,
                                    0LL,
                                    (PKWAIT_BLOCK)(v2 + 2176)));
  if ( (int)*v6 < 0 )
  {
    v8 = *((_QWORD *)v6 + 9);
    v6 = 0LL;
    *(_DWORD *)(v8 + 40) = 0;
  }
  return v6;
}
