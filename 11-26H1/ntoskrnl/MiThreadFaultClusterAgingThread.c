/*
 * XREFs of MiThreadFaultClusterAgingThread @ 0x1402A8AF0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 */

NTSTATUS __fastcall MiThreadFaultClusterAgingThread(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF
  _OWORD v6[2]; // [rsp+50h] [rbp-28h] BYREF

  memset(v6, 0, sizeof(v6));
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 12LL, a3);
  Object[0] = (PVOID)(a1 + 88);
  Object[1] = (PVOID)(a1 + 160);
  while ( 1 )
  {
    result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    if ( !result )
      break;
    if ( result == 1 )
    {
      *(_QWORD *)&v6[0] = 0x900000002LL;
      memset((char *)v6 + 12, 0, 20);
      DWORD2(v6[0]) = 16;
      MiWalkAllWorkingSets(a1, (int *)v6);
    }
  }
  return result;
}
