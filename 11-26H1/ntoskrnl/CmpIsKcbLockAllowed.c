/*
 * XREFs of CmpIsKcbLockAllowed @ 0x140A96AA4
 * Callers:
 *     CmpFindSubkeyInHashByChildCell @ 0x1408DA960 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpIsKcbLockAllowed(_WORD *a1, unsigned __int64 a2, _BYTE *a3)
{
  unsigned __int16 v3; // ax
  __int16 v5; // r8
  __int16 v6; // ax
  _WORD *v7; // rax

  *a3 = 0;
  if ( a1 != (_WORD *)a2 )
  {
    v3 = *(_WORD *)(a2 + 12);
    if ( a1[6] <= v3 )
    {
      if ( a1[6] >= v3 )
      {
        v5 = a1[93];
        if ( (v5 & 4) != 0 && (*(_DWORD *)(a2 + 184) & 0x20000) != 0 )
          return a1 == (_WORD *)a2;
        if ( (v5 & 2) == 0 || (*(_DWORD *)(a2 + 184) & 0x40000) == 0 )
        {
          v6 = *(_WORD *)(a2 + 66);
          if ( (__int16)a1[33] > v6 )
            return a1 == (_WORD *)a2;
          if ( (__int16)a1[33] >= v6 )
          {
            v7 = (_WORD *)a2;
            if ( (unsigned __int64)a1 > a2 )
              v7 = a1;
            a1 = v7;
            return a1 == (_WORD *)a2;
          }
        }
      }
      a1 = (_WORD *)a2;
    }
    return a1 == (_WORD *)a2;
  }
  *a3 = 1;
  return 1;
}
