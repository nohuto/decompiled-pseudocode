/*
 * XREFs of ExpHpIsSpecialPoolHeap @ 0x140485148
 * Callers:
 *     ExIsSpecialPoolAddress @ 0x140485074 (ExIsSpecialPoolAddress.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpHpIsSpecialPoolHeap(__int64 a1)
{
  unsigned int v1; // edx
  __int64 *i; // rax

  v1 = 0;
  for ( i = &qword_140EEED00; (__int64)i < (__int64)qword_140EEED20; ++i )
  {
    if ( a1 == *i )
      return 1;
  }
  return v1;
}
