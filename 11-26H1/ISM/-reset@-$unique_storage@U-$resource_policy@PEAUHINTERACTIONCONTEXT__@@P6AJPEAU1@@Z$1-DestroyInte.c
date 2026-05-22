/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUHINTERACTIONCONTEXT__@@P6AJPEAU1@@Z$1?DestroyInteractionContext@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINTERACTIONCONTEXT__@@@Z @ 0x1801A8D94
 * Callers:
 *     ??0GestureTracker@@QEAA@IUtagPOINT@@_N1@Z @ 0x1801A8B84 (--0GestureTracker@@QEAA@IUtagPOINT@@_N1@Z.c)
 * Callees:
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180098EE0 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18009985C (--1last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<HINTERACTIONCONTEXT__ *,long (*)(HINTERACTIONCONTEXT__ *),&long DestroyInteractionContext(HINTERACTIONCONTEXT__ *),wistd::integral_constant<unsigned __int64,0>,HINTERACTIONCONTEXT__ *,HINTERACTIONCONTEXT__ *,0,std::nullptr_t>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v5);
    DestroyInteractionContext(v2);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v5);
  }
  *a1 = a2;
}
