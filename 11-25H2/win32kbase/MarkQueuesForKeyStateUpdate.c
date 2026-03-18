/*
 * XREFs of MarkQueuesForKeyStateUpdate @ 0x140216850
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x140065200 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 * Callees:
 *     ?ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1401A9CB8 (-ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z.c)
 */

void __fastcall MarkQueuesForKeyStateUpdate(__int64 a1, __int64 a2, char a3)
{
  __int64 UserSessionState; // rax
  void (*v4)(struct tagQ *, void *); // rdx
  _DWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  char v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+31h] [rbp-17h]
  __int16 v9; // [rsp+35h] [rbp-13h]
  char v10; // [rsp+37h] [rbp-11h]

  v5[0] = a1;
  v5[1] = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v6 = a2;
  v7 = a3;
  UserSessionState = W32GetUserSessionState(a1, a2);
  CActivationObjectManager::ForEachActivatableQueue(
    *(CActivationObjectManager **)(UserSessionState + 18864),
    v4,
    (struct tagQ *)v5);
}
