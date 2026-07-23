/*
 * XREFs of MiQueryPteAddResidentAttributes @ 0x1404E2D34
 * Callers:
 *     MiQueryPteLarge @ 0x1402B3610 (MiQueryPteLarge.c)
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiGetPfnProtection @ 0x1404290C0 (MiGetPfnProtection.c)
 *     MiGetValidAweProtection @ 0x1404DCCEC (MiGetValidAweProtection.c)
 *     MiGetProtectionFromPte @ 0x140532CCC (MiGetProtectionFromPte.c)
 */

__int64 __fastcall MiQueryPteAddResidentAttributes(__int64 BugCheckParameter3, unsigned __int64 a2, __int64 a3)
{
  ULONG_PTR v5; // r15
  int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // rbp
  ULONG_PTR v9; // r14
  unsigned int v10; // eax
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // r9
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *InitialStack; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  int ValidAweProtection; // eax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned int *v30; // [rsp+58h] [rbp+10h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 32LL);
  v6 = *(_DWORD *)(v5 + 48);
  if ( a2 > qword_140E2D920 )
  {
    LODWORD(v7) = 0;
LABEL_3:
    v8 = 0LL;
    goto LABEL_4;
  }
  v7 = (*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 54) & 1LL;
  if ( ((*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    goto LABEL_3;
  v8 = 48 * a2 - 0x220000000000LL;
  if ( *(_DWORD *)(a3 + 36) == 3 && (*(_QWORD *)(v8 + 40) & 0x10000000000LL) != 0 )
    *(_DWORD *)(a3 + 36) = 2;
LABEL_4:
  v9 = a2 & ~(MiPageSizes[*(unsigned int *)(a3 + 36)] - 1);
  v10 = MiPageToNode(v9);
  v11 = ((unsigned __int64)v10 << 16) ^ (*(_QWORD *)(a3 + 8) ^ ((unsigned __int64)v10 << 16)) & 0xFFFFFFFFFFC0FFFFuLL;
  *(_QWORD *)(a3 + 8) = v11;
  if ( !(_DWORD)v7 )
  {
    result = ((BugCheckParameter3 & 0x800) != 0 ? 4 : 1) | 2u;
    if ( BugCheckParameter3 < 0 )
      result = (BugCheckParameter3 & 0x800) != 0 ? 4 : 1;
    v13 = v11 & 0xFFFFFFFFFFBF800FuLL | 0x400000;
    v14 = (16 * (unsigned __int16)MmProtectToValue[result]) & 0x7FF0;
    goto LABEL_8;
  }
  v15 = 48 * v9 - 0x220000000000LL;
  v16 = 0x2AAAAAAAAAAAAAABLL;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFF7FFFuLL | HIWORD(*(_QWORD *)(v15 + 40)) & 0x8000LL;
  v17 = *(_DWORD *)(v15 + 32);
  if ( (*(_QWORD *)(v15 + 40) & 0x20000000000000LL) != 0
    || (*(_DWORD *)(v15 + 32) & 0x8000000) != 0
    && (v15 < 0xFFFFDE0000000000uLL
     || v15 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
     || MiIsDecayPfn((__int64)(48 * v9) / 48)
     || (v17 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(48 * v9 - 0x220000000000LL) == 9) )
  {
    v18 = 5;
  }
  else
  {
    v18 = HIBYTE(v17);
  }
  v19 = (unsigned __int64)v18 << 24;
  *(_QWORD *)(a3 + 8) = v19 ^ (*(_QWORD *)(a3 + 8) ^ v19) & 0xFFFFFFFFF8FFFFFFuLL;
  if ( (*(_DWORD *)(v8 + 32) & 0x40000000) != 0 || MiIsPageOnBadList(v8) )
    *(_QWORD *)(a3 + 8) |= 0x80000000uLL;
  if ( (*(_DWORD *)(a3 + 8) & 0x800000) != 0
    || (*(_QWORD *)(v8 + 40) & 0x10000000000LL) != 0
    || ((*(_QWORD *)(v8 + 40) >> 60) & 7) == 1 && *(__int64 *)(v8 + 40) < 0 )
  {
    v21 = 16LL * (unsigned int)MmProtectToValue[(unsigned int)MiGetProtectionFromPte(v5, BugCheckParameter3)];
    *(_QWORD *)(a3 + 8) = v21 ^ (*(_QWORD *)(a3 + 8) ^ v21) & 0xFFFFFFFFFFFF800FuLL | 0x400000;
    result = *(_QWORD *)(v15 + 40);
    if ( result >= 0 )
      return result;
    if ( (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 7 )
      v22 = 7LL;
    else
      v22 = *(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    result = 2 * v22;
    v29 = result ^ (*(_QWORD *)(a3 + 8) ^ result) & 0xFFFFFFFFFFFFFFF1uLL;
    goto LABEL_60;
  }
  if ( ((*(_QWORD *)(v8 + 40) >> 60) & 7) != 1 )
  {
    if ( (MiGetWsleContents(v19, *(_QWORD *)(a3 + 16)) & 0xF) == 8 )
      *(_QWORD *)(a3 + 8) |= 0x400000uLL;
    if ( *(__int64 *)(v8 + 40) >= 0 )
    {
      v20 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF1uLL;
      *(_QWORD *)(a3 + 8) = v20;
      result = (*(_DWORD *)(v8 + 16) >> 5) & 0x1F;
      v14 = 16LL * (unsigned int)MmProtectToValue[result];
      v13 = (v14 ^ v20) & 0xFFFFFFFFFFFF800FuLL;
LABEL_8:
      *(_QWORD *)(a3 + 8) = v14 ^ v13;
      return result;
    }
    if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 7 )
      v23 = 7LL;
    else
      v23 = *(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v28 = (2 * v23) ^ (*(_QWORD *)(a3 + 8) ^ (2 * v23)) & 0xFFFFFFFFFFFFFFF1uLL;
    *(_QWORD *)(a3 + 8) = v28;
    result = 16LL * (unsigned int)MmProtectToValue[(unsigned int)MiGetPfnProtection(v28, *(_QWORD *)(a3 + 16), v8)];
    v29 = result ^ (*(_QWORD *)(a3 + 8) ^ result) & 0xFFFFFFFFFFFF800FuLL;
    *(_QWORD *)(a3 + 8) = v29;
    if ( !*(_BYTE *)(a3 + 32) )
    {
      if ( (v6 & 0x80000) == 0 )
      {
        result = MiGetProtoPteAddress(v5, *(_QWORD *)(a3 + 16) >> 12, 8u, &v30);
        if ( result == (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) )
          *(_QWORD *)(a3 + 8) |= 0x40000000uLL;
      }
      return result;
    }
LABEL_60:
    *(_QWORD *)(a3 + 8) = v29 | 0x40000000;
    return result;
  }
  if ( !stru_140E366D8.InitialStack )
    goto LABEL_51;
  if ( ((*(_QWORD *)(v8 + 40) >> 60) & 7) != 1 )
    goto LABEL_51;
  InitialStack = stru_140E366D8.InitialStack;
  v25 = ((unsigned __int64)((unsigned __int128)((v8 + 0x220000000000LL) * (__int128)v16) >> 64) >> 63)
      + ((__int64)((unsigned __int128)((v8 + 0x220000000000LL) * (__int128)v16) >> 64) >> 3);
  if ( !stru_140E366D8.InitialStack )
    goto LABEL_51;
  do
  {
    v26 = InitialStack[3];
    if ( v25 < v26 )
    {
      InitialStack = (_QWORD *)*InitialStack;
    }
    else
    {
      if ( v25 - v26 < InitialStack[4] )
        break;
      InitialStack = (_QWORD *)InitialStack[1];
    }
  }
  while ( InitialStack );
  if ( InitialStack )
    ValidAweProtection = (*(_DWORD *)(v8 + 16) >> 5) & 0x1F;
  else
LABEL_51:
    ValidAweProtection = MiGetValidAweProtection(v5, BugCheckParameter3);
  result = (16LL * (unsigned int)MmProtectToValue[ValidAweProtection]) ^ (*(_QWORD *)(a3 + 8) ^ (16LL
                                                                                               * (unsigned int)MmProtectToValue[ValidAweProtection])) & 0xFFFFFFFFFFFF800FuLL | 0x400000;
  *(_QWORD *)(a3 + 8) = result;
  return result;
}
