/*
 * XREFs of ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14015B7A8
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14009C5A8 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14003F3E0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     _FindProp @ 0x14003F430 (_FindProp.c)
 *     InternalSetProp @ 0x14019F4EC (InternalSetProp.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CWindowProp::SetProp(CWindowProp *this, unsigned __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rdx
  CWindowProp **Prop; // rax
  __int64 v9; // r8
  CWindowProp *v10; // rcx
  __int64 v11; // rdx
  unsigned __int16 v12; // ax
  __int64 result; // rax

  v4 = (*(unsigned __int16 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a2 + 144), v5);
  v6 = *(_QWORD *)(a2 + 144);
  LockRefactorStagingAssertOwned((struct _KTHREAD **)v6, v7);
  Prop = (CWindowProp **)FindProp(v6, v4, 1);
  if ( Prop )
  {
    v9 = *(_QWORD *)(v6 + 24);
    v10 = *Prop;
    v11 = 2LL * (unsigned int)--*(_DWORD *)(v9 + 4);
    *(_OWORD *)Prop = *(_OWORD *)(v9 + 16LL * *(unsigned int *)(v9 + 4) + 8);
    *(_OWORD *)(v9 + 8 * v11 + 8) = 0LL;
    if ( v10 )
    {
      if ( v10 != this )
        (**(void (__fastcall ***)(CWindowProp *))v10)(v10);
    }
  }
  v12 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  result = InternalSetProp(a2, v12, this);
  *((_QWORD *)this + 2) = a2 & -(__int64)((_DWORD)result != 0);
  return result;
}
