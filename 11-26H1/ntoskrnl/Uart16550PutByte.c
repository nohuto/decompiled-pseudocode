/*
 * XREFs of Uart16550PutByte @ 0x140726980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall Uart16550PutByte(__int64 a1, __int64 a2, char a3)
{
  char v5; // al
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // rdx
  __int16 v9; // cx
  char v10; // al

  if ( a1 && *(_QWORD *)a1 )
  {
    if ( (*(_BYTE *)(a1 + 12) & 4) != 0 )
    {
      LOBYTE(a2) = 6;
      for ( LOBYTE(a2) = guard_dispatch_icall_no_overrides(a1, a2);
            (a2 & 0xB0) != 0xB0;
            LOBYTE(a2) = guard_dispatch_icall_no_overrides(a1, a2) )
      {
        if ( (a2 & 0x80u) == 0LL )
        {
          LOBYTE(a2) = 5;
          if ( (guard_dispatch_icall_no_overrides(a1, a2) & 1) != 0 )
            guard_dispatch_icall_no_overrides(a1, 0LL);
        }
        LOBYTE(a2) = 6;
      }
    }
    LOBYTE(a2) = 5;
    v5 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v5 != -1 )
    {
      while ( 1 )
      {
        if ( (v5 & 0x20) != 0 )
        {
          guard_dispatch_icall_no_overrides(a1, 0LL);
          return 0LL;
        }
        LOBYTE(v6) = 6;
        v7 = guard_dispatch_icall_no_overrides(a1, v6);
        v9 = *(_WORD *)(a1 + 12);
        v10 = v7 & 0x40;
        if ( (v9 & 2) == 0 )
          break;
        if ( !v10 )
          goto LABEL_15;
LABEL_16:
        if ( !a3 )
          return 3LL;
        LOBYTE(v8) = 5;
        v5 = guard_dispatch_icall_no_overrides(a1, v8);
      }
      if ( !v10 )
        goto LABEL_16;
LABEL_15:
      *(_WORD *)(a1 + 12) = v9 | 4;
      goto LABEL_16;
    }
  }
  return 3LL;
}
