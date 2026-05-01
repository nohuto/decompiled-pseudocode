/*
 * XREFs of ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18017C750
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800444D0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::SetViewInFocus(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v4; // rbx
  struct IApplicationView **v5; // r14
  struct IApplicationView *Ptr; // rdx
  RTL_SRWLOCK *v8; // rbp
  RTL_SRWLOCK *v9; // r15
  struct IApplicationView *v10; // rcx

  v4 = this + 49;
  AcquireSRWLockExclusive(this + 49);
  v5 = (struct IApplicationView **)&this[54];
  Ptr = (struct IApplicationView *)this[54].Ptr;
  if ( a2 == Ptr )
  {
    if ( ((__int64)this[55].Ptr & 1) == 0 )
      goto LABEL_3;
    v8 = this + 54;
  }
  else
  {
    v8 = this + 54;
  }
  v9 = this + 54;
  if ( Ptr )
  {
    v9 = v8;
    if ( Ptr != a2 )
      CApplicationViewManager::RaiseApplicationViewChanged(
        (__int64)this,
        (void (__fastcall ***)(_QWORD, GUID *, __int64 **))Ptr,
        9u,
        (__int64)a2);
  }
  if ( *v5 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    v10 = *v5;
    *v5 = a2;
    if ( v10 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  LODWORD(this[55].Ptr) &= ~1u;
  if ( v9->Ptr )
    CApplicationViewManager::RaiseApplicationViewChanged((__int64)this, v9->Ptr, 7u, 0LL);
LABEL_3:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
