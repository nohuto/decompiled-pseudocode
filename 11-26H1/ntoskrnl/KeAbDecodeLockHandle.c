/*
 * XREFs of KeAbDecodeLockHandle @ 0x1405334B8
 * Callers:
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x1403CAD68 (KiWaitForAllObjects.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KeAbDecodeLockHandle(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v2; // rax
  unsigned __int64 v3; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    v2 = *((_QWORD *)CurrentThread->AutoBoostThreadState + (((unsigned __int64)(unsigned __int8)a1 >> 2) & 3));
    v3 = 48 * ((unsigned __int64)(unsigned __int8)a1 >> 4) + 16;
  }
  else
  {
    v3 = 88LL * (unsigned __int8)(a1 >> 1);
    v2 = (__int64)CurrentThread->AutoBoostThreadState + 16;
  }
  return v3 + v2;
}
