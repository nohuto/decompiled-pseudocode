/*
 * XREFs of ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x14003842C
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x140036CE0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x140037850 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1400381E0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?CallCleanup@FxObject@@QEAAXXZ @ 0x14003840C (-CallCleanup@FxObject@@QEAAXXZ.c)
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x140038600 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 *     ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1400386B0 (-Dispose@FxIoTarget@@MEAAEXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxObject::CallCleanupCallbacks(FxObject *this)
{
  unsigned __int64 v2; // rsi
  char *i; // rbx
  void (__fastcall *v4)(unsigned __int64); // rax

  if ( (this->m_ObjectFlags & 8) != 0 )
  {
    v2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( this->m_ObjectSize )
    {
      for ( i = (char *)this + this->m_ObjectSize; i; i = (char *)*((_QWORD *)i + 1) )
      {
        v4 = (void (__fastcall *)(unsigned __int64))*((_QWORD *)i + 2);
        if ( v4 )
        {
          v4(v2);
          *((_QWORD *)i + 2) = 0LL;
        }
      }
    }
    this->m_ObjectFlags &= ~0x400u;
  }
}
