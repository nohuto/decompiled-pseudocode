/*
 * XREFs of sub_14002EDE0 @ 0x14002EDE0
 * Callers:
 *     sub_14005E820 @ 0x14005E820 (sub_14005E820.c)
 *     sub_14007BC30 @ 0x14007BC30 (sub_14007BC30.c)
 *     sub_14008670C @ 0x14008670C (sub_14008670C.c)
 *     sub_14008BF80 @ 0x14008BF80 (sub_14008BF80.c)
 *     sub_140093960 @ 0x140093960 (sub_140093960.c)
 *     sub_1400B1FB4 @ 0x1400B1FB4 (sub_1400B1FB4.c)
 *     sub_1400B3E45 @ 0x1400B3E45 (sub_1400B3E45.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14002EDE0(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockShared(v1);
}
