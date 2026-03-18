/*
 * XREFs of ?DxgkSetCompositionSurfaceInkCookie@@YAJPEAXI@Z @ 0x1400A2CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkSetCompositionSurfaceInkCookie(_DWORD *a1, int a2)
{
  int v4; // ebx

  if ( (***((unsigned int (__fastcall ****)(_QWORD))a1 + 2))(*((_QWORD *)a1 + 2)) == 1 )
  {
    v4 = CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 12));
    if ( v4 >= 0 )
    {
      a1[46] = a2;
      CPushLock::ReleaseLock((CPushLock *)(a1 + 12));
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
