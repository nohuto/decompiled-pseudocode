/*
 * XREFs of MmRemoveExecuteGrants @ 0x1404D543C
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void MmRemoveExecuteGrants()
{
  _KPROCESS *Process; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rdx
  _DWORD v4[2]; // [rsp+20h] [rbp-C8h] BYREF
  char v5; // [rsp+29h] [rbp-BFh]
  _KPROCESS *v6; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v7; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v8)(__int64, unsigned __int64); // [rsp+C8h] [rbp-20h]
  __int64 (__fastcall *v9)(__int64); // [rsp+D0h] [rbp-18h]

  memset_0(v4, 0, 0xC0uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = MiRevokeExecutePte;
  Process = (_KPROCESS *)((char *)Process + 1024);
  v4[0] = 32774;
  v9 = MiRevokeExecuteTail;
  v6 = Process;
  v7 = 0xFFFF7FFFFFFFFFFFuLL;
  v5 = MiLockWorkingSetShared((__int64)Process, v1, v2);
  MiWalkPageTables((__int64)v4);
  LOBYTE(v3) = v5;
  MiUnlockWorkingSetShared((__int64)Process, v3);
}
