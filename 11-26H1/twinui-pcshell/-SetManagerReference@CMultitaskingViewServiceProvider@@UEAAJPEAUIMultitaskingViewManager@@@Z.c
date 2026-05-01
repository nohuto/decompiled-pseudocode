/*
 * XREFs of ?SetManagerReference@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewManager@@@Z @ 0x18009AD10
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::SetManagerReference(
        CMultitaskingViewServiceProvider *this,
        struct IMultitaskingViewManager *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  int v5; // ebx

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != (CMultitaskingViewServiceProvider *)88));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 9, (__int64)a2);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return 0LL;
}
