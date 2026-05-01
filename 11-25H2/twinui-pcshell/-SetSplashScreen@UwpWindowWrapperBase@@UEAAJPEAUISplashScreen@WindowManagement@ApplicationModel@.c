/*
 * XREFs of ?SetSplashScreen@UwpWindowWrapperBase@@UEAAJPEAUISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801E53D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::SetSplashScreen(
        UwpWindowWrapperBase *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::ISplashScreen *a2)
{
  __int64 v4; // rbx

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 224LL))(*((_QWORD *)this + 33));
  v4 = *((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::ISplashScreen *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 2) + 272LL))((char *)this - 16);
  return 0LL;
}
