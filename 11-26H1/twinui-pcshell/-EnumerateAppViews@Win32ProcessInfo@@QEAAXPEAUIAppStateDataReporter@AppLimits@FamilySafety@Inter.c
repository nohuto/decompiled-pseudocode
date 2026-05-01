/*
 * XREFs of ?EnumerateAppViews@Win32ProcessInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180574BF8
 * Callers:
 *     ?EnumerateAppViews@Win32AppInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180574B5C (-EnumerateAppViews@Win32AppInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Win32ProcessInfo::EnumerateAppViews(
        Win32ProcessInfo *this,
        struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *a2)
{
  _QWORD *v2; // r8
  __int64 *v5; // rbx
  __int64 **v6; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx

  v2 = (_QWORD *)((char *)this + 24);
  if ( *((_QWORD *)this + 6) > 7uLL )
    v2 = (_QWORD *)*v2;
  (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, _QWORD, _QWORD *, const WCHAR *))(*(_QWORD *)a2 + 32LL))(
    a2,
    *((unsigned int *)this + 4),
    v2,
    &pvData);
  v5 = **(__int64 ***)this;
  while ( !*((_BYTE *)v5 + 25) )
  {
    (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, __int64))(*(_QWORD *)a2 + 40LL))(
      a2,
      v5[4]);
    v6 = (__int64 **)v5[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v5 = i;
      v5 = i;
    }
    else
    {
      v5 = (__int64 *)v5[2];
      for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v5 = j;
    }
  }
}
