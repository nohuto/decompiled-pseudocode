/*
 * XREFs of SpiInit @ 0x140726B98
 * Callers:
 *     SpiSend16 @ 0x140727028 (SpiSend16.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SpiInit(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int16 v12; // bx
  __int64 v13; // rdx
  __int16 v14; // ax

  v4 = a4;
  v5 = a1 + 40;
  while ( (guard_dispatch_icall_no_overrides(v5, a2) & 5) != 4 )
    ;
  while ( (guard_dispatch_icall_no_overrides(v5, a2) & 8) != 0 )
    guard_dispatch_icall_no_overrides(a1 + 96, v7);
  guard_dispatch_icall_no_overrides(a1 + 16, 0LL);
  v8 = a1 + 8;
  guard_dispatch_icall_no_overrides(a1 + 8, 0LL);
  guard_dispatch_icall_no_overrides(a1, 15LL);
  guard_dispatch_icall_no_overrides(a1 + 4, 0LL);
  guard_dispatch_icall_no_overrides(a1 + 20, v4);
  v10 = a1 + 52;
  v11 = a1 + 48;
  do
  {
    do
    {
      v12 = guard_dispatch_icall_no_overrides(v10, v9);
      v14 = guard_dispatch_icall_no_overrides(v11, v13);
    }
    while ( v12 );
  }
  while ( v14 );
  return guard_dispatch_icall_no_overrides(v8, 1LL);
}
