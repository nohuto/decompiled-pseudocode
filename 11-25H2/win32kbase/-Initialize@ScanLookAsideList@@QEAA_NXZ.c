/*
 * XREFs of ?Initialize@ScanLookAsideList@@QEAA_NXZ @ 0x14019FAA0
 * Callers:
 *     InitializeGre @ 0x1402EC79C (InitializeGre.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x140029598 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

bool __fastcall ScanLookAsideList::Initialize(ScanLookAsideList *this, __int64 a2)
{
  __int64 UserSessionState; // rax
  _BYTE *PagedLookasideList; // rax

  UserSessionState = W32GetUserSessionState(this, a2);
  PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                         (NSInstrumentation::CPointerHashTable **)(UserSessionState + 72032),
                         0x70uLL,
                         0x73616C47u,
                         0x6E637347u,
                         0x60u);
  *(_QWORD *)this = PagedLookasideList;
  return PagedLookasideList != 0LL;
}
