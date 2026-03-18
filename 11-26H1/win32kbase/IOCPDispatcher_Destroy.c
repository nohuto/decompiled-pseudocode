/*
 * XREFs of IOCPDispatcher_Destroy @ 0x140218AE0
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1401101FC (UserActivateMITInputProcessing.c)
 *     UninitializeInputSensorsOnSharedThread @ 0x14021C3F4 (UninitializeInputSensorsOnSharedThread.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x140218448 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall IOCPDispatcher_Destroy(int a1, int a2, int a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  HANDLE *v8; // rcx
  int v9; // r8d

  result = W32GetUserSessionState(a1, a2, a3);
  if ( *(_QWORD *)(result + 19248) )
  {
    v8 = *(HANDLE **)(W32GetUserSessionState(v5, v4, v6) + 19248);
    if ( v8 )
      IOCPDispatcher::`scalar deleting destructor'(v8);
    result = W32GetUserSessionState((_DWORD)v8, v7, v9);
    *(_QWORD *)(result + 19248) = 0LL;
  }
  return result;
}
