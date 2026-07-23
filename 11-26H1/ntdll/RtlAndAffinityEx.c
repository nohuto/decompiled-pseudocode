/*
 * XREFs of RtlAndAffinityEx @ 0x18013F5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAndAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v5; // ax
  unsigned int v6; // r10d
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // dx
  bool v9; // zf
  __int64 v10; // rcx
  unsigned __int16 v12; // r8
  unsigned int v13; // r9d
  unsigned __int16 i; // dx

  if ( a3 )
  {
    v5 = *a1;
    v6 = 0;
    v7 = *(_WORD *)(a3 + 2);
    if ( v5 >= *a2 )
      v5 = *a2;
    *(_WORD *)a3 = v5;
    if ( v5 > v7 )
    {
      *(_WORD *)a3 = v7;
      v5 = v7;
    }
    v8 = 0;
    if ( v5 )
    {
      do
      {
        v9 = (*(_QWORD *)&a1[4 * v8 + 4] & *(_QWORD *)&a2[4 * v8 + 4]) == 0LL;
        *(_QWORD *)(a3 + 8LL * v8 + 8) = *(_QWORD *)&a1[4 * v8 + 4] & *(_QWORD *)&a2[4 * v8 + 4];
        if ( !v9 )
          v6 = 1;
        ++v8;
      }
      while ( v8 < *(_WORD *)a3 );
    }
    *(_DWORD *)(a3 + 4) = 0;
    while ( v8 < *(_WORD *)(a3 + 2) )
    {
      v10 = v8++;
      *(_QWORD *)(a3 + 8 * v10 + 8) = 0LL;
    }
    return v6;
  }
  else
  {
    v12 = *a1;
    v13 = 1;
    if ( *a1 >= *a2 )
      v12 = *a2;
    for ( i = 0; i < v12; ++i )
    {
      if ( (*(_QWORD *)&a2[4 * i + 4] & *(_QWORD *)&a1[4 * i + 4]) != 0LL )
        return v13;
    }
    return 0;
  }
}
