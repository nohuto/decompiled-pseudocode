/*
 * XREFs of ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18002D3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@$0A@@detail@@@detail@@QEAAXXZ @ 0x18002D440 (-clear@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@$0A@@detai.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z @ 0x18002D734 (-Free@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x18006CCA0 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CDrawListCache *__fastcall CDrawListCache::`scalar deleting destructor'(CDrawListCache *this, char a2)
{
  *(_QWORD *)this = &CDrawListCache::`vftable';
  CDrawListCache::ReleaseDrawListEntries(this);
  detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *,0>>::clear((char *)this + 40);
  if ( (*((_QWORD *)this + 5) & 3) == 1 )
    operator delete((void *)((*((_QWORD *)this + 5) & 0xFFFFFFFFFFFFFFFCuLL) - 16));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 88LL);
    else
      CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Free(this);
  }
  return this;
}
