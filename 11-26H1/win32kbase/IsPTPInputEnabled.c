/*
 * XREFs of IsPTPInputEnabled @ 0x140048E30
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400477E4 (RIMProcessAnyPointerDeviceInput.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x14013846C (RIMApplyPTPConfigRemedyWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPTPInputEnabled(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  unsigned int v6; // ebx

  v6 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 328) )
    return *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 352) != 0;
  return v6;
}
