/*
 * XREFs of EtwpAddEventToBuffer @ 0x1800EC0B4
 * Callers:
 *     EtwpAddDebugInfoEvents @ 0x180040C88 (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall EtwpAddEventToBuffer(
        __int64 a1,
        __int16 a2,
        _QWORD *a3,
        const void *a4,
        unsigned int Size,
        unsigned int a6,
        _DWORD *a7)
{
  __int64 v9; // rcx
  __int16 v10; // ax

  *a7 = Size + 16;
  if ( a6 < Size + 16 )
    return 3221225507LL;
  v9 = *(unsigned int *)(a1 + 48);
  v10 = *(_WORD *)a7;
  *(_WORD *)(v9 + a1 + 6) = a2;
  *(_WORD *)(v9 + a1 + 4) = v10;
  *(_DWORD *)(v9 + a1) = -1072627710;
  *(_QWORD *)(v9 + a1 + 8) = *a3;
  memmove((void *)(a1 + v9 + 16), a4, Size);
  *(_DWORD *)(a1 + 48) += (Size + 23) & 0xFFFFFFF8;
  return 0LL;
}
