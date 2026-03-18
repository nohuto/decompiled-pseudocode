/*
 * XREFs of InitQEntryLookaside @ 0x1402F5378
 * Callers:
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x14010EB20 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

__int64 __fastcall InitQEntryLookaside(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  _BYTE *PagedLookasideList; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rax
  _BYTE *v15; // rbx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                         (NSInstrumentation::CPointerHashTable **)(UserSessionState + 72016),
                         0xA8uLL,
                         0x616C7355u,
                         0x6D717355u,
                         0x10u);
  *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 16864) = PagedLookasideList;
  if ( !*(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 16864) )
    return 3221225495LL;
  v14 = W32GetUserSessionState(v12, v11, v13);
  v15 = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
          (NSInstrumentation::CPointerHashTable **)(v14 + 72016),
          0x230uLL,
          0x616C7355u,
          0x75717355u,
          0x10u);
  *(_QWORD *)(W32GetUserSessionState(v17, v16, v18) + 16856) = v15;
  return *(_QWORD *)(W32GetUserSessionState(v20, v19, v21) + 16856) == 0LL ? 0xC0000017 : 0;
}
