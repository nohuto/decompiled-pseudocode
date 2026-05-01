/*
 * XREFs of ?HampClientCompareByLookupKey@@YAJPEAX0@Z @ 0x1800616E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall HampClientCompareByLookupKey(_QWORD *a1, _WORD *a2)
{
  char *v2; // r8
  __int16 v3; // r10
  int v4; // eax
  unsigned __int64 v6; // rdx
  unsigned int v7; // ecx
  char *v8; // r9
  unsigned __int16 v9; // cx

  v2 = (char *)*a1;
  v3 = a2[110];
  LOBYTE(v4) = 0;
  if ( !*a1 )
  {
    if ( !v3 )
    {
      v6 = *((_QWORD *)a2 + 19);
      if ( a1[2] >= v6 )
      {
        LOBYTE(v4) = a1[2] > v6;
        return v4;
      }
    }
    goto LABEL_7;
  }
  if ( !v3 || (v7 = *((_DWORD *)a2 + 42), *((_DWORD *)a1 + 2) > v7) )
  {
    LOBYTE(v4) = 1;
    return v4;
  }
  if ( *((_DWORD *)a1 + 2) < v7 )
  {
LABEL_7:
    LOBYTE(v4) = -1;
    return v4;
  }
  v8 = (char *)((char *)(a2 + 110) - v2);
  while ( 1 )
  {
    v9 = *(_WORD *)v2;
    if ( *(_WORD *)v2 != *(_WORD *)&v8[(_QWORD)v2] )
      break;
    v2 += 2;
    if ( !v9 )
      return v4;
  }
  return v9 < *(_WORD *)&v8[(_QWORD)v2] ? -1 : 1;
}
