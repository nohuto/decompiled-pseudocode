/*
 * XREFs of PnpiCmResourceToBiosExtendedIrq @ 0x1400B9598
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1400B8A44 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x140046DEC (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 */

__int64 __fastcall PnpiCmResourceToBiosExtendedIrq(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v5; // r8d
  unsigned int i; // edx
  __int64 v8; // rbp
  char Polarity; // al
  char v10; // dl
  __int16 v11; // r8
  char v12; // cl
  char v13; // dl
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(a3 + 16);
  v15 = 0;
  for ( i = 0; i < v5; ++i )
  {
    v8 = 5LL * i;
    if ( *(_BYTE *)(a3 + 20LL * i + 20) == 2 )
    {
      *(_DWORD *)(a2 + 5) = *(unsigned __int16 *)(a3 + 20LL * i + 24);
      *(_BYTE *)(a2 + 3) = 0;
      Polarity = ACPIInternalInterruptPolarityCacheGetPolarity(
                   *(_QWORD *)(a1 + 784),
                   *(_DWORD *)(a3 + 20LL * i + 28),
                   &v15);
      v10 = *(_BYTE *)(a2 + 3);
      v11 = *(_WORD *)(a3 + 4 * v8 + 22) & 1;
      if ( Polarity )
      {
        v12 = v10 | 2;
        if ( !v11 )
          v12 = *(_BYTE *)(a2 + 3);
        if ( (v15 & 2) != 0 )
          v12 |= 4u;
        *(_BYTE *)(a2 + 3) = v12;
      }
      else
      {
        if ( v11 )
          v13 = v10 | 2;
        else
          v13 = v10 | 4;
        v12 = v13;
        *(_BYTE *)(a2 + 3) = v13;
      }
      if ( *(_BYTE *)(a3 + 4 * v8 + 21) == 3 )
        v12 |= 8u;
      *(_BYTE *)(a2 + 3) = v12 | 1;
      *(_BYTE *)(a3 + 4 * v8 + 20) = 0;
      v3 = 1;
      return v3 == 0 ? 0xC0000001 : 0;
    }
  }
  return v3 == 0 ? 0xC0000001 : 0;
}
