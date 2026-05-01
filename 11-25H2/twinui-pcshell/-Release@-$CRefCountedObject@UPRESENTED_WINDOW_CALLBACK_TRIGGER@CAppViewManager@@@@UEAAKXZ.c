/*
 * XREFs of ?Release@?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@UEAAKXZ @ 0x1802F82F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@QEAA@XZ @ 0x1802F50B8 (--1PRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@QEAA@XZ.c)
 */

__int64 __fastcall CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 12);
  if ( !v2 && a1 )
  {
    CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER::~PRESENTED_WINDOW_CALLBACK_TRIGGER((CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER *)(a1 + 2));
    operator delete((void *)a1, (const struct std::nothrow_t *)0x38);
  }
  return v2;
}
