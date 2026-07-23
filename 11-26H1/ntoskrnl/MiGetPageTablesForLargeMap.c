/*
 * XREFs of MiGetPageTablesForLargeMap @ 0x1402A2624
 * Callers:
 *     MiMapContiguousMemoryLarge @ 0x1402A1EFC (MiMapContiguousMemoryLarge.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1402A3788 (MiReturnSystemVa.c)
 *     MiObtainSystemVa @ 0x1402A428C (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A46AC (MiMakeZeroedPageTablesEx.c)
 */

unsigned __int64 __fastcall MiGetPageTablesForLargeMap(unsigned __int64 a1, unsigned int a2, int a3, int a4)
{
  int v7; // r13d
  unsigned int v8; // r14d
  unsigned __int64 v9; // r12
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // r10
  int v14; // ecx
  int v15; // r13d
  int v17; // [rsp+70h] [rbp+8h]

  v7 = 2;
  if ( a2 == 8 )
  {
    v8 = 12;
  }
  else if ( a2 == 6 )
  {
    v8 = 10;
  }
  else
  {
    v8 = a2;
    v7 = 3;
  }
  v9 = a1 & 0xFFFFFFFFFFFFFE00uLL;
  v10 = (a1 >> 9) + 1;
  if ( (a1 & 0x1FF) == 0 )
    v10 = a1 >> 9;
  v11 = MiObtainSystemVa((unsigned int)v10, v8);
  v12 = v11;
  if ( v11 )
  {
    v13 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v14 = v7 | 4;
    v17 = v13;
    if ( a3 )
      v14 = v7;
    v15 = v14 | 0x1000;
    if ( KeGetCurrentIrql() != 2 )
      v15 = v14;
    if ( (unsigned int)MiMakeZeroedPageTablesEx(v13, (int)v13 + 8 * ((int)v9 - 1), v15, a2, a4)
      && (a1 == v9
       || (unsigned int)MiMakeZeroedPageTablesEx(v17 + 8 * (int)v9, v17 - 8 + 8 * (int)a1, v15 & 0x1001, a2, a4)) )
    {
      return v12;
    }
    MiReturnSystemVa(v12, (v10 << 21) + v12, v8);
  }
  return 0LL;
}
