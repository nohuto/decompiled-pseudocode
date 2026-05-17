/*
 * XREFs of RtlUpperString @ 0x180140880
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180082DC0 (RtlUpperChar.c)
 */

char __fastcall RtlUpperString(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int16 v3; // ax
  int v4; // ebx
  _BYTE *v5; // rsi
  _BYTE *v6; // rdi

  v3 = *a2;
  v4 = *(unsigned __int16 *)(a1 + 2);
  v5 = (_BYTE *)*((_QWORD *)a2 + 1);
  v6 = *(_BYTE **)(a1 + 8);
  if ( *a2 <= (unsigned __int16)v4 )
    v4 = *a2;
  for ( *(_WORD *)a1 = v4; v4; --v4 )
  {
    LOBYTE(a1) = *v5;
    LOBYTE(v3) = RtlUpperChar(a1, (__int64)a2, a3);
    *v6 = v3;
    ++v5;
    ++v6;
  }
  return v3;
}
