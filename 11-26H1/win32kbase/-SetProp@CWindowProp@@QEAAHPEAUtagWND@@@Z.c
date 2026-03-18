/*
 * XREFs of ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1400DEA38
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1400DDB98 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1400489D0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     _FindProp @ 0x140048A20 (_FindProp.c)
 *     InternalSetProp @ 0x1400DEB14 (InternalSetProp.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CWindowProp::SetProp(CWindowProp *this, unsigned __int64 a2)
{
  int v4; // ebx
  int v5; // edx
  int v6; // r8d
  __int64 v7; // rbp
  int v8; // edx
  int v9; // r8d
  CWindowProp **Prop; // rax
  unsigned __int16 v11; // ax
  __int64 result; // rax
  __int64 v13; // r8
  CWindowProp *v14; // rcx
  __int64 v15; // rdx

  v4 = (*(unsigned __int16 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a2 + 144), v5, v6);
  v7 = *(_QWORD *)(a2 + 144);
  LockRefactorStagingAssertOwned((struct _KTHREAD **)v7, v8, v9);
  Prop = (CWindowProp **)FindProp(v7, v4, 1);
  if ( Prop )
  {
    v13 = *(_QWORD *)(v7 + 24);
    v14 = *Prop;
    v15 = 2LL * (unsigned int)--*(_DWORD *)(v13 + 4);
    *(_OWORD *)Prop = *(_OWORD *)(v13 + 16LL * *(unsigned int *)(v13 + 4) + 8);
    *(_OWORD *)(v13 + 8 * v15 + 8) = 0LL;
    if ( v14 )
    {
      if ( v14 != this )
        (**(void (__fastcall ***)(CWindowProp *))v14)(v14);
    }
  }
  v11 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  result = InternalSetProp(a2, v11, this);
  *((_QWORD *)this + 2) = a2 & -(__int64)((_DWORD)result != 0);
  return result;
}
