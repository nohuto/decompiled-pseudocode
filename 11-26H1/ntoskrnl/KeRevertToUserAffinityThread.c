/*
 * XREFs of KeRevertToUserAffinityThread @ 0x1405EBFF0
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void KeRevertToUserAffinityThread(void)
{
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity = 0LL;
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
