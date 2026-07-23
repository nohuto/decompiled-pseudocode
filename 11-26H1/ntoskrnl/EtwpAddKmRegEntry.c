/*
 * XREFs of EtwpAddKmRegEntry @ 0x14091722C
 * Callers:
 *     EtwpRegisterKMProvider @ 0x140916E38 (EtwpRegisterKMProvider.c)
 * Callees:
 *     EtwpInitializeRegEntry @ 0x140912D44 (EtwpInitializeRegEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAddKmRegEntry(ULONG_PTR a1, int a2, __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 Pool2; // rax
  __int64 v11; // rdi

  v5 = 0;
  Pool2 = ExAllocatePool2(0x40uLL);
  v11 = Pool2;
  if ( Pool2 )
  {
    EtwpInitializeRegEntry(a1, 0, a2, a3, a4, 0, Pool2);
    *a5 = v11;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
