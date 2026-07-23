/*
 * XREFs of KeSpecialUserApcKernelRoutine @ 0x140B2E5B0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeSpecialUserApcKernelRoutine(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v11; // r8
  char v12; // bl
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 81) )
    return guard_dispatch_icall_no_overrides(a1, (__int64)a2);
  CurrentThread = KeGetCurrentThread();
  v11 = *a2;
  v12 = *(_BYTE *)(a1 + 1);
  *a2 = 0LL;
  KeInitializeApc(a1, (__int64)CurrentThread, 0, (__int64)KeSpecialUserApcKernelRoutine, v6, v11, 1, *a3);
  if ( (v12 & 1) != 0 )
    *(_BYTE *)(a1 + 1) |= 1u;
  result = KeInsertQueueApc(a1, *a4, *a5, 0);
  if ( !(_BYTE)result )
    return guard_dispatch_icall_no_overrides(a1, (__int64)a2);
  return result;
}
