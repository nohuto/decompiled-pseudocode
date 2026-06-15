/*
 * XREFs of sub_1400266A0 @ 0x1400266A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_1400266A0(RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v1; // rbx
  _QWORD *Ptr; // rbp
  _QWORD *i; // rsi

  v1 = a1 + 13;
  AcquireSRWLockShared(a1 + 13);
  Ptr = a1[15].Ptr;
  for ( i = a1[14].Ptr; i != Ptr; ++i )
    sub_1400B6010(*i);
  if ( v1 )
    ReleaseSRWLockShared(v1);
}
