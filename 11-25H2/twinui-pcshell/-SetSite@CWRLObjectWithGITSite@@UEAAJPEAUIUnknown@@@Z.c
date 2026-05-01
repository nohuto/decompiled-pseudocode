/*
 * XREFs of ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x18017DC40
 * Callers:
 *     ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x1801F5AD0 (-SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z @ 0x180238FC0 (-SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x18017DAF0 (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 *     ?IsAgile@@YA_NPEAUIUnknown@@@Z @ 0x18017DDE8 (-IsAgile@@YA_NPEAUIUnknown@@@Z.c)
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x18017DF14 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWRLObjectWithGITSite::SetSite(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  PVOID v4; // rcx
  int v5; // edi
  PVOID v7; // r14
  PVOID v8; // rbx
  unsigned int v9; // ebp
  unsigned int Ptr; // ebp
  PVOID v11; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( IsAgile((struct IUnknown *)this) && !IsAgile(a2) )
    {
      LODWORD(v11) = 0;
      v5 = GlobalInterfaceTable::s_Retrieve();
      if ( v5 >= 0 )
        v5 = ((__int64 (__fastcall *)(struct IGlobalInterfaceTable *, struct IUnknown *, GUID *, PVOID *))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->RegisterInterfaceInGlobal)(
               GlobalInterfaceTable::s_pGlobalInterfaceTable,
               a2,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v11);
      if ( v5 >= 0 )
      {
        AcquireSRWLockExclusive(this + 2);
        Ptr = (unsigned int)this[3].Ptr;
        LODWORD(this[3].Ptr) = (_DWORD)v11;
        ReleaseSRWLockExclusive(this + 2);
        if ( Ptr )
          GlobalInterfaceTable::Revoke(Ptr);
      }
    }
    else
    {
      AcquireSRWLockExclusive(this + 2);
      if ( this[4].Ptr != a2 )
      {
        ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
        v4 = this[4].Ptr;
        this[4].Ptr = a2;
        if ( v4 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ReleaseSRWLockExclusive(this + 2);
      return 0;
    }
  }
  else
  {
    AcquireSRWLockExclusive(this + 2);
    v7 = this[4].Ptr;
    this[4].Ptr = 0LL;
    v8 = v7;
    v11 = v7;
    v9 = (unsigned int)this[3].Ptr;
    LODWORD(this[3].Ptr) = 0;
    ReleaseSRWLockExclusive(this + 2);
    if ( v9 )
    {
      GlobalInterfaceTable::Revoke(v9);
    }
    else if ( v7 )
    {
      v8 = 0LL;
      v11 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v5 = 0;
    if ( v8 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v5;
}
