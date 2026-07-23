/*
 * XREFs of EtwpInitializeClassicStackTracing @ 0x140AB3A68
 * Callers:
 *     EtwpUpdateStackTracing @ 0x140AB2624 (EtwpUpdateStackTracing.c)
 * Callees:
 *     EtwpPreallocateApcPool @ 0x140AB3AF8 (EtwpPreallocateApcPool.c)
 *     EtwpReferenceStackLookasideList @ 0x140AB3B84 (EtwpReferenceStackLookasideList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpInitializeClassicStackTracing(__int64 a1)
{
  unsigned int v2; // edi
  __int64 Pool2; // rax

  v2 = 0;
  EtwpPreallocateApcPool(a1 + 832);
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    *(_QWORD *)(a1 + 1048) = Pool2;
    *(_DWORD *)(a1 + 1040) = 0x2000;
    _m_prefetchw((const void *)(a1 + 816));
    if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x2000u) & 0x2000) == 0 )
      EtwpReferenceStackLookasideList();
    _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x80u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
