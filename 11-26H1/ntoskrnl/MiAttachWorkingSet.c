/*
 * XREFs of MiAttachWorkingSet @ 0x14046ADD4
 * Callers:
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A8D7C (MiWalkAllHardLimitWorkingSets.c)
 *     MiEmptyThisWorkingSet @ 0x1404FA1B4 (MiEmptyThisWorkingSet.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiAttachWorkingSet(__int64 a1, _OWORD *a2)
{
  _KPROCESS *v2; // rcx
  struct _KTHREAD *CurrentThread; // r8
  _OWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF

  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    return 0LL;
  v2 = (_KPROCESS *)(a1 - 1024);
  if ( KeGetCurrentThread()->ApcState.Process == v2 )
    return 0LL;
  memset(v5, 0, sizeof(v5));
  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->ApcStateIndex )
      KeBugCheckEx(5u, (ULONG_PTR)v2, (ULONG_PTR)CurrentThread->ApcState.Process, CurrentThread->ApcStateIndex, 0LL);
    a2 = v5;
  }
  KiStackAttachProcess(v2, 1, (__int64)a2);
  return 1LL;
}
