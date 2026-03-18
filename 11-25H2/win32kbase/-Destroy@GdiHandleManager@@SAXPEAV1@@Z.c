/*
 * XREFs of ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1401A0388
 * Callers:
 *     HmgCreate @ 0x140028D7C (HmgCreate.c)
 *     MultiUserNtGreCleanup @ 0x14006DBA4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z @ 0x1401294DC (-Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z.c)
 */

void __fastcall GdiHandleManager::Destroy(PVOID Buffer)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)Buffer + 3);
  if ( v2 )
    GreDeleteFastMutex(v2);
  GdiHandleEntryDirectory::Destroy(*((char **)Buffer + 2));
  GreDeleteFastMutex((char *)Buffer);
}
