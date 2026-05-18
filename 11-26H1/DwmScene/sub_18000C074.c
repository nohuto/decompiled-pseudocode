/*
 * XREFs of sub_18000C074 @ 0x18000C074
 * Callers:
 *     sub_18000BC58 @ 0x18000BC58 (sub_18000BC58.c)
 *     sub_18000BD70 @ 0x18000BD70 (sub_18000BD70.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000CCA0 (-__uncaught_exception@@YA_NXZ.c)
 */

char sub_18000C074()
{
  int v0; // eax
  PVOID StackBase; // rcx
  signed __int64 v2; // rax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
  {
    StackBase = NtCurrentTeb()->NtTib.StackBase;
    while ( 1 )
    {
      v2 = _InterlockedCompareExchange64(&qword_1801C7D78, (signed __int64)StackBase, 0LL);
      if ( !v2 )
        break;
      if ( StackBase == (PVOID)v2 )
        return 1;
    }
  }
  return 0;
}
