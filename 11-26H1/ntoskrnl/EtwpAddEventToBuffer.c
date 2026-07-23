/*
 * XREFs of EtwpAddEventToBuffer @ 0x140ABD298
 * Callers:
 *     EtwpAddLastDroppedEvent @ 0x140482284 (EtwpAddLastDroppedEvent.c)
 *     EtwpAddDebugInfoEvents @ 0x140ABD02C (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall EtwpAddEventToBuffer(
        __int64 a1,
        __int16 a2,
        _QWORD *a3,
        const void *a4,
        unsigned int Size,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int v8; // r11d
  __int64 v9; // rcx
  __int64 v10; // rbx

  v8 = (Size + 23) & 0xFFFFFFF8;
  *a7 = v8;
  if ( v8 > a6 )
    return 0LL;
  v9 = *(unsigned int *)(a1 + 48);
  *(_DWORD *)(a1 + 48) = v9 + v8;
  *(_WORD *)(v9 + a1 + 4) = Size + 16;
  v10 = v9 + a1;
  *(_DWORD *)(v9 + a1) = -1072627710;
  *(_WORD *)(v9 + a1 + 6) = a2;
  *(_QWORD *)(v9 + a1 + 8) = *a3;
  if ( a4 )
    memmove((void *)(v10 + 16), a4, Size);
  return v10 + 16;
}
