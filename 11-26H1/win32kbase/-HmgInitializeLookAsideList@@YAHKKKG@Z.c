/*
 * XREFs of ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x14010EA14
 * Callers:
 *     HmgCreate @ 0x14010E70C (HmgCreate.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x14010EB20 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

_BOOL8 __fastcall HmgInitializeLookAsideList(__int64 a1, unsigned int a2, __int64 a3, unsigned __int16 a4)
{
  unsigned int v4; // r15d
  unsigned int v5; // r14d
  __int64 v7; // rbx
  __int64 v8; // rbp
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 UserSessionState; // rax
  void *PagedLookasideList; // rax
  _BOOL8 result; // rax

  v4 = a4;
  v5 = ((_DWORD)a1 << 24) + 811691079;
  v7 = (unsigned int)a1;
  result = 0;
  if ( (_DWORD)a1 << 24 < 0xCF9E93B9 )
  {
    v8 = *(_QWORD *)(W32GetSessionState(a1) + 88);
    *(_DWORD *)(v8 + 4 * v7 + 2128) = a2;
    UserSessionState = W32GetUserSessionState(v10, v9, v11);
    PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                           (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72016),
                           a2,
                           v5,
                           v5,
                           v4);
    *(_QWORD *)(v8 + 8 * v7 + 1880) = PagedLookasideList;
    if ( PagedLookasideList )
      return 1;
  }
  return result;
}
