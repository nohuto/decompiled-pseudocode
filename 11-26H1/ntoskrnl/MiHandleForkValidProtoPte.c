/*
 * XREFs of MiHandleForkValidProtoPte @ 0x1402ED390
 * Callers:
 *     MiBuildForkPte @ 0x1402ECBF4 (MiBuildForkPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiMakePrototypePteVadLookup @ 0x1402B1B50 (MiMakePrototypePteVadLookup.c)
 *     MiMakePrototypePteDirect @ 0x1402B4570 (MiMakePrototypePteDirect.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402ED680 (MiIncreaseUsedPtesInPfn.c)
 *     MiIsVadLargePrivate @ 0x1402ED74C (MiIsVadLargePrivate.c)
 *     MiMakePerSessionProtoPte @ 0x1402ED790 (MiMakePerSessionProtoPte.c)
 *     MiWriteUselessChildPte @ 0x1402EF15C (MiWriteUselessChildPte.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiIncrementCombinedPte @ 0x14036C478 (MiIncrementCombinedPte.c)
 *     MiReferenceExistingCloneProto @ 0x14036C9B4 (MiReferenceExistingCloneProto.c)
 *     MiGetWsleProtection @ 0x14036DF30 (MiGetWsleProtection.c)
 */

__int64 __fastcall MiHandleForkValidProtoPte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rbp
  __int64 v5; // r14
  char WsleContents; // al
  unsigned __int64 v7; // rsi
  unsigned __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r10
  int WsleProtection; // eax
  unsigned __int64 PrototypePteDirect; // rax
  unsigned __int64 PrototypePteVadLookup; // rbx
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 result; // rax
  __int64 v18; // r11
  __int64 PerSessionProtoPte; // rax
  __int64 v20; // rsi
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF
  __int64 v22; // [rsp+88h] [rbp+10h]
  __int64 v23; // [rsp+90h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 264);
  v21 = 0LL;
  v23 = *(_QWORD *)a1;
  v5 = 6 * ((a2 >> 12) & 0xFFFFFFFFFFLL);
  v22 = *(_QWORD *)(a1 + 304);
  WsleContents = MiGetWsleContents(a1, v22 << 25 >> 16);
  v7 = *(_QWORD *)(8 * v5 - 0x220000000000LL + 8) | 0x8000000000000000uLL;
  v8 = *(unsigned __int64 **)(a1 + 312);
  LOBYTE(v9) = WsleContents;
  WsleProtection = MiGetWsleProtection(v10, v9);
  if ( !WsleProtection )
  {
    PrototypePteDirect = MiMakePrototypePteDirect(v7);
    PrototypePteVadLookup = PrototypePteDirect;
    if ( v14 )
    {
      PrototypePteVadLookup = PrototypePteDirect | 0x800;
      goto LABEL_4;
    }
LABEL_7:
    if ( !(unsigned int)MiReferenceExistingCloneProto(
                          (int)v2 + 1024,
                          v7,
                          *(_DWORD *)(a1 + 248),
                          (int)a1 + 256,
                          (__int64)&v21) )
      return MiWriteUselessChildPte(a1, v8);
    if ( v21 )
    {
      PrototypePteVadLookup |= 8uLL;
    }
    else if ( !(unsigned int)MiIsPrototypePteVadLookup(*(_QWORD *)(8 * v5 - 0x220000000000LL + 16))
           && (*(_DWORD *)(v4 + 48) & 0x1C) == 8
           && !(unsigned int)MiIsVadLargePrivate(v4) )
    {
      PerSessionProtoPte = MiMakePerSessionProtoPte(v23, v2, v22, v4);
      if ( PerSessionProtoPte )
        PrototypePteVadLookup = PerSessionProtoPte;
    }
    goto LABEL_14;
  }
  PrototypePteVadLookup = MiMakePrototypePteVadLookup(WsleProtection);
  if ( !v18 )
    goto LABEL_7;
LABEL_4:
  if ( !(unsigned int)MiIncrementCombinedPte(v2 + 1024, v7, 1LL) )
    return MiWriteUselessChildPte(a1, v8);
LABEL_14:
  LODWORD(v21) = 0;
  v20 = *(_QWORD *)(a1 + 328);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v21);
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  *v8 = PrototypePteVadLookup;
  MiIncreaseUsedPtesInPfn(*(_QWORD *)(a1 + 328), 1LL, v15, v16);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 328) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
