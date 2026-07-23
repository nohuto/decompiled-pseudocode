/*
 * XREFs of PspCheckForJobAffinityViolation @ 0x140AF6A18
 * Callers:
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspCheckForJobAffinityViolation(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 v4; // r9
  unsigned __int16 *v5; // r10
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // r11
  unsigned __int16 v8; // bx
  unsigned __int16 i; // dx
  __int64 v10; // rcx

  if ( (*(_DWORD *)(a1 + 1056) & 0x10) != 0 )
  {
    v4 = *a2;
    v5 = (unsigned __int16 *)(a1 + 728);
    v6 = *(_WORD *)(a1 + 728);
    v7 = a2;
    v8 = v6;
    if ( *a2 < v6 )
      v7 = (unsigned __int16 *)(a1 + 728);
    else
      v8 = *a2;
    if ( v4 >= v6 )
      v4 = *(_WORD *)(a1 + 728);
    for ( i = 0; i < v4; ++i )
    {
      v10 = *(_QWORD *)&a2[4 * i + 4];
      if ( (v10 & *(_QWORD *)&v5[4 * i + 4]) != v10 )
        return 3221225473LL;
    }
    if ( v7 != v5 )
    {
      while ( i < v8 )
      {
        if ( *(_QWORD *)&a2[4 * i + 4] )
          return 3221225473LL;
        ++i;
      }
    }
  }
  return 0LL;
}
