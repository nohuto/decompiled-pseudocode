/*
 * XREFs of MiComputeCombineHash @ 0x1402F39F0
 * Callers:
 *     MiCombinePte @ 0x140704430 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x14087A848 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetUltraMapping @ 0x1402881D0 (MiGetUltraMapping.c)
 *     MiUserPdeOrAbove @ 0x1402A1440 (MiUserPdeOrAbove.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCombineCandidate @ 0x1402F3F80 (MiCombineCandidate.c)
 *     MiPerformCombineScan @ 0x1402F4340 (MiPerformCombineScan.c)
 *     MiIsDecayPfn @ 0x1402F9850 (MiIsDecayPfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiComputeCombineHash(__int64 *a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r15
  unsigned __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // kr00_8
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v13; // ebp
  __int64 v14; // r8
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r14
  int v23; // r12d
  __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  __int64 v26; // rbx
  unsigned __int8 v27; // di
  unsigned int v28; // esi
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+60h] [rbp+8h]
  unsigned int v33; // [rsp+70h] [rbp+18h]

  v3 = a1 + 2;
  v31 = *a1;
  v6 = (((unsigned __int64)MiGetUltraMapping((__int64)(a1 + 32), 3uLL, 1LL, a3 != 0 ? 4 : 0) >> 9) & 0x7FFFFFFFF8LL)
     - 0x98000000000LL;
  v33 = *((_DWORD *)a1 + 35);
  v7 = 48LL * a2[2];
  v8 = v7 - 0x220000000000LL;
  v3[9] = v6;
  v3[8] = v7 - 0x220000000000LL;
  v9 = v7;
  v10 = v7 / 48;
  if ( v7 / 48 > (unsigned __int64)qword_140E2D7A0 && (v10 < qword_140E347B0 || v10 >= qword_140E347B0 + 2048) )
    return 0LL;
  v11 = 48 * v10 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (*(_QWORD *)(v11 + 40) & 0x40000000000000LL) == 0 && !(unsigned int)MiIsDecayPfn(v9 / 48) )
  {
    if ( !KiIrqlFlags )
      goto LABEL_15;
    goto LABEL_14;
  }
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v13 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v13);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v11 + 24) < 0 );
  }
  if ( CurrentIrql == 17 )
    return 0LL;
  if ( !(unsigned int)MiCombineCandidate(v31, v33, v8) || (*(_DWORD *)(v8 + 32) & 0xC00000) == 0xC00000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
  if ( (*(_DWORD *)(v8 + 32) & 0xC00000) != 0 )
  {
    v16 = 1LL;
    if ( (*(_DWORD *)(v8 + 32) & 0xC00000) == 0x800000 )
      v16 = 25LL;
  }
  else
  {
    v16 = 9LL;
  }
  v17 = ((v10 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v16] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v18 = v17;
  }
  else
  {
    if ( v6 >= 0xFFFFF6FB40000000uLL && v6 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v29 = v17;
      v17 |= 0x8000000000000000uLL;
      v30 = v29 & 0x7FFFFFFFFFFFFFFFLL;
      if ( v6 != 0xFFFFF6FB7DBEDF68uLL )
        v17 = v30;
      if ( (unsigned int)MiUserPdeOrAbove(v6) )
        v17 |= 4uLL;
    }
    v18 = v17 | 4;
    if ( (unsigned __int64)((__int64)(v6 << 25) >> 16) >= 0x7FFFFFFF0000LL )
      v18 = v17;
  }
  v19 = (unsigned __int64)BYTE4(stru_140E2D930.Header.WaitListHead.Blink) << 8;
  v3[7] = v6;
  v3[6] = v8;
  *(_QWORD *)v6 = v19 & 0xFAFFFFFFFFFFFFFFuLL ^ (v19 ^ v18) & 0xFAFFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  v20 = a1[13];
  if ( (*(_BYTE *)(v8 + 34) & 7) == 6 )
    ++*(_QWORD *)(v20 + 16);
  else
    ++*(_QWORD *)(v20 + 24);
  v21 = MiPerformCombineScan(v20, v3, v14, a2);
  v22 = v3[6];
  v23 = v21;
  v24 = (unsigned __int128)((v22 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v25 = (v22 + 0x220000000000LL) / 48;
  if ( v25 > qword_140E2D7A0 && (v25 < qword_140E347B0 || v25 >= qword_140E347B0 + 2048) )
  {
    v27 = 17;
  }
  else
  {
    v26 = 48 * v25 - 0x220000000000LL;
    v27 = KeGetCurrentIrql();
    if ( v27 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v24) = 2;
      KiRaiseIrqlProcessIrqlFlags(v27, v24);
    }
    if ( (*(_QWORD *)(v26 + 40) & 0x40000000000000LL) != 0 || (unsigned int)MiIsDecayPfn(v25) )
    {
      v28 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v28 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v28);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v26 + 24) < 0 );
      }
    }
    else
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
      __writecr8(v27);
      v27 = 17;
    }
  }
  v3[6] = 0LL;
  *(_QWORD *)v3[7] = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v3[7] = 0LL;
  if ( v27 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v27 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
      __writecr8(v27);
    }
  }
  if ( !v23 )
    return 0LL;
  *a2 = 0LL;
  return 1LL;
}
