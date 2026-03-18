/*
 * XREFs of KSTIOCPDispatcher_Destroy @ 0x140210F20
 * Callers:
 *     DeactivateKSTInputProcessingHelper @ 0x140218FA0 (DeactivateKSTInputProcessingHelper.c)
 *     UserKSTInitialize @ 0x140219140 (UserKSTInitialize.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x14020EF28 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall KSTIOCPDispatcher_Destroy(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  HANDLE *v6; // rcx

  result = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(result + 19224) )
  {
    v6 = *(HANDLE **)(W32GetUserSessionState(v4, v3) + 19224);
    if ( v6 )
      IOCPDispatcher::`scalar deleting destructor'(v6);
    result = W32GetUserSessionState(v6, v5);
    *(_QWORD *)(result + 19224) = 0LL;
  }
  return result;
}
