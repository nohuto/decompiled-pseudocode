/*
 * XREFs of MiReturnPagedPoolLockCharge @ 0x14042F7F4
 * Callers:
 *     MiDecommitHandleValidPte @ 0x14029EDAC (MiDecommitHandleValidPte.c)
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 *     MiDecommitHandleTransitionPte @ 0x14033FE54 (MiDecommitHandleTransitionPte.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiIsPfnSystemCharged @ 0x14042F8E0 (MiIsPfnSystemCharged.c)
 */

__int16 __fastcall MiReturnPagedPoolLockCharge(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2 & 1;
  if ( (a2 & 1) == 0 && qword_140E2D8C0 && (a2 & 0x10) == 0 )
    a2 &= qword_140E2D8C8;
  v6 = (a2 >> 12) & 0xFFFFFFFFFFLL;
  v7 = 48 * v6 - 0x220000000000LL;
  LODWORD(v8) = MiIsPfnSystemCharged(v7, v6, a3, a4);
  if ( (_DWORD)v8 )
  {
    if ( v5 )
    {
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v10);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
    }
    *(_BYTE *)(v7 + 35) &= ~0x20u;
    if ( v5 )
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOWORD(v8) = (*(_QWORD *)(v7 + 40) >> 43) & 0x3FF;
    if ( (_WORD)v8 == **(_WORD **)(a1 + 8) )
    {
      v8 = *(_QWORD *)(a1 + 24);
      ++*(_QWORD *)(v8 + 8);
    }
  }
  return v8;
}
