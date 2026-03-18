/*
 * XREFs of ?RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z @ 0x140029334
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140029000 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RemoveCursorFromCaptionIconCache(struct tagCURSOR *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  struct tagCURSOR **v5; // rcx

  v3 = 0;
  v4 = W32GetUserSessionState(a1, a2) + 43160;
  while ( 1 )
  {
    if ( v3 >= 5 )
      return 0LL;
    v5 = (struct tagCURSOR **)(v4 + 16LL * v3);
    if ( *v5 == a1 && !HMAssignmentUnlock(v5) )
      break;
    ++v3;
  }
  return 1LL;
}
