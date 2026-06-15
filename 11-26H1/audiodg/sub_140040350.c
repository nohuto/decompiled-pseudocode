/*
 * XREFs of sub_140040350 @ 0x140040350
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400403C4 @ 0x1400403C4 (sub_1400403C4.c)
 *     sub_1400468E4 @ 0x1400468E4 (sub_1400468E4.c)
 *     sub_14004F3B0 @ 0x14004F3B0 (sub_14004F3B0.c)
 */

int __fastcall sub_140040350(__int64 a1)
{
  __int64 v2; // rax

  sub_1400403C4();
  LODWORD(v2) = GetCurrentThreadId();
  if ( dword_1400E8418 != (_DWORD)v2 )
  {
    if ( _InterlockedIncrement(&dword_1400E841C) < 4 )
    {
      dword_1400E8418 = v2;
      v2 = sub_1400468E4();
      if ( v2 )
        LODWORD(v2) = sub_14004F3B0(v2, a1);
      dword_1400E8418 = 0;
    }
    _InterlockedDecrement(&dword_1400E841C);
  }
  return v2;
}
