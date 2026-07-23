/*
 * XREFs of MiUpdateBootHpatPagesInUse @ 0x140D01B84
 * Callers:
 *     MiHandleBootImage @ 0x140D0637C (MiHandleBootImage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x1402EB3D0 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiMarkPfnVerified @ 0x14038E794 (MiMarkPfnVerified.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiFindLoaderAppliedHotPatchEntry @ 0x140D019F8 (MiFindLoaderAppliedHotPatchEntry.c)
 */

unsigned __int64 __fastcall MiUpdateBootHpatPagesInUse(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *LoaderAppliedHotPatchEntry; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int8 v9; // cf
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  _QWORD *v15; // r12
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v17; // r13
  __int64 v18; // rdi
  unsigned int v19; // r8d
  int IsPfnFromChargedSlabAllocation; // eax
  PVOID v21; // rcx
  int v22; // [rsp+68h] [rbp+20h] BYREF

  if ( !HIDWORD(stru_140E366D8.SListFaultAddress) )
    return 0LL;
  LoaderAppliedHotPatchEntry = MiFindLoaderAppliedHotPatchEntry(a1, a3);
  if ( !LoaderAppliedHotPatchEntry )
    return 0LL;
  v9 = _bittest16((const signed __int16 *)(v7 + 110), 9u);
  v10 = 0LL;
  if ( v9 )
    v11 = *((unsigned int *)LoaderAppliedHotPatchEntry + 13);
  else
    v11 = *((unsigned int *)LoaderAppliedHotPatchEntry + 12);
  v12 = 8 * v11;
  LOBYTE(v10) = (v12 & 0xFFF) != 0;
  v13 = (v12 >> 12) + v10;
  v8 = 2 * v13;
  if ( 2 * v13 )
  {
    v14 = 0LL;
    v15 = &a2[2 * v13];
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    while ( a2 < v15 )
    {
      v17 = v14;
      v18 = 48 * ((*a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v22);
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
      if ( ((*(_QWORD *)(v18 + 40) >> 60) & 7) != 3 )
        MiMarkPfnVerified(v18, 4);
      if ( (unsigned int)MiGetPfnSlabType(v18) == 9 )
      {
        _InterlockedIncrement64(&qword_140E3DA00);
      }
      else
      {
        IsPfnFromChargedSlabAllocation = MiIsPfnFromChargedSlabAllocation(v18);
        ++v14;
        v19 = IsPfnFromChargedSlabAllocation != 0 ? 7 : 3;
        if ( IsPfnFromChargedSlabAllocation )
          v14 = v17;
      }
      *(_DWORD *)(v18 + 32) = *(_DWORD *)(v18 + 32) & 0xFFFF0000 | 3;
      *(_QWORD *)(v18 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v18 + 16), v19);
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++a2;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v14 )
    {
      MiAcquireNonPagedResources(&MiSystemPartition, v14, 0LL, 0LL);
      qword_140E3DA28 += v14;
    }
    _InterlockedAdd64(&qword_140E2D928, v8);
    v21 = *(PVOID *)(a1 + 48);
    if ( v21 == PsNtosImageBase || v21 == PsHalImageBase )
      _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.320, v14 - v8);
    else
      _InterlockedExchangeAdd((volatile signed __int32 *)&stru_140E366D8.WaitBlockFill11[16], v14 - v8);
  }
  return v8;
}
