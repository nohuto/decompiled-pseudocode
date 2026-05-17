/*
 * XREFs of RtlCreateAtomTableEx @ 0x180037240
 * Callers:
 *     RtlCreateAtomTable @ 0x180037230 (RtlCreateAtomTable.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateAtomTableEx(unsigned int a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // edi
  int v6; // ebp
  _DWORD *Atom; // rax
  _DWORD *v9; // rbx

  v4 = 0;
  if ( !*a3 )
  {
    v6 = 37;
    if ( a1 > 1 )
      v6 = a1;
    if ( !is_mul_ok(0x18uLL, (unsigned int)(v6 - 1))
      || 24 * (unsigned __int64)(unsigned int)(v6 - 1) + 80 < 24 * (unsigned __int64)(unsigned int)(v6 - 1) )
    {
      return 3221225621LL;
    }
    Atom = (_DWORD *)RtlpAllocateAtom(
                       24LL * (unsigned int)(v6 - 1) + 80,
                       (0x18 * (unsigned __int128)(unsigned int)(v6 - 1)) >> 64,
                       a3,
                       a4);
    v9 = Atom;
    if ( Atom )
    {
      memset_thunk_772440563353939046(Atom, 0, 24LL * (unsigned int)(v6 - 1) + 80);
      v9[16] = v6;
      *((_OWORD *)v9 + 1) = 0LL;
      *((_OWORD *)v9 + 2) = 0LL;
      *((_OWORD *)v9 + 3) = 0LL;
      v9[4] = 0x3FFF;
      v9[5] = 16;
      v9[6] = 1;
      *((_QWORD *)v9 + 1) = 0LL;
      *v9 = 1836020801;
      v9[1] = 1;
      *a3 = v9;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v4;
}
