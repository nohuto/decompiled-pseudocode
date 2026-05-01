/*
 * XREFs of ?SetSite@CWRLObjectWithSite@@UEAAJPEAUIUnknown@@@Z @ 0x1801B9D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWRLObjectWithSite::SetSite(CWRLObjectWithSite *this, struct IUnknown *a2)
{
  __int64 v4; // rcx

  if ( *((struct IUnknown **)this + 2) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
