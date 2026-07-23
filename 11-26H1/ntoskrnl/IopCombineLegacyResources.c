/*
 * XREFs of IopCombineLegacyResources @ 0x1407A87F4
 * Callers:
 *     IopLegacyResourceAllocation @ 0x1409B81D4 (IopLegacyResourceAllocation.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpDetermineResourceListSize @ 0x140AA0E1C (PnpDetermineResourceListSize.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_DWORD *__fastcall IopCombineLegacyResources(__int64 a1)
{
  _DWORD *v1; // rsi
  int v2; // ebp
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  _DWORD *Pool2; // rax
  char *v7; // r14
  __int64 v8; // rbp
  int v9; // eax
  size_t v10; // rbx

  v1 = 0LL;
  v2 = 0;
  v3 = a1;
  v4 = a1;
  if ( a1 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 416);
      if ( v5 )
        v2 += PnpDetermineResourceListSize(v5);
      v4 = *(_QWORD *)(v4 + 536);
    }
    while ( v4 );
    if ( v2 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      v1 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = 0;
        v7 = (char *)(Pool2 + 1);
        do
        {
          v8 = *(_QWORD *)(v3 + 416);
          if ( v8 )
          {
            v9 = PnpDetermineResourceListSize(*(_QWORD *)(v3 + 416));
            if ( v9 )
            {
              v10 = (unsigned int)(v9 - 4);
              memmove(v7, (const void *)(v8 + 4), v10);
              v7 += v10;
              *v1 += **(_DWORD **)(v3 + 416);
            }
          }
          v3 = *(_QWORD *)(v3 + 536);
        }
        while ( v3 );
      }
    }
  }
  return v1;
}
