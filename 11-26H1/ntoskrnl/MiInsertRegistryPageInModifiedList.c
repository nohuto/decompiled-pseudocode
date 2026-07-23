/*
 * XREFs of MiInsertRegistryPageInModifiedList @ 0x140D0A564
 * Callers:
 *     MiPageBootRegistry @ 0x1406E8744 (MiPageBootRegistry.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiInsertRegistryPageInModifiedList(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rbp
  int v9; // ebx
  _DWORD *SubsectionFromPte; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // [rsp+58h] [rbp+10h] BYREF

  result = MiMakeDemandZeroPte(4);
  v5 = result;
  if ( v6 )
  {
    v7 = 48 * v4 - 0x21FFFFFFFFF0LL;
    do
    {
      v8 = v7 - 16;
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 8), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v13);
        while ( *(__int64 *)(v7 + 8) < 0 );
      }
      *(_QWORD *)(v7 - 16) |= 1uLL;
      *(_QWORD *)v7 = v5;
      v9 = *(_DWORD *)(v7 + 16);
      if ( *(__int64 *)(v7 + 24) < 0 && (*(_QWORD *)v7 & 0x400000000000400LL) == 0x400 )
      {
        SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)v7);
        if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
          KeBugCheckEx(0x1Au, 0x8840uLL, v7 - 16, 0LL, 1uLL);
      }
      if ( *(__int64 *)(v7 + 24) < 0
        && (*(_DWORD *)v7 & 0x400LL) != 0
        && (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) == 0 )
      {
        v11 = MiGetSubsectionFromPte(*(_QWORD *)v7);
        if ( (*(_DWORD *)(*(_QWORD *)v11 + 56LL) & 0x20) == 0 && (*(_DWORD *)(v11 + 152) & 1) == 0 )
          MiSetSubsectionModified((__int64 *)v11, 0);
      }
      if ( (v9 & 0x80000) != 0
        && MiCanPfnOriginalPteBeLost(v7 - 16)
        && (*(_QWORD *)v7 & 8LL) != 0
        && (v9 & 0x100000) == 0 )
      {
        *(_QWORD *)v7 &= ~8uLL;
      }
      *(_DWORD *)(v7 + 16) = v9 | 0x100000;
      if ( (*(_BYTE *)(v7 + 18) & 7) != 6 )
        MiBadShareCount(v7 - 16);
      v12 = *(_QWORD *)(v8 + 24);
      *(_QWORD *)(v8 + 24) = ((v12 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v12 ^ ((v12 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
      if ( (v12 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiPfnShareCountIsZero(v7 - 16, 0LL);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0x7FFFFFFFFFFFFFFFuLL);
      v7 += 48LL;
      --a2;
    }
    while ( a2 );
  }
  return result;
}
