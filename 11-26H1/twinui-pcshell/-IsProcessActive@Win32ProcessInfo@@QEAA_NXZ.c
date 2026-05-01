/*
 * XREFs of ?IsProcessActive@Win32ProcessInfo@@QEAA_NXZ @ 0x1805751E4
 * Callers:
 *     ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x18057557C (-TerminateApp@Win32AppInfo@@QEAAX_N@Z.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180575C9C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     <none>
 */

char __fastcall Win32ProcessInfo::IsProcessActive(__int64 ***this)
{
  __int64 *v1; // rax
  __int64 **v2; // rdx
  __int64 *i; // rcx
  __int64 *j; // rdx

  v1 = **this;
  while ( !*((_BYTE *)v1 + 25) )
  {
    if ( *(_DWORD *)v1[5] != 1 )
      return 1;
    v2 = (__int64 **)v1[2];
    if ( *((_BYTE *)v2 + 25) )
    {
      for ( i = (__int64 *)v1[1]; !*((_BYTE *)i + 25) && v1 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v1 = i;
      v1 = i;
    }
    else
    {
      v1 = (__int64 *)v1[2];
      for ( j = *v2; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v1 = j;
    }
  }
  return 0;
}
