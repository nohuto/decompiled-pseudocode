/*
 * XREFs of ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_KIIIPEAI@Z @ 0x1401EADCC
 * Callers:
 *     Win32UAFMAllocPagedLookasideList @ 0x1401EAA80 (Win32UAFMAllocPagedLookasideList.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x14010EB20 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     ?FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z @ 0x140185010 (-FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1401EADB0 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1401EAE68 (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 */

_QWORD *__fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePagedLookasideList(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3,
        USHORT a4)
{
  int v7; // edx
  int v8; // ecx
  SIZE_T v9; // rbx
  int v10; // r8d
  __int64 UserSessionState; // rax
  _BYTE *PagedLookasideList; // rbx
  _QWORD *result; // rax
  int v14; // edx
  int v15; // r8d

  v9 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a1);
  if ( !v9 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v8, v7, v10);
  PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                         (NSInstrumentation::CPointerHashTable **)(UserSessionState + 72016),
                         v9,
                         a2,
                         a3,
                         a4);
  if ( !PagedLookasideList )
    return 0LL;
  result = (_QWORD *)NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(0x40uLL);
  if ( !result )
  {
    Win32UAFMAllocatorCollection::FreePagedLookasideList(PagedLookasideList, v14, v15);
    return 0LL;
  }
  *result = PagedLookasideList;
  return result;
}
