/*
 * XREFs of MiTradePageMarkedFreeZero @ 0x14028D864
 * Callers:
 *     MiTradePage @ 0x140290ED0 (MiTradePage.c)
 * Callees:
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDemoteLargeFreePage @ 0x14042B4F0 (MiDemoteLargeFreePage.c)
 *     MiLargeFreePageToMdl @ 0x1404C8C88 (MiLargeFreePageToMdl.c)
 */

__int64 __fastcall MiTradePageMarkedFreeZero(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edi
  __int64 v5; // rdx
  ULONG_PTR v7; // r14
  int v8; // edi
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  int v11; // [rsp+20h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = *(_DWORD *)(a2 + 24);
  v5 = *(unsigned int *)(a1 + 20);
  v7 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 56) = 1;
  if ( (_DWORD)v5 == 3 )
  {
    v8 = v3 & 0x400000;
    if ( !v8 )
    {
      result = MiUnlinkFreeOrZeroedPage(v7, 0LL, 0x100u);
      if ( !(_DWORD)result )
      {
        _InterlockedIncrement(&dword_140EF911C);
        *(_DWORD *)(a1 + 56) = 1;
        return result;
      }
    }
    goto LABEL_4;
  }
  v10 = MiPageSizes[v5];
  if ( ((v3 & 0x2000000) == 0 || v10 < 0x200) && ((v3 & 0x1000000) == 0 || v10 != 16) )
  {
    if ( (v7 & ~(v10 - 1)) == v7
      && (v3 & 0x400000) == 0
      && *(_QWORD *)(a2 + 16) >= v10
      && v10 + v7 - 1 <= *(_QWORD *)(a2 + 48)
      && (*(_QWORD *)(48 * v7 - 0x21FFFFFFFFD8LL) & 0x20000000000LL) == 0 )
    {
      LOBYTE(v11) = *(_BYTE *)(a1 + 8);
      result = MiLargeFreePageToMdl(v7, v11);
      *(_BYTE *)(a1 + 8) = 17;
      _InterlockedAdd(&dword_140EF90D0, v10);
      *(_QWORD *)(a1 + 48) = v10;
LABEL_7:
      *(_DWORD *)(a1 + 56) = 0;
      return result;
    }
    LOBYTE(v5) = *(_BYTE *)(a1 + 8);
    result = MiDemoteLargeFreePage(v7, v5, 0LL);
    if ( !(_DWORD)result )
    {
      *(_DWORD *)(a1 + 56) = 2;
      return result;
    }
    *(_BYTE *)(a1 + 8) = 17;
    v8 = v3 & 0x400000;
LABEL_4:
    *(_QWORD *)(a1 + 48) = 1LL;
    _InterlockedIncrement(&dword_140EF90D0);
    if ( !v8 )
    {
      v9 = *(_QWORD *)(a2 + 56);
      if ( v9 )
      {
        result = (unsigned __int64)*(unsigned int *)(v9 + 40) >> 12;
        *(_QWORD *)(v9 + 8 * result + 48) = v7;
        *(_DWORD *)(v9 + 40) += 4096;
      }
    }
    goto LABEL_7;
  }
  return result;
}
