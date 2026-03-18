/*
 * XREFs of ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x180266F14
 * Callers:
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x18026729C (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@AEAAJAEBV?$unordered_map@IUInput@CFilterEffect@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@@std@@@Z @ 0x1802677E0 (-ProcessUpdateInputs@CFilterEffect@@AEAAJAEBV-$unordered_map@IUInput@CFilterEffect@@U-$hash@I@st.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

InternalFilterInput *__fastcall InternalFilterInput::`scalar deleting destructor'(InternalFilterInput *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  operator delete(this);
  return this;
}
