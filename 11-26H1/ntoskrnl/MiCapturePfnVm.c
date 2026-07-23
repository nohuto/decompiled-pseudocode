/*
 * XREFs of MiCapturePfnVm @ 0x14050D140
 * Callers:
 *     MiProcessCrcList @ 0x140A67C40 (MiProcessCrcList.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiCombineCandidate @ 0x1402D6000 (MiCombineCandidate.c)
 *     MiProcessSuitableForCombining @ 0x1403FD3DC (MiProcessSuitableForCombining.c)
 *     MiGetTopLevelPfn @ 0x1403FD790 (MiGetTopLevelPfn.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1403FD950 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiCheckProcessCombineSequence @ 0x1404919D0 (MiCheckProcessCombineSequence.c)
 *     MiGetCombineDomain @ 0x14049C990 (MiGetCombineDomain.c)
 *     VmCheckPageCombine @ 0x140AF3FF4 (VmCheckPageCombine.c)
 */

__int64 __fastcall MiCapturePfnVm(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r10
  _QWORD *v8; // r15
  char v9; // bl
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // ebp
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rsi
  int v15; // r12d
  int v17; // ecx
  PEPROCESS PageTablePfnBuddyRaw; // r13
  int v19; // eax
  __int64 v20; // rcx
  __int64 AnyMultiplexedVm; // rbx
  __int64 TopLevelPfn; // [rsp+70h] [rbp+28h]

  v6 = *(_QWORD *)(a1 + 120);
  v8 = *(_QWORD **)a1;
  v9 = a3;
  v10 = *(_DWORD *)(a1 + 136);
  v11 = 0LL;
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_DWORD *)(a5 + 16) = 24;
  while ( (unsigned int)v11 < v10 )
  {
    if ( a4 == *(_QWORD *)(v6 + 8 * v11) )
    {
      v12 = 1;
      *(_QWORD *)(a5 + 24) = qword_140E2EBD0;
      goto LABEL_7;
    }
    v11 = (unsigned int)(v11 + 1);
  }
  v12 = 0;
LABEL_7:
  v13 = MiSafeLockPage(
          (__int64)a2[0x22000000000LL].m128i_i64 / 48,
          (__int64)((unsigned __int128)((__int64)a2[0x22000000000LL].m128i_i64 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3,
          a3);
  v14 = v13;
  if ( v13 == 17 )
    return 0LL;
  v15 = MiCombineCandidate(v8, v9, a2);
  if ( !v15 )
  {
    _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v14 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
      __writecr8(v14);
    }
    return 0LL;
  }
  v17 = ((unsigned __int32)a2[1].m128i_i32[0] >> 5) & 0x1F;
  *(_QWORD *)(a5 + 8) = a2->m128i_i64[1] | 0x8000000000000000uLL;
  *(_DWORD *)(a5 + 16) = v17;
  if ( v15 == 1 )
  {
    TopLevelPfn = MiGetTopLevelPfn((ULONG_PTR)a2);
    PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn);
    v19 = MiProcessSuitableForCombining((__int64)PageTablePfnBuddyRaw);
    AnyMultiplexedVm = (v20 + 1024) & -(__int64)(v19 != 0);
    if ( !v12
      && ((HIDWORD(PageTablePfnBuddyRaw[4].ThreadListHead.Flink) & 0x1000) != 0
       || !MiCheckProcessCombineSequence((__int64)PageTablePfnBuddyRaw, *(_DWORD *)(a1 + 288))) )
    {
      AnyMultiplexedVm = 0LL;
    }
    if ( ObReferenceObjectSafeWithTag((__int64)PageTablePfnBuddyRaw, 0x62436D4Du) )
      *(_QWORD *)a5 = PageTablePfnBuddyRaw;
    else
      AnyMultiplexedVm = 0LL;
    if ( (const __m128i *)TopLevelPfn != a2 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else if ( v12 )
  {
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(3);
  }
  else
  {
    AnyMultiplexedVm = 0LL;
  }
  _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v14 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    __writecr8(v14);
  }
  if ( AnyMultiplexedVm )
  {
    if ( !v12 )
      *(_QWORD *)(a5 + 24) = MiGetCombineDomain(v15, AnyMultiplexedVm);
    if ( v15 == 1 && *(_QWORD *)(*(_QWORD *)a5 + 1648LL) )
      return -(__int64)((unsigned int)VmCheckPageCombine(*(_QWORD *)a5, v12) != 0) & AnyMultiplexedVm;
  }
  return AnyMultiplexedVm;
}
