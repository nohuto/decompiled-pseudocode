/*
 * XREFs of MiPteNeedsCommitCharge @ 0x1404821EC
 * Callers:
 *     MiCountSharedPages @ 0x1402B2BD0 (MiCountSharedPages.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiPteNeedsCommitCharge(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v3; // edi
  unsigned int *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v3 = 0;
  v5 = 0LL;
  if ( (v2 & 0x1C) == 8 && (v2 & 0x3E0) != 0x20 )
  {
    MiGetProtoPteAddress(a1, (unsigned __int64)(a2 << 25 >> 16) >> 12, 0xCu, &v5);
    if ( v5 )
      return (v5[8] & 0xA) != 10;
  }
  LOBYTE(v3) = (v2 & 0xA0) != 0xA0;
  return v3;
}
