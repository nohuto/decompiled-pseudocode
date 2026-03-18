/*
 * XREFs of MiSetIdealProcessorThread @ 0x14020445C
 * Callers:
 *     MiSetThreadAffinity @ 0x1403C34E0 (MiSetThreadAffinity.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140204540 (KeSetPriorityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x140204850 (KeSetIdealProcessorThreadEx.c)
 *     KeQueryPriorityThread @ 0x1402052D0 (KeQueryPriorityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall MiSetIdealProcessorThread(__int64 a1)
{
  struct _GROUP_AFFINITY v1; // xmm1
  struct _KTHREAD *CurrentThread; // rbx
  KPRIORITY v4; // edi
  int v5; // esi
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-20h] BYREF

  v1 = *(struct _GROUP_AFFINITY *)(a1 + 8);
  PreviousAffinity = 0LL;
  Affinity = v1;
  if ( !v1.Mask )
    return 0xFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  v4 = KeQueryPriorityThread(CurrentThread) >= 16 ? -1 : KeSetPriorityThread(CurrentThread, 16);
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  v5 = KeSetIdealProcessorThreadEx(CurrentThread, *(_DWORD *)(a1 + 4));
  if ( v4 != -1 )
    KeSetPriorityThread(CurrentThread, v4);
  if ( v5 >= 0 )
    return 0LL;
  else
    return 0xFFFFFFFFLL;
}
