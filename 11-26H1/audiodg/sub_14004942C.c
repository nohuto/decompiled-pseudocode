/*
 * XREFs of sub_14004942C @ 0x14004942C
 * Callers:
 *     sub_140049120 @ 0x140049120 (sub_140049120.c)
 * Callees:
 *     sub_14004A49C @ 0x14004A49C (sub_14004A49C.c)
 */

char sub_14004942C()
{
  PVOID StackBase; // rcx
  signed __int64 v1; // rax

  if ( (unsigned int)sub_14004A49C() )
  {
    StackBase = NtCurrentTeb()->NtTib.StackBase;
    while ( 1 )
    {
      v1 = _InterlockedCompareExchange64(&qword_1400E7C98, (signed __int64)StackBase, 0LL);
      if ( !v1 )
        break;
      if ( StackBase == (PVOID)v1 )
        return 1;
    }
  }
  return 0;
}
