/*
 * XREFs of Uart16550GetByte @ 0x140699860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall Uart16550GetByte(__int64 a1, _BYTE *a2)
{
  char v4; // al
  char v5; // si
  char v7; // al
  __int16 v8; // r8
  char v9; // al

  if ( !a1 )
    return 3LL;
  if ( !*(_QWORD *)a1 )
    return 3LL;
  v4 = guard_dispatch_icall_no_overrides(a1);
  if ( v4 == -1 )
    return 3LL;
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 0xE) != 0 )
      return 2LL;
    v5 = guard_dispatch_icall_no_overrides(a1);
    if ( (*(_BYTE *)(a1 + 12) & 4) == 0 || (guard_dispatch_icall_no_overrides(a1) & 0x80u) != 0LL )
    {
      *a2 = v5;
      return 0LL;
    }
  }
  else
  {
    v7 = guard_dispatch_icall_no_overrides(a1);
    v8 = *(_WORD *)(a1 + 12);
    v9 = v7 & 0x40;
    if ( v9 == 0 && (v8 & 2) != 0 || v9 != 0 && (v8 & 2) == 0 )
      *(_WORD *)(a1 + 12) = v8 | 4;
  }
  return 1LL;
}
