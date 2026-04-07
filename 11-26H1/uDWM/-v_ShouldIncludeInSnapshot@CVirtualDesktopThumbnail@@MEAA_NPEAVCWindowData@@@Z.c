/*
 * XREFs of ?v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z @ 0x180065330
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVirtualDesktopThumbnail::v_ShouldIncludeInSnapshot(
        CVirtualDesktopThumbnail *this,
        struct CWindowData *a2)
{
  struct CWindowData *v4; // rdi
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // cl
  unsigned int i; // edx
  unsigned int j; // edx
  struct IDwmWindow *v13; // rax
  struct CWindowData *v14; // [rsp+38h] [rbp+10h] BYREF

  if ( (*((_BYTE *)a2 + 738) & 0x40) != 0 )
    return 0;
  v4 = a2;
  v5 = 0;
  while ( (*((_DWORD *)a2 + 30) & 0x40000) == 0 )
  {
    v6 = *((_QWORD *)v4 + 75);
    if ( v6 && (*(_DWORD *)(v6 + 116) & 0x10000000) != 0 )
    {
      v4 = (struct CWindowData *)*((_QWORD *)v4 + 75);
    }
    else
    {
      v7 = *((_QWORD *)v4 + 3);
      if ( !v7 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 72LL))(v7) )
        break;
      v13 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 3) + 352LL))(*((_QWORD *)v4 + 3));
      if ( !v13 )
        return 0;
      v14 = 0LL;
      CWindowList::GetSyncedWindowData(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), v13, 0, &v14);
      v4 = v14;
    }
  }
  v8 = *((_QWORD *)this + 28);
  if ( *(_BYTE *)(v8 + 200) )
    v9 = (*((_BYTE *)a2 + 740) & 1) == 0;
  else
    v9 = 0;
  for ( i = 0; i < *(_DWORD *)(v8 + 160); ++i )
  {
    if ( v4 == *(struct CWindowData **)(*(_QWORD *)(v8 + 136) + 8LL * i) )
      return 1;
  }
  for ( j = 0; j < *(_DWORD *)(v8 + 192); ++j )
  {
    if ( v4 == *(struct CWindowData **)(*(_QWORD *)(v8 + 168) + 8LL * j) )
      return v5;
  }
  if ( v9 )
    return 1;
  return v5;
}
