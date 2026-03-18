/*
 * XREFs of ?IsSessionGlobalsAreaAllocatedAndFullyInitialized@Umfd@Gre@@YA_NXZ @ 0x14016EEEC
 * Callers:
 *     zzzCalcStartCursorHide @ 0x140245FC0 (zzzCalcStartCursorHide.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::Umfd::IsSessionGlobalsAreaAllocatedAndFullyInitialized(Gre::Umfd *this, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // ecx

  return *(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 104)
      && *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v3, v2) + 104) + 80LL) != 0;
}
