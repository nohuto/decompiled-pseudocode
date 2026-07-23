/*
 * XREFs of MiGetLargeVadMappingIndex @ 0x14052BE50
 * Callers:
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiGetLargeVadMappingIndex(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned int *v6; // rbp
  __int64 ProtoPteAddress; // rax
  unsigned int *v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int *v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v3 = *(unsigned int *)(a1 + 24);
  v10 = 0LL;
  v4 = (a2 >> 12) & 0xFFFFFFFFC0000LL;
  v5 = 1;
  if ( v4 >= (v3 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
    && v4 + 0x3FFFF <= (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    MiGetProtoPteAddress(a1, a2 >> 12, 0xCu, &v9);
    v6 = v9;
    if ( (v9[12] & 0xC0000000) == 0x80000000 )
    {
      ProtoPteAddress = MiGetProtoPteAddress(a1, v4, 4u, &v10);
      if ( v10 == v6 && ProtoPteAddress == *((_QWORD *)v10 + 1) )
        return 2;
    }
  }
  return v5;
}
