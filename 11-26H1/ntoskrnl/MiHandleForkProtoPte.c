/*
 * XREFs of MiHandleForkProtoPte @ 0x14030EB98
 * Callers:
 *     MiBuildForkPte @ 0x14030AB74 (MiBuildForkPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiGetPrototypePteDirect @ 0x1402D0DC0 (MiGetPrototypePteDirect.c)
 *     MiIncreaseUsedPtesInPfn @ 0x14030B600 (MiIncreaseUsedPtesInPfn.c)
 *     MiIsVadLargePrivate @ 0x14030B6CC (MiIsVadLargePrivate.c)
 *     MiMakePerSessionProtoPte @ 0x14030B710 (MiMakePerSessionProtoPte.c)
 *     MiWriteUselessChildPte @ 0x14030D0DC (MiWriteUselessChildPte.c)
 *     MiIsPrototypePteVadLookup @ 0x14031C350 (MiIsPrototypePteVadLookup.c)
 *     MiIncrementCombinedPte @ 0x14036A6D8 (MiIncrementCombinedPte.c)
 *     MiReferenceExistingCloneProto @ 0x14036AC14 (MiReferenceExistingCloneProto.c)
 */

__int64 __fastcall MiHandleForkProtoPte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v5; // r15
  unsigned __int64 *v6; // r14
  int IsPrototypePteVadLookup; // esi
  __int64 v8; // r8
  int PrototypePteDirect; // eax
  int v10; // r10d
  __int64 v11; // r9
  unsigned __int64 PerSessionProtoPte; // rax
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v6 = *(unsigned __int64 **)(a1 + 312);
  if ( (unsigned int)MiIsPrototypePteVadLookup(a2) || (v2 & 0x800) == 0 )
  {
    v17 = 0LL;
    IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(v2);
    if ( !IsPrototypePteVadLookup )
    {
      PrototypePteDirect = MiGetPrototypePteDirect(v2);
      if ( !(unsigned int)MiReferenceExistingCloneProto(
                            v10,
                            PrototypePteDirect,
                            *(_DWORD *)(a1 + 248),
                            (int)a1 + 256,
                            (__int64)&v17) )
        return MiWriteUselessChildPte(a1, v6);
      v8 = v17;
    }
    if ( v8 )
    {
      if ( (*(_BYTE *)(v8 + 16) & 0x1F) != 0x18 )
        v2 |= 8uLL;
    }
    else if ( !IsPrototypePteVadLookup
           && (*(_DWORD *)(*(_QWORD *)(a1 + 264) + 48LL) & 0x1C) == 8
           && !MiIsVadLargePrivate(*(_QWORD *)(a1 + 264)) )
    {
      PerSessionProtoPte = MiMakePerSessionProtoPte(v5, v3, *(_QWORD *)(a1 + 304), v11);
      if ( PerSessionProtoPte )
        v2 = PerSessionProtoPte;
    }
  }
  else
  {
    v15 = MiGetPrototypePteDirect(v2);
    if ( !(unsigned int)MiIncrementCombinedPte(v16, v15, 1LL) )
      return MiWriteUselessChildPte(a1, v6);
  }
  v13 = *(_QWORD *)(a1 + 328);
  LODWORD(v17) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v17);
    while ( *(__int64 *)(v13 + 24) < 0 );
  }
  *v6 = v2;
  MiIncreaseUsedPtesInPfn(*(_QWORD *)(a1 + 328), 1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 328) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
