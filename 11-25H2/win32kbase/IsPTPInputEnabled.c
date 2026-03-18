/*
 * XREFs of IsPTPInputEnabled @ 0x1400D74A8
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400D6900 (RIMProcessAnyPointerDeviceInput.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x1400F1818 (RIMApplyPTPConfigRemedyWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPTPInputEnabled(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v4 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 328) )
    return *(_DWORD *)(W32GetUserSessionState(v3, v2) + 352) != 0;
  return v4;
}
