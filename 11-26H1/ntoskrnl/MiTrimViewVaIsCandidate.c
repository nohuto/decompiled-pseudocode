/*
 * XREFs of MiTrimViewVaIsCandidate @ 0x140465B88
 * Callers:
 *     MiTrimSharedPageFromView @ 0x140465634 (MiTrimSharedPageFromView.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiGetSystemCacheReverseMap @ 0x1402C6730 (MiGetSystemCacheReverseMap.c)
 *     MiGetMultiplexedVm @ 0x1402C67F0 (MiGetMultiplexedVm.c)
 */

__int64 __fastcall MiTrimViewVaIsCandidate(_QWORD *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 MultiplexedVm; // rax
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD *v8; // rdx

  v1 = a1[34];
  if ( (unsigned int)MiGetSystemRegionType(v1) != 7 )
    return 3221225497LL;
  if ( !MiGetSystemCacheReverseMap(v1) )
    return 3221225497LL;
  MultiplexedVm = MiGetMultiplexedVm(v3, v1);
  if ( v6 != MultiplexedVm || *(_QWORD *)(v5 + 32) >> 62 != 3 )
    return 3221225497LL;
  v7 = a1[2];
  v8 = (_QWORD *)(*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (*(_QWORD *)(v5 + 24) & 1) == 0 )
    v8 = *(_QWORD **)(v5 + 24);
  a1[25] = v8;
  if ( *v8 == v7 )
    return a1[36] != (v1 & 0x3FFFF) + 4 * (*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFF0000uLL) ? 0xC0000019 : 0;
  else
    return 3221225497LL;
}
