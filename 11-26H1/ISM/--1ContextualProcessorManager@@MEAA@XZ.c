/*
 * XREFs of ??1ContextualProcessorManager@@MEAA@XZ @ 0x1801A6F5C
 * Callers:
 *     ??_EContextualProcessorManager@@MEAAPEAXI@Z @ 0x1801A7020 (--_EContextualProcessorManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAXPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x180076780 (--$_Destroy_range@V-$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall ContextualProcessorManager::~ContextualProcessorManager(ContextualProcessorManager *this)
{
  bool v1; // zf
  __int64 *v3; // rcx

  v1 = *((_DWORD *)this + 10) == 0;
  *(_QWORD *)this = &ContextualProcessorManager::`vftable';
  if ( !v1 )
    NtMITSetKeyboardInputRoutingPolicy(0LL);
  v3 = (__int64 *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorManager::ContextualProcessorEntry>>(
      v3,
      *((__int64 **)this + 3));
    std::_Deallocate<16>(
      *((void **)this + 2),
      (struct std::nothrow_t *)((*((_QWORD *)this + 4) - *((_QWORD *)this + 2)) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
