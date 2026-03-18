/*
 * XREFs of ?IsSessionGlobalsAreaAllocated@Full@Gre@@YA_NXZ @ 0x1402FB8A0
 * Callers:
 *     DDCCICleanUpWrap @ 0x140285460 (DDCCICleanUpWrap.c)
 *     UmfdNotifyCleanupLogonProcess @ 0x140338A50 (UmfdNotifyCleanupLogonProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::Full::IsSessionGlobalsAreaAllocated(Gre::Full *this, __int64 a2)
{
  return *(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96) != 0LL;
}
