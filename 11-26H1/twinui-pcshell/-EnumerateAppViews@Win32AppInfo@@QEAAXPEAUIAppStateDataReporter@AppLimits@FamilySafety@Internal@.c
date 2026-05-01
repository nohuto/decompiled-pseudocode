/*
 * XREFs of ?EnumerateAppViews@Win32AppInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180574B5C
 * Callers:
 *     ?EnumerateAppStateData@Win32AppStateManager@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180574AF0 (-EnumerateAppStateData@Win32AppStateManager@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafe.c)
 * Callees:
 *     ?EnumerateAppViews@Win32ProcessInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180574BF8 (-EnumerateAppViews@Win32ProcessInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Inter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Win32AppInfo::EnumerateAppViews(
        __int64 ***this,
        struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *a2)
{
  __int64 v3; // rax
  Win32AppInfo *v5; // rdx
  __int64 *v6; // rbx
  __int64 **v7; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx

  v3 = *(_QWORD *)a2;
  v5 = (Win32AppInfo *)this;
  if ( (unsigned __int64)this[3] > 7 )
    v5 = (Win32AppInfo *)*this;
  (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, Win32AppInfo *))(v3 + 24))(
    a2,
    v5);
  v6 = *this[4];
  while ( !*((_BYTE *)v6 + 25) )
  {
    Win32ProcessInfo::EnumerateAppViews((Win32ProcessInfo *)v6[5], a2);
    v7 = (__int64 **)v6[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v6 = i;
      v6 = i;
    }
    else
    {
      v6 = (__int64 *)v6[2];
      for ( j = *v7; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
}
