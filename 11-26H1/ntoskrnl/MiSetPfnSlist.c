/*
 * XREFs of MiSetPfnSlist @ 0x1404331B0
 * Callers:
 *     MiInsertFreeZeroPage @ 0x1402DCE70 (MiInsertFreeZeroPage.c)
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
    if ( qword_140E2D740 )
    {
      if ( (v3 & 0x10) != 0 )
        LODWORD(v3) = v3 & 0xFFFFFFEF;
      else
        LODWORD(v3) = qword_140E2D748 & v3;
    }
  }
  else
  {
    LODWORD(v3) = 0;
  }
  result = (unsigned int)v3;
  v5 = (unsigned int)v3 | 0xFFFFFFFE00000000uLL;
  if ( qword_140E2D740 )
  {
    result = (unsigned int)v3 | 0xFFFFFFFE00000010uLL;
    if ( (qword_140E2D740 & v5) == 0 )
      result = qword_140E2D740 | (unsigned int)v3 | 0xFFFFFFFE00000000uLL;
    *(_QWORD *)(a1 + 16) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v5;
  }
  return result;
}
