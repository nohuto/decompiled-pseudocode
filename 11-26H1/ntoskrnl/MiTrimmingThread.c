/*
 * XREFs of MiTrimmingThread @ 0x1404B7730
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     MiWorkingSetManager @ 0x1404B7850 (MiWorkingSetManager.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiTrimmingThread(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v3; // esi
  NTSTATUS v4; // eax
  __int64 v5; // r8
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  __int64 result; // rax
  PVOID Object[4]; // [rsp+40h] [rbp-F8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+60h] [rbp-D8h] BYREF

  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x1000u;
  a1[2289] = CurrentThread;
  v3 = KeSetPriorityThread(CurrentThread, 18);
  Object[0] = a1 + 11;
  Object[1] = a1 + 2664;
  Object[2] = a1 + 2667;
  Object[3] = a1 + 2670;
  while ( 1 )
  {
    v4 = KeWaitForMultipleObjects(4u, Object, WaitAny, Executive, 0, 0, 0LL, &WaitBlockArray);
    if ( !v4 )
      break;
    v6 = v4 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
      {
        v8 = 3LL;
        goto LABEL_6;
      }
      if ( v7 == 1 )
      {
        v8 = 4LL;
        goto LABEL_6;
      }
    }
    else
    {
      v8 = 2LL;
LABEL_6:
      MiWorkingSetManager(a1, v8);
    }
  }
  result = KeSetActualBasePriorityThread((__int64)CurrentThread, v3, v5);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x1000u;
  return result;
}
