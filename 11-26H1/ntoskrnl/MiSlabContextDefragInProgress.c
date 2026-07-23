/*
 * XREFs of MiSlabContextDefragInProgress @ 0x14070C6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSlabContextDefragInProgress(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  _QWORD **v8; // r8
  _QWORD *i; // r8

  v3 = 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)(a3 + 40);
    if ( v4 )
    {
      *(_QWORD *)(a2 + 48) = v4;
      *(_QWORD *)(a2 + 56) = *(_QWORD *)(a3 + 48);
    }
    else
    {
      *(_QWORD *)(a2 + 48) = 0LL;
      *(_QWORD *)(a2 + 56) = 0LL;
      if ( (*(_DWORD *)(a3 + 84) & 1) != 0 )
      {
        v5 = *(_QWORD *)(a2 + 8);
        if ( (v5 & 1) != 0 )
        {
          if ( v5 == 1 )
            return 0LL;
          v6 = v5 ^ (a2 | 1);
        }
        else
        {
          v6 = *(_QWORD *)(a2 + 8);
        }
        while ( v6 )
        {
          *(_DWORD *)(v6 + 92) &= ~0x200u;
          v7 = v6;
          v8 = *(_QWORD ***)(v6 + 8);
          if ( v8 )
          {
            v6 = *(_QWORD *)(v6 + 8);
            for ( i = *v8; i; i = (_QWORD *)*i )
              v6 = (unsigned __int64)i;
          }
          else
          {
            while ( 1 )
            {
              v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !v6 || *(_QWORD *)v6 == v7 )
                break;
              v7 = v6;
            }
          }
        }
      }
    }
    return 0LL;
  }
  if ( *(_QWORD *)(a2 + 48) )
    return 1LL;
  LOBYTE(v3) = *(_QWORD *)(a2 + 56) != 0LL;
  return v3;
}
