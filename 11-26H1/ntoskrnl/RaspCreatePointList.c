/*
 * XREFs of RaspCreatePointList @ 0x140356648
 * Callers:
 *     RaspRasterize @ 0x1404A6E94 (RaspRasterize.c)
 * Callees:
 *     RaspAllocateMemory @ 0x140357710 (RaspAllocateMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RaspCreatePointList(__int64 a1, _QWORD *a2, __int64 a3)
{
  char *Memory; // rbx
  unsigned int i; // edx
  __int64 v8; // r9
  __int64 v9; // rax

  Memory = (char *)RaspAllocateMemory(17LL * *(unsigned __int16 *)(a1 + 24), a3);
  if ( !Memory )
    return 3221225626LL;
  memset_0(Memory, 0, 17LL * *(unsigned __int16 *)(a1 + 24));
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 24); ++i )
  {
    v8 = 17LL * i;
    *(_DWORD *)&Memory[v8] = *(_DWORD *)(*(_QWORD *)(a1 + 50) + 4LL * i);
    *(_DWORD *)&Memory[v8 + 4] = *(_DWORD *)(*(_QWORD *)(a1 + 58) + 4LL * i);
    v9 = *(_QWORD *)(a1 + 42);
    if ( v9 )
    {
      if ( (*(_BYTE *)(v9 + i) & 1) != 0 )
        Memory[v8 + 16] = 1;
    }
  }
  *a2 = Memory;
  return 0LL;
}
