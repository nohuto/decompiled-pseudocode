/*
 * XREFs of ?IsSessionGlobalsAreaAllocated@Full@Gre@@YA_NXZ @ 0x14030A73C
 * Callers:
 *     DDCCICleanUpWrap @ 0x1402A24C0 (DDCCICleanUpWrap.c)
 *     UmfdNotifyCleanupLogonProcess @ 0x14034DC10 (UmfdNotifyCleanupLogonProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::Full::IsSessionGlobalsAreaAllocated(Gre::Full *this, __int64 a2)
{
  return *(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96) != 0LL;
}
