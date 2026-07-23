/*
 * XREFs of MiGetZeroingPfn @ 0x140428210
 * Callers:
 *     MiMoveZeroedPage @ 0x140521CB0 (MiMoveZeroedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetZeroingPfn(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 48);
  *(_OWORD *)a1 = 0LL;
  v4 = (a3 >> 12) & 0x3FFFFFFFFFLL;
  if ( v3 && *(_BYTE *)(v3 + 68) )
  {
    result = a1;
    *(_QWORD *)a1 = *(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * (v4 & 0x3FFFFF);
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 1;
    *(_QWORD *)a1 = 48 * v4 - 0x220000000000LL;
    return a1;
  }
  return result;
}
