/*
 * XREFs of VidSchiComputeWorkerThreadPriority @ 0x140036580
 * Callers:
 *     VidSchiAdjustWorkerThreadPriorityDirectSubmitAware @ 0x14004BC94 (VidSchiAdjustWorkerThreadPriorityDirectSubmitAware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiComputeWorkerThreadPriority(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v3; // rax
  __int64 v5; // rbx
  int v7; // ecx
  CCHAR MostSignificantBit; // al

  v2 = 16;
  v3 = *(int *)(a1 + 400);
  if ( a2 >= 16 )
    v2 = a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( (_DWORD)v3 == v2 )
    return *(unsigned int *)(v5 + 244);
  v7 = 0;
  if ( (int)v3 > 16 && (*(_DWORD *)(v5 + 4 * v3 + 2696))-- == 1 )
  {
    v7 = 1;
    *(_DWORD *)(v5 + 2760) &= ~(1 << *(_DWORD *)(a1 + 400));
  }
  if ( v2 > 16 && (++*(_DWORD *)(v5 + 4LL * v2 + 2696), *(_DWORD *)(v5 + 4LL * v2 + 2696) == 1) )
  {
    *(_DWORD *)(v5 + 2760) |= 1 << v2;
    *(_DWORD *)(a1 + 400) = v2;
  }
  else
  {
    *(_DWORD *)(a1 + 400) = v2;
    if ( !v7 )
      return *(unsigned int *)(v5 + 244);
  }
  if ( !*(_DWORD *)(v5 + 2760) )
  {
    *(_DWORD *)(v5 + 244) = 16;
    return *(unsigned int *)(v5 + 244);
  }
  MostSignificantBit = RtlFindMostSignificantBit(*(unsigned int *)(v5 + 2760));
  *(_DWORD *)(v5 + 244) = MostSignificantBit;
  return (unsigned int)MostSignificantBit;
}
