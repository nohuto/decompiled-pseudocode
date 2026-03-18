/*
 * XREFs of KSTIOCPDispatcher_Destroy @ 0x140218B40
 * Callers:
 *     UserKSTInitialize @ 0x140181AD0 (UserKSTInitialize.c)
 *     DeactivateKSTInputProcessingHelper @ 0x14021DE70 (DeactivateKSTInputProcessingHelper.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x140218448 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall KSTIOCPDispatcher_Destroy(int a1, int a2, int a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  HANDLE *v8; // rcx
  int v9; // r8d

  result = W32GetUserSessionState(a1, a2, a3);
  if ( *(_QWORD *)(result + 19256) )
  {
    v8 = *(HANDLE **)(W32GetUserSessionState(v5, v4, v6) + 19256);
    if ( v8 )
      IOCPDispatcher::`scalar deleting destructor'(v8);
    result = W32GetUserSessionState((_DWORD)v8, v7, v9);
    *(_QWORD *)(result + 19256) = 0LL;
  }
  return result;
}
