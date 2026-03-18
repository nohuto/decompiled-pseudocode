/*
 * XREFs of Uart16550PutByte @ 0x140699AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall Uart16550PutByte(__int64 a1, __int64 a2, char a3)
{
  char i; // dl
  char v6; // al
  char v7; // al
  __int16 v8; // r8
  char v9; // al

  if ( !a1 || !*(_QWORD *)a1 )
    return 3LL;
  if ( (*(_BYTE *)(a1 + 12) & 4) != 0 )
  {
    for ( i = guard_dispatch_icall_no_overrides(a1); (i & 0xB0) != 0xB0; i = guard_dispatch_icall_no_overrides(a1) )
    {
      if ( i >= 0 )
      {
        guard_dispatch_icall_no_overrides(a1);
        if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
          guard_dispatch_icall_no_overrides(a1);
      }
    }
  }
  v6 = guard_dispatch_icall_no_overrides(a1);
  if ( v6 == -1 )
    return 3LL;
  while ( (v6 & 0x20) == 0 )
  {
    v7 = guard_dispatch_icall_no_overrides(a1);
    v8 = *(_WORD *)(a1 + 12);
    v9 = v7 & 0x40;
    if ( v9 == 0 && (v8 & 2) != 0 || v9 != 0 && (v8 & 2) == 0 )
      *(_WORD *)(a1 + 12) = v8 | 4;
    if ( !a3 )
      return 3LL;
    v6 = guard_dispatch_icall_no_overrides(a1);
  }
  guard_dispatch_icall_no_overrides(a1);
  return 0LL;
}
