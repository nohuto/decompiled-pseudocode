/*
 * XREFs of MiMoveZeroedPage @ 0x140521CB0
 * Callers:
 *     MiBackgroundZeroPage @ 0x140456DB4 (MiBackgroundZeroPage.c)
 * Callees:
 *     MiPageFreeToZero @ 0x14028B780 (MiPageFreeToZero.c)
 *     MiGetZeroingPfn @ 0x140428210 (MiGetZeroingPfn.c)
 *     MiHugeRangeFreeToZero @ 0x1404878B0 (MiHugeRangeFreeToZero.c)
 */

void __fastcall MiMoveZeroedPage(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edi
  ULONG_PTR v3; // r10
  char v4; // r11
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(unsigned __int8 *)(a1 + 3);
  if ( (*(_QWORD *)(v1 + 24) & 0x40) != 0 )
  {
    if ( (unsigned __int8)*(_DWORD *)(MiGetZeroingPfn((__int64)v5, a1, *(_QWORD *)(v1 + 24)) + 8) )
    {
      if ( (unsigned int)MiPageFreeToZero(v3, v4, v2) )
        *(_QWORD *)(v1 + 24) |= 0x80uLL;
    }
    else
    {
      MiHugeRangeFreeToZero(v3 & 0x3FFFFF, v4, 1);
    }
  }
}
