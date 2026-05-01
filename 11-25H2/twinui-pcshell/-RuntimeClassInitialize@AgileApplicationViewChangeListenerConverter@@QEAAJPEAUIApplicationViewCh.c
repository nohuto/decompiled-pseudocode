/*
 * XREFs of ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x180027880
 * Callers:
 *     ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewChangeListener@@AEAPEAU3@@Z @ 0x180027758 (--$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListen.c)
 *     ?RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1800279D0 (-RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListe.c)
 * Callees:
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x18002670C (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x180027530 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ??$com_agile_query@AEAPEAUIApplicationViewChangeListener@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationViewChangeListener@@W4AgileReferenceOptions@@@Z @ 0x180027964 (--$com_agile_query@AEAPEAUIApplicationViewChangeListener@@@wil@@YA-AV-$com_ptr_t@UIAgileReferenc.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize(
        AgileApplicationViewChangeListenerConverter *this,
        struct IApplicationViewChangeListener *a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  const char *v8; // r9
  HRESULT ApartmentId; // eax
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  struct IApplicationViewChangeListener *v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = a2;
  try
  {
    if ( *((struct IApplicationViewChangeListener **)this + 13) != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationViewChangeListener *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = *((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = a2;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = (__int64 *)wil::com_agile_query<IApplicationViewChangeListener * &>(&v13, &v14);
    v6 = *v5;
    *v5 = 0LL;
    v7 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( _ShouldCheckApartments(*((_DWORD *)this + 23)) )
      ApartmentId = SHCoGetApartmentId((unsigned int *)this + 22);
    else
      ApartmentId = 0;
    if ( ApartmentId < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x77,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
        (const char *)(unsigned int)ApartmentId,
        v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7A,
                           (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
                           v8);
  }
  return result;
}
