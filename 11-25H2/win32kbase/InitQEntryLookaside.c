/*
 * XREFs of InitQEntryLookaside @ 0x1402EAE48
 * Callers:
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x140029598 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

__int64 __fastcall InitQEntryLookaside(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  _BYTE *PagedLookasideList; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                         (NSInstrumentation::CPointerHashTable **)(UserSessionState + 72032),
                         0xA8uLL,
                         0x616C7355u,
                         0x6D717355u,
                         0x10u);
  *(_QWORD *)(W32GetUserSessionState(v5, v4) + 16872) = PagedLookasideList;
  if ( !*(_QWORD *)(W32GetUserSessionState(v7, v6) + 16872) )
    return 3221225495LL;
  v10 = W32GetUserSessionState(v9, v8);
  v11 = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
          (NSInstrumentation::CPointerHashTable **)(v10 + 72032),
          0x218uLL,
          0x616C7355u,
          0x75717355u,
          0x10u);
  *(_QWORD *)(W32GetUserSessionState(v13, v12) + 16864) = v11;
  return *(_QWORD *)(W32GetUserSessionState(v15, v14) + 16864) == 0LL ? 0xC0000017 : 0;
}
