/*
 * XREFs of PpProcessClearProblem @ 0x1404EAC54
 * Callers:
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PipForDeviceNodeSubtree @ 0x140AC8870 (PipForDeviceNodeSubtree.c)
 */

__int64 __fastcall PpProcessClearProblem(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  int v3; // eax
  _DWORD v5[4]; // [rsp+20h] [rbp-28h] BYREF

  v5[0] = *(_DWORD *)(a1 + 40);
  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0LL;
  v5[1] = 1;
  v5[2] = 5;
  if ( v1 )
    v2 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  v3 = *(_DWORD *)(v2 + 300);
  if ( v3 == 789 || v3 == 790 )
    return 3221225558LL;
  PipForDeviceNodeSubtree(v2, PiResetProblemDevicesWorker, v5);
  return 0LL;
}
