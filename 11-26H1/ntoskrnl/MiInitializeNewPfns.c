/*
 * XREFs of MiInitializeNewPfns @ 0x1406EB1F8
 * Callers:
 *     MiInitializeDynamicPfnsWorker @ 0x1406EE0B0 (MiInitializeDynamicPfnsWorker.c)
 *     MxCreateDescriptorPfns @ 0x140CFBB94 (MxCreateDescriptorPfns.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiReferenceControlAreaPfn @ 0x14036E930 (MiReferenceControlAreaPfn.c)
 *     MiCreateInitialLargeLeafPfns @ 0x1404645B0 (MiCreateInitialLargeLeafPfns.c)
 *     MiDetermineNewPfnHeatState @ 0x1404911B4 (MiDetermineNewPfnHeatState.c)
 *     MiMakeSubsectionPte @ 0x1404AF348 (MiMakeSubsectionPte.c)
 *     MiLookupFixupExtentByPte @ 0x1404C5484 (MiLookupFixupExtentByPte.c)
 *     MiCreateInitialPfns @ 0x1406EBD50 (MiCreateInitialPfns.c)
 */

unsigned __int64 __fastcall MiInitializeNewPfns(
        __m128i *a1,
        unsigned __int64 a2,
        const __m128i *a3,
        __int64 a4,
        unsigned int a5,
        __int64 **a6,
        unsigned __int64 *BugCheckParameter4)
{
  unsigned __int64 v8; // rdi
  __m128i *v9; // rbp
  unsigned int v10; // edx
  __int64 v11; // r14
  unsigned __int64 result; // rax
  __int64 **v13; // rsi
  __int64 *v14; // rcx
  __int64 SubsectionPte; // rbx
  int v16; // r12d
  __int64 v17; // rdx
  _KPROCESS *v18; // rax
  __int64 v19; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v21; // rax
  unsigned __int64 *v22; // r15
  int v23; // ebx
  unsigned __int64 ContainingPageTable; // rax
  __int64 v25; // rsi
  unsigned __int64 ValidPte; // rax
  __int64 v27; // r12
  unsigned __int64 v28; // rbx
  __m128i *v29; // r14
  __int64 **v30; // rsi
  __m128i *v31; // rax
  __int64 v32; // rdi
  __m128i **v33; // rdx
  unsigned __int64 v34; // [rsp+30h] [rbp-88h] BYREF
  __m128i **v35; // [rsp+38h] [rbp-80h]
  __int64 v36; // [rsp+40h] [rbp-78h]
  __m128i v37; // [rsp+48h] [rbp-70h] BYREF
  __m128i v38; // [rsp+58h] [rbp-60h] BYREF
  __m128i v39[5]; // [rsp+68h] [rbp-50h] BYREF
  __m128i *v40; // [rsp+C0h] [rbp+8h]

  v8 = a2;
  v9 = a1;
  v10 = a5;
  v11 = (__int64)a1[0x22000000000LL].m128i_i64 / 48;
  if ( (a5 & 0x1800) != 0 )
    return MiCreateInitialLargeLeafPfns(
             (__int64)a1[0x22000000000LL].m128i_i64 / 48,
             v8,
             (a5 >> 11) & 1,
             1,
             *(_WORD *)a4,
             0);
  if ( (a5 & 0x800040) != 0 && (a5 & 1) == 0 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(a4 + 23488), v8);
    if ( (v10 & 0x80u) == 0 )
    {
      if ( (v10 & 0x800000) != 0 )
        _InterlockedAdd64(&qword_140E2D930, v8);
    }
    else
    {
      _InterlockedAdd64(&qword_140E2D928, v8);
    }
  }
  if ( (v10 & 2) == 0 )
    return MiCreateInitialPfns(a1, v8);
  v13 = a6;
  v14 = *a6;
  v35 = (__m128i **)**a6;
  SubsectionPte = MiMakeSubsectionPte((__int64)v14);
  v16 = a3[2].m128i_i8[2] & 7;
  v34 = SubsectionPte;
  if ( v16 == 2 && (unsigned int)MiDetermineNewPfnHeatState(0, 1u, 0LL) )
  {
    v17 = v34;
    if ( (unsigned __int64)&v34 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v34 <= 0xFFFFF6FB7DBED7F8uLL
      && (v34 & 1) != 0
      && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
    {
      v18 = MiPteHasShadow();
      if ( v18 )
      {
        KernelWaitTime = v18[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v21 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v34 >> 3) & 0x1FF));
          if ( (v21 & 0x20) != 0 )
            v19 |= 0x20uLL;
          v17 = v19 | 0x42;
          if ( (v21 & 0x42) == 0 )
            v17 = v19;
        }
      }
    }
    v34 = v17 | ((-(__int64)((v17 & 0x400) != 0) & 0xFFFFFFFFFFFF0004uLL) + 0x10000);
    SubsectionPte = v34;
  }
  v22 = BugCheckParameter4;
  a3[1].m128i_i64[0] = SubsectionPte;
  a3[2].m128i_i64[1] |= 0x8000000000000000uLL;
  v23 = (*((_DWORD *)*v13 + 8) >> 1) & 0x1F;
  ContainingPageTable = MiGetContainingPageTable((ULONG_PTR)v22);
  v25 = 48 * ContainingPageTable - 0x220000000000LL;
  v36 = v25;
  MiSetPfnContainingFrame((__int64)a3, ContainingPageTable);
  if ( v16 == 6 )
    ValidPte = MiMakeValidPte((unsigned __int64)v22, v11, v23);
  else
    ValidPte = MiMakeTransitionPte(v11, v23);
  v27 = 0LL;
  v28 = ValidPte;
  v29 = &v9[3 * v8];
  if ( v9 != v29 )
  {
    v30 = a6;
    v31 = v9 + 2;
    v32 = (__int64)v35;
    v40 = v9 + 2;
    do
    {
      a3->m128i_i64[1] = (__int64)v22;
      *v9 = _mm_loadu_si128(a3);
      v31[-1] = _mm_loadu_si128(a3 + 1);
      v9[2] = _mm_loadu_si128(a3 + 2);
      if ( !v30[3] )
        goto LABEL_33;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v32 + 72));
      v35 = (__m128i **)MiLookupFixupExtentByPte(v32, v22);
      v33 = v35;
      if ( v35 )
      {
        v37 = _mm_loadu_si128(a3);
        v38 = _mm_loadu_si128(a3 + 1);
        v39[0] = _mm_loadu_si128(a3 + 2);
        v39[0].m128i_i32[0] = v39[0].m128i_i32[0] & 0xFFF80000 | 0x70001;
        ++v27;
        *v9 = _mm_loadu_si128(&v37);
        v9[1] = _mm_loadu_si128(&v38);
        v9[2] = _mm_loadu_si128(v39);
        *v33 = v9;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v32 + 72));
      if ( !v35 )
      {
LABEL_33:
        *v22 = v28;
        v28 = (v28 + 4096) ^ (v28 ^ (v28 + 4096)) & 0xFFF0000000000FFFuLL;
      }
      ++v22;
      v31 = v40 + 3;
      v9 += 3;
      v40 += 3;
    }
    while ( v9 != v29 );
    v8 = a2;
    v25 = v36;
  }
  result = (unsigned __int64)a6[3];
  if ( v27 != v8 )
  {
    if ( result )
      MiReferenceControlAreaPfn(**a6, (__int64)*a6, v8 - v27);
    a5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&a5);
      while ( *(__int64 *)(v25 + 24) < 0 );
    }
    result = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v25 + 24) = (v8 + *(_QWORD *)(v25 + 24) - v27) ^ (*(_QWORD *)(v25 + 24) ^ (v8
                                                                                         + *(_QWORD *)(v25 + 24)
                                                                                         - v27)) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
