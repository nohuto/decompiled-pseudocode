/*
 * XREFs of ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_KIIIPEAI@Z @ 0x1401C22E4
 * Callers:
 *     Win32UAFMAllocPagedLookasideList @ 0x1401C1E90 (Win32UAFMAllocPagedLookasideList.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x140029598 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     ?FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z @ 0x14006D940 (-FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1401C22C8 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1401C2380 (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 */

_QWORD *__fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePagedLookasideList(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3,
        USHORT a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  SIZE_T v9; // rbx
  __int64 UserSessionState; // rax
  _BYTE *PagedLookasideList; // rbx
  _QWORD *result; // rax
  __int64 v13; // rdx

  v9 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a1);
  if ( !v9 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v8, v7);
  PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                         (NSInstrumentation::CPointerHashTable **)(UserSessionState + 72032),
                         v9,
                         a2,
                         a3,
                         a4);
  if ( !PagedLookasideList )
    return 0LL;
  result = (_QWORD *)NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(0x40uLL);
  if ( !result )
  {
    Win32UAFMAllocatorCollection::FreePagedLookasideList(PagedLookasideList, v13);
    return 0LL;
  }
  *result = PagedLookasideList;
  return result;
}
