/*
 * XREFs of ?CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z @ 0x1401960FC
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14019A350 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1401B59A4 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     InitCreateUserCrit @ 0x1402F1D28 (InitCreateUserCrit.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall CLEANUP_CRIT_RESOURCE(struct _FAST_ERESOURCE **a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  ExDeleteFastResource(*a1);
  GreDeleteFastMutex((char *)*a1, v2, v3, v4);
  *a1 = 0LL;
}
