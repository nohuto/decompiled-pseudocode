/*
 * XREFs of EmMatchDate @ 0x14078FFC0
 * Callers:
 *     <none>
 * Callees:
 *     EmpCheckOperator @ 0x140790110 (EmpCheckOperator.c)
 */

__int64 __fastcall EmMatchDate(__int64 a1, __int64 a2, _BYTE **a3, int a4, _DWORD *a5, int a6)
{
  unsigned int v6; // ebx
  _BYTE *v7; // rcx
  unsigned int v8; // eax
  int v9; // r9d
  int v10; // eax
  int v11; // r9d

  v6 = 1;
  if ( a3 )
  {
    if ( a4 == 1 )
    {
      v7 = *a3;
      if ( *a3 )
      {
        if ( a6 == 3 )
        {
          v8 = a5[2];
          v9 = -(v8 < 0x80);
          v10 = (*a5 + (v8 << 8)) << 8;
          v11 = (v9 & 0x7000000) + 419430400;
          if ( EmpCachedBiosDate || *v7 == 42 )
          {
            if ( (unsigned int)EmpCheckOperator(v7, (unsigned int)EmpCachedBiosDate, (unsigned int)(v11 + v10 + a5[1])) )
              return 2;
          }
        }
      }
    }
  }
  return v6;
}
