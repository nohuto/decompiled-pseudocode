/*
 * XREFs of IoProcessPassiveInterrupts @ 0x1402C36B8
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1402C3218 (KiInterruptDispatchCommon.c)
 *     KiDispatchPassiveInterrupts @ 0x1402C5640 (KiDispatchPassiveInterrupts.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     IopReleasePassiveInterruptBlockLock @ 0x1402C4F6C (IopReleasePassiveInterruptBlockLock.c)
 *     IopFindPassiveInterruptBlock @ 0x1402C5658 (IopFindPassiveInterruptBlock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x140493660 (IopAcquirePassiveInterruptBlockLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IoProcessPassiveInterrupts()
{
  __int64 result; // rax
  __int64 v1; // r8
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  bool v5; // zf
  char v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  result = IopFindPassiveInterruptBlock();
  v2 = result;
  if ( result )
  {
    v3 = *(_DWORD *)(result + 32);
    if ( !v3 || v3 == 1 && !*(_BYTE *)(v2 + 28) )
      guard_dispatch_icall_no_overrides(*(unsigned int *)(v2 + 24), 1LL, v1);
    IopAcquirePassiveInterruptBlockLock(v2, &v6);
    v5 = *(_BYTE *)(v2 + 64) == 0;
    *(_BYTE *)(v2 + 65) = 1;
    if ( v5 )
    {
      *(_BYTE *)(v2 + 64) = 1;
      KiInsertQueueDpc(v2 + 104, 0LL, 0LL, 0LL, 0);
    }
    LOBYTE(v4) = v6;
    return IopReleasePassiveInterruptBlockLock(v2, v4);
  }
  return result;
}
