/*
 * XREFs of PpmUpdateIdleStatesInplace @ 0x1404D80E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmUpdateIdleStatesInplace(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  __int64 v4; // rcx
  int *v6; // rdx
  __int64 v7; // r10
  __int64 v8; // r9
  int v9; // ecx

  v2 = *(_QWORD *)(a1 + 34880);
  v3 = 0;
  if ( v2 )
  {
    v4 = *(unsigned int *)(a2 + 96);
    if ( (_DWORD)v4 == *(_DWORD *)(v2 + 40) )
    {
      *(_QWORD *)(v2 + 664) = *(_QWORD *)(a2 + 8);
      if ( (_DWORD)v4 )
      {
        v6 = (int *)(a2 + 104);
        v7 = v4;
        v8 = v2 + 1336;
        do
        {
          *(_BYTE *)(v8 + 63) = (*v6 & 0x40000000) != 0;
          *(_DWORD *)v8 = v6[1];
          v8 += 352LL;
          *(_DWORD *)(v8 - 344) = v6[3];
          *(_DWORD *)(v8 - 348) = v6[2];
          *(_BYTE *)(v8 - 295) = *v6 < 0;
          *(_DWORD *)(v8 - 340) = (unsigned int)*v6 >> 31;
          v9 = *v6;
          v6 += 8;
          *(_BYTE *)(v8 - 288) = (v9 & 0x200) != 0;
          --v7;
        }
        while ( v7 );
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
