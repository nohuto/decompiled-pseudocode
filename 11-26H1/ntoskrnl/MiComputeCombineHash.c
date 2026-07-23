/*
 * XREFs of MiComputeCombineHash @ 0x1402D5A70
 * Callers:
 *     MiCombinePte @ 0x140709100 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x140880C48 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MiUserPdeOrAbove @ 0x1402A0990 (MiUserPdeOrAbove.c)
 *     MiCombineCandidate @ 0x1402D6000 (MiCombineCandidate.c)
 *     MiPerformCombineScan @ 0x1402D63C0 (MiPerformCombineScan.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiComputeCombineHash(__int64 *a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // kr00_8
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v15; // ebp
  __int64 v16; // r8
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r14
  int v25; // r12d
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  __int64 v30; // rbx
  unsigned __int8 v31; // di
  unsigned int v32; // esi
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // [rsp+60h] [rbp+8h]
  unsigned int v37; // [rsp+70h] [rbp+18h]

  v3 = a1 + 2;
  v35 = *a1;
  v6 = (((unsigned __int64)MiGetUltraMapping((__int64)(a1 + 32), 3uLL, 1LL, a3 != 0 ? 4 : 0) >> 9) & 0x7FFFFFFFF8LL)
     - 0x98000000000LL;
  v37 = *((_DWORD *)a1 + 35);
  v7 = 0xFFFFDE0000000000uLL;
  v8 = 48LL * a2[2];
  v9 = v8 - 0x220000000000LL;
  v3[9] = v6;
  v3[8] = v8 - 0x220000000000LL;
  v10 = (unsigned __int128)(v8 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v11 = v8;
  v12 = v8 / 48;
  if ( v8 / 48 > (unsigned __int64)qword_140E2D920 && (v12 < qword_140E34930 || v12 >= qword_140E34930 + 2048) )
    return 0LL;
  v13 = 48 * v12 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (*(_QWORD *)(v13 + 40) & 0x40000000000000LL) == 0 && !(unsigned int)MiIsDecayPfn(v11 / 48) )
  {
    if ( !KiIrqlFlags )
      goto LABEL_15;
    goto LABEL_14;
  }
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v15 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8, v10, v7) )
      {
        HvlNotifyLongSpinWait(v15);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v13 + 24) < 0 );
  }
  if ( CurrentIrql == 17 )
    return 0LL;
  if ( !(unsigned int)MiCombineCandidate(v35, v37, v9) || (*(_DWORD *)(v9 + 32) & 0xC00000) == 0xC00000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql >= 2u )
      return 0LL;
    if ( !KiIrqlFlags )
    {
LABEL_15:
      __writecr8(CurrentIrql);
      return 0LL;
    }
LABEL_14:
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(v9 + 32) & 0xC00000) != 0 )
  {
    v18 = 1LL;
    if ( (*(_DWORD *)(v9 + 32) & 0xC00000) == 0x800000 )
      v18 = 25LL;
  }
  else
  {
    v18 = 9LL;
  }
  v19 = ((v12 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v18] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v20 = v19;
  }
  else
  {
    if ( v6 >= 0xFFFFF6FB40000000uLL && v6 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v33 = v19;
      v19 |= 0x8000000000000000uLL;
      v34 = v33 & 0x7FFFFFFFFFFFFFFFLL;
      if ( v6 != 0xFFFFF6FB7DBEDF68uLL )
        v19 = v34;
      if ( (unsigned int)MiUserPdeOrAbove(v6) )
        v19 |= 4uLL;
    }
    v20 = v19 | 4;
    if ( (unsigned __int64)((__int64)(v6 << 25) >> 16) >= 0x7FFFFFFF0000LL )
      v20 = v19;
  }
  v21 = (unsigned __int64)BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8;
  v3[7] = v6;
  v3[6] = v9;
  *(_QWORD *)v6 = v21 & 0xFAFFFFFFFFFFFFFFuLL ^ (v21 ^ v20) & 0xFAFFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  v22 = a1[13];
  if ( (*(_BYTE *)(v9 + 34) & 7) == 6 )
    ++*(_QWORD *)(v22 + 16);
  else
    ++*(_QWORD *)(v22 + 24);
  v23 = MiPerformCombineScan(v22, v3, v16, a2);
  v24 = v3[6];
  v25 = v23;
  v26 = 0xFFFFDE0000000000uLL;
  v27 = v24 + 0x220000000000LL;
  v28 = (unsigned __int128)((v24 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v29 = (v24 + 0x220000000000LL) / 48;
  if ( v29 > qword_140E2D920 && (v29 < qword_140E34930 || v29 >= qword_140E34930 + 2048) )
  {
    v31 = 17;
  }
  else
  {
    v30 = 48 * v29 - 0x220000000000LL;
    v31 = KeGetCurrentIrql();
    if ( v31 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v28) = 2;
      KiRaiseIrqlProcessIrqlFlags(v31, v28);
    }
    if ( (*(_QWORD *)(v30 + 40) & 0x40000000000000LL) != 0 || (unsigned int)MiIsDecayPfn(v29) )
    {
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v32 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v27, v28, v26) )
          {
            HvlNotifyLongSpinWait(v32);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v30 + 24) < 0 );
      }
    }
    else
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v31);
      __writecr8(v31);
      v31 = 17;
    }
  }
  v3[6] = 0LL;
  *(_QWORD *)v3[7] = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v3[7] = 0LL;
  if ( v31 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v31 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v31);
      __writecr8(v31);
    }
  }
  if ( !v25 )
    return 0LL;
  *a2 = 0LL;
  return 1LL;
}
