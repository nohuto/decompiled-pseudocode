/*
 * XREFs of MiSetPfnSlist @ 0x140428280
 * Callers:
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnSlist(__int64 a1, int a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx

  v3 = ((__int64)a2 << 12) ^ (*(_QWORD *)(a1 + 16) ^ ((__int64)a2 << 12)) & 0xFFFFFFFFFFFF0FFFuLL;
  if ( v3 )
  {
    if ( qword_140E2D8C0 )
    {
      if ( (v3 & 0x10) != 0 )
        LODWORD(v3) = v3 & 0xFFFFFFEF;
      else
        LODWORD(v3) = qword_140E2D8C8 & v3;
    }
  }
  else
  {
    LODWORD(v3) = 0;
  }
  result = (unsigned int)v3;
  v5 = (unsigned int)v3 | 0xFFFFFFFE00000000uLL;
  if ( qword_140E2D8C0 )
  {
    result = (unsigned int)v3 | 0xFFFFFFFE00000010uLL;
    if ( (qword_140E2D8C0 & v5) == 0 )
      result = qword_140E2D8C0 | (unsigned int)v3 | 0xFFFFFFFE00000000uLL;
    *(_QWORD *)(a1 + 16) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v5;
  }
  return result;
}
