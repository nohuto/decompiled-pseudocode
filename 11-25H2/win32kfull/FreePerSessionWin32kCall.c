/*
 * XREFs of FreePerSessionWin32kCall @ 0x1401F95AC
 * Callers:
 *     EditionDriverUninitialize @ 0x1401F90E0 (EditionDriverUninitialize.c)
 * Callees:
 *     ?UnloadApiSetHost@@YAXPEAU_Win32kApiSet@@@Z @ 0x1401F9648 (-UnloadApiSetHost@@YAXPEAU_Win32kApiSet@@@Z.c)
 */

__int64 __fastcall FreePerSessionWin32kCall(__int64 *a1)
{
  __int64 v1; // rdi
  int v2; // esi
  _QWORD *i; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(gSessionApiSetHostRefCountLock, 0LL);
    v2 = 0;
    for ( i = (_QWORD *)(v1 + 8); *i; i += 3 )
      UnloadApiSetHost((struct _Win32kApiSet *)(v1 + 24LL * v2++));
    ExReleasePushLockExclusiveEx(gSessionApiSetHostRefCountLock, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
