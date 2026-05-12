/*
 * XREFs of sub_140011C50 @ 0x140011C50
 * Callers:
 *     sub_14001046C @ 0x14001046C (sub_14001046C.c)
 * Callees:
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 */

int __fastcall sub_140011C50(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // r8
  volatile signed __int32 *v4; // rax
  int v5; // ett
  __int64 v6; // rcx
  unsigned __int8 v7; // di
  __int64 v8; // rsi
  unsigned __int64 v9; // r8
  int v10; // ett

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) & 1) != 0 )
  {
    v4 = *(volatile signed __int32 **)(a1 + 40);
    if ( _InterlockedExchangeAdd(&v4[16 * (unsigned __int64)a2 + 1], 0xFFFFFFFE) == 2 )
    {
      v4 = *(volatile signed __int32 **)(a1 + 32);
      if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFC) == 4 )
      {
        v6 = *(_QWORD *)(a1 + 32);
        v7 = (*(_DWORD *)(v6 + 80) >> 1) & 3;
        LODWORD(v4) = _InterlockedCompareExchange((volatile signed __int32 *)v6, 1, 0);
        if ( !(_DWORD)v4 )
        {
          v8 = *(_QWORD *)(a1 + 24);
          if ( (v7 & 1) != 0 && (unsigned __int8)sub_140021280(a1) )
          {
            PoFxIdleComponent(**(_QWORD **)(a1 + 1872), 0LL, 0LL);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
          }
          if ( v7 >= 2u && *(_QWORD *)(v8 + 4960) )
            sub_140021110(v8, 0LL, 0LL);
          v9 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
          LODWORD(v4) = *(_DWORD *)(v9 + *(_QWORD *)(a1 + 40));
          while ( ((unsigned __int8)v4 & 1) == 0 )
          {
            v10 = (int)v4;
            LODWORD(v4) = _InterlockedCompareExchange(
                            (volatile signed __int32 *)(v9 + *(_QWORD *)(a1 + 40)),
                            (_DWORD)v4 - 2,
                            (signed __int32)v4);
            if ( v10 == (_DWORD)v4 )
              return (int)v4;
          }
          LODWORD(v4) = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF);
          if ( (_DWORD)v4 == 1 )
            LODWORD(v4) = KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
        }
      }
    }
  }
  else
  {
    v3 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    LODWORD(v4) = *(_DWORD *)(v3 + *(_QWORD *)(a1 + 40) + 4);
    while ( ((unsigned __int8)v4 & 1) == 0 )
    {
      v5 = (int)v4;
      LODWORD(v4) = _InterlockedCompareExchange(
                      (volatile signed __int32 *)(v3 + *(_QWORD *)(a1 + 40) + 4),
                      (_DWORD)v4 - 2,
                      (signed __int32)v4);
      if ( v5 == (_DWORD)v4 )
        return (int)v4;
    }
    v4 = *(volatile signed __int32 **)(a1 + 32);
    _InterlockedAdd(v4, 0xFFFFFFFC);
  }
  return (int)v4;
}
