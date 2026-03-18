/*
 * XREFs of EtwpInitializeClassicStackTracing @ 0x140AFABC8
 * Callers:
 *     EtwpUpdateStackTracing @ 0x140A70A48 (EtwpUpdateStackTracing.c)
 * Callees:
 *     EtwpPreallocateApcPool @ 0x140AFAC58 (EtwpPreallocateApcPool.c)
 *     EtwpReferenceStackLookasideList @ 0x140AFACE4 (EtwpReferenceStackLookasideList.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpInitializeClassicStackTracing(__int64 a1)
{
  unsigned int v2; // edi
  __int64 Pool2; // rax
  __int64 v4; // rcx

  v2 = 0;
  EtwpPreallocateApcPool(a1 + 832);
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    *(_QWORD *)(a1 + 1048) = Pool2;
    *(_DWORD *)(a1 + 1040) = 0x2000;
    _m_prefetchw((const void *)(a1 + 816));
    v4 = *(_DWORD *)(a1 + 816) | 0x2000u;
    if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x2000u) & 0x2000) == 0 )
      EtwpReferenceStackLookasideList(v4, 0x2000LL);
    _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x80u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
