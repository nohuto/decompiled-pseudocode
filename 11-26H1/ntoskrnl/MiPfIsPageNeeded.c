/*
 * XREFs of MiPfIsPageNeeded @ 0x1403754A8
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiPfIsPageNeeded(__int64 *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v5; // rcx

  result = a1[16];
  v2 = 0LL;
  *((_DWORD *)a1 + 40) = 0;
  if ( (result & 0x400) != 0 )
  {
    if ( qword_140E2D8C0 && (result & 0x10) == 0 )
      result &= qword_140E2D8C8;
    v4 = (result >> 12) & 0x3FFFFFFFFFFLL;
    if ( v4 )
      v2 = qword_140E37D10 - 8 + 8 * v4;
    v5 = *a1;
    a1[18] = v2;
    result = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 56LL) & 0x30000000;
    if ( (_DWORD)result != 0x10000000 )
    {
      result = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 56LL) & 0x30000000;
      if ( (_DWORD)result != 0x20000000 )
        *((_DWORD *)a1 + 40) = 1;
    }
  }
  else
  {
    if ( (result & 1) != 0 )
      goto LABEL_22;
    if ( qword_140E2D8C0 && (result & 0x10) == 0 )
      result &= qword_140E2D8C8;
    if ( (result & 0x400) != 0 || (result & 0x800) != 0 || (result & 8) != 0 )
    {
LABEL_22:
      if ( a1[11] )
        *((_DWORD *)a1 + 40) = 2;
    }
  }
  return result;
}
