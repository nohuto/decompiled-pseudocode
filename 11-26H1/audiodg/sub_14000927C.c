/*
 * XREFs of sub_14000927C @ 0x14000927C
 * Callers:
 *     sub_14000908C @ 0x14000908C (sub_14000908C.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14000927C(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( v4 )
    {
      if ( a2 && *(_DWORD *)(v3 + 40) == 2 && *(_DWORD *)(v4 + 40) == 2 )
      {
        if ( *(_DWORD *)(a1 + 16) )
        {
          if ( (*(_BYTE *)(v3 + 48) & 1) != 0 )
          {
            v8 = *(_QWORD *)(a2 + 24);
            if ( v8 )
            {
              if ( *(_DWORD *)(v8 + 40) == 2 )
              {
                sub_1400B6010(v3);
                v9 = sub_1400B6010(0LL);
                sub_1400B6010(v3);
                return *(_DWORD *)(sub_1400B6010(0LL) + 8) >= *(_DWORD *)(v9 + 8);
              }
            }
          }
        }
        else if ( (*(_BYTE *)(v4 + 48) & 1) != 0 )
        {
          v5 = *(_QWORD *)(a2 + 32);
          if ( v5 )
          {
            if ( *(_DWORD *)(v5 + 40) == 2 )
            {
              sub_1400B6010(v4);
              v6 = sub_1400B6010(0LL);
              sub_1400B6010(v4);
              return *(_DWORD *)(v6 + 8) >= *(_DWORD *)(sub_1400B6010(0LL) + 8);
            }
          }
        }
      }
    }
  }
  return v2;
}
