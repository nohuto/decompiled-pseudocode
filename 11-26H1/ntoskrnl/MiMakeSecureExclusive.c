/*
 * XREFs of MiMakeSecureExclusive @ 0x1404C6418
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x1409EE268 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeSecureExclusive(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 i; // rax

  v1 = 0LL;
  for ( i = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; ; i = *(_QWORD *)i )
  {
    if ( !i )
    {
      *(_QWORD *)(v1 + 24) |= 0x20uLL;
      return 1LL;
    }
    if ( *(_WORD *)(i + 8) == 2 )
      break;
LABEL_7:
    ;
  }
  if ( !v1 )
  {
    v1 = i;
    goto LABEL_7;
  }
  return 0LL;
}
