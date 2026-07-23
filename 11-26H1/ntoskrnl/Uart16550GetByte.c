/*
 * XREFs of Uart16550GetByte @ 0x140726730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall Uart16550GetByte(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rdi
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // si
  char v9; // al
  __int16 v10; // cx
  char v11; // al

  v2 = a2;
  if ( a1 )
  {
    if ( *(_QWORD *)a1 )
    {
      LOBYTE(a2) = 5;
      v4 = guard_dispatch_icall_no_overrides(a1, a2);
      if ( v4 != -1 )
      {
        if ( (v4 & 1) != 0 )
        {
          if ( (v4 & 0xE) != 0 )
            return 2LL;
          v7 = guard_dispatch_icall_no_overrides(a1, 0LL);
          if ( (*(_BYTE *)(a1 + 12) & 4) == 0
            || (LOBYTE(v6) = 6, (guard_dispatch_icall_no_overrides(a1, v6) & 0x80u) != 0LL) )
          {
            *v2 = v7;
            return 0LL;
          }
          return 1LL;
        }
        LOBYTE(v5) = 6;
        v9 = guard_dispatch_icall_no_overrides(a1, v5);
        v10 = *(_WORD *)(a1 + 12);
        v11 = v9 & 0x40;
        if ( (v10 & 2) != 0 )
        {
          if ( v11 )
            return 1LL;
        }
        else if ( !v11 )
        {
          return 1LL;
        }
        *(_WORD *)(a1 + 12) = v10 | 4;
        return 1LL;
      }
    }
  }
  return 3LL;
}
