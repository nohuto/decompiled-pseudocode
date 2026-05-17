/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1800DF440
 * Callers:
 *     RtlpTpIoDllProcessUnloads @ 0x1800B8268 (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlDuplicateUnicodeString(int a1, __int16 *a2, __int64 a3)
{
  char v5; // r8
  unsigned __int16 v6; // di
  _WORD *v7; // rsi
  __int64 result; // rax
  unsigned __int16 v9; // cx
  int v10; // r15d
  unsigned __int16 v11; // bx
  _WORD *Atom; // rax

  v5 = a1;
  v6 = 0;
  v7 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a3 || (a1 & 3) == 2 )
    return 3221225485LL;
  result = 0LL;
  if ( a2 )
  {
    if ( (*(_BYTE *)a2 & 1) != 0
      || (v9 = a2[1], (v9 & 1) != 0)
      || (unsigned __int16)*a2 > v9
      || v9 == 0xFFFF
      || !*((_QWORD *)a2 + 1) && (*a2 || v9) )
    {
      result = 3221225485LL;
    }
  }
  if ( (int)result >= 0 )
  {
    if ( a2 )
      v6 = *a2;
    v10 = v5 & 1;
    if ( (v5 & 1) == 0 || v6 != 0xFFFE )
    {
      if ( (v5 & 1) != 0 )
        v11 = v6 + 2;
      else
        v11 = v6;
      if ( (v5 & 2) == 0 && !v6 )
        v11 = 0;
      if ( v11 )
      {
        Atom = (_WORD *)RtlpAllocateAtom(v11);
        v7 = Atom;
        if ( !Atom )
          return 3221225495LL;
        if ( v6 )
          memmove(Atom, *((const void **)a2 + 1), v6);
        if ( v10 )
          v7[(unsigned __int64)v6 >> 1] = 0;
      }
      *(_WORD *)(a3 + 2) = v11;
      *(_WORD *)a3 = v6;
      *(_QWORD *)(a3 + 8) = v7;
      return 0LL;
    }
    return 3221225734LL;
  }
  return result;
}
