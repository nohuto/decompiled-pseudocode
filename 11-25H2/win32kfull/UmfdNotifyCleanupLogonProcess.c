/*
 * XREFs of UmfdNotifyCleanupLogonProcess @ 0x140338A50
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401717F4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ?IsSessionGlobalsAreaAllocated@Full@Gre@@YA_NXZ @ 0x1402FB8A0 (-IsSessionGlobalsAreaAllocated@Full@Gre@@YA_NXZ.c)
 */

void __fastcall UmfdNotifyCleanupLogonProcess(Gre::Full *a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rbx
  struct W32_PUSH_LOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( Gre::Full::IsSessionGlobalsAreaAllocated(a1, a2) )
  {
    v4 = *(_QWORD *)(W32GetSessionState(v3, v2) + 96);
    v5 = (struct W32_PUSH_LOCK *)(v4 + 24272);
    if ( v4 != -24272 )
      GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v4 + 24272));
    if ( *(_BYTE *)(v4 + 24292) )
      *(_BYTE *)(v4 + 24292) = 0;
    Gre::PUSHLOCKEX::vUnlock(&v5, 0);
  }
}
