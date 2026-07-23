/*
 * XREFs of MiNoFaultFound @ 0x1403A85F8
 * Callers:
 *     MiRaisedIrqlFault @ 0x1403A4788 (MiRaisedIrqlFault.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 *     MiLargePageFault @ 0x1403A95C0 (MiLargePageFault.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 */

_BOOL8 __fastcall MiNoFaultFound(
        __int64 a1,
        volatile signed __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  BOOL v6; // ebx
  int v7; // edi
  unsigned __int64 v8; // r10
  __int64 v9; // rax

  v6 = 0;
  v7 = 0;
  v8 = a6;
  if ( (a6 & 0x20) != 0 )
  {
    if ( (MiFlags & 0x400) == 0 )
      v6 = (MiFlags & 0x800) == 0;
  }
  else if ( (*(_BYTE *)(a1 + 69) & 0x20) == 0 )
  {
    v8 = a6 | 0x20;
    v7 = 1;
  }
  if ( (*(_QWORD *)(a1 + 8) & 2) == 0 )
    goto LABEL_11;
  v9 = (v8 >> 1) & 1;
  if ( (v8 & 0x40) == 0 )
  {
    if ( !v9 )
    {
      if ( (MiFlags & 0x400) == 0 && (MiFlags & 0x800) == 0 )
        v6 = 1;
      goto LABEL_10;
    }
LABEL_11:
    if ( !v7 )
      goto LABEL_16;
    goto LABEL_12;
  }
  if ( v9 )
    goto LABEL_11;
  v6 = 1;
LABEL_10:
  v8 |= 0x42uLL;
LABEL_12:
  if ( (MiFlags & 0x8000000) != 0 )
    _mm_lfence();
  if ( a6 != _InterlockedCompareExchange64(a2, v8, a6) )
    return 0LL;
LABEL_16:
  if ( v6
    && (*(_BYTE *)(a1 + 69) & 0x10) == 0
    && ((a4 & 1) == 0 || *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 5)
    && (MiFlags & 0x400) == 0
    && (MiFlags & 0x800) == 0 )
  {
    MiFlushSingleTbEntry(a3, a5);
  }
  return v6;
}
