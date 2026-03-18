/*
 * XREFs of ?IsSessionGlobalsAreaAllocatedAndFullyInitialized@Umfd@Gre@@YA_NXZ @ 0x1401985DC
 * Callers:
 *     zzzCalcStartCursorHide @ 0x14028AAB0 (zzzCalcStartCursorHide.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::Umfd::IsSessionGlobalsAreaAllocatedAndFullyInitialized(Gre::Umfd *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  return *(_QWORD *)(W32GetSessionState(this, a2, a3) + 104)
      && *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v4, v3, v5) + 104) + 80LL) != 0;
}
