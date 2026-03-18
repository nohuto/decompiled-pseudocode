/*
 * XREFs of ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x140145174
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1401450CC (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x140145140 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 * Callees:
 *     PtiKbdFromQ @ 0x14014521C (PtiKbdFromQ.c)
 */

struct tagTHREADINFO *__fastcall CMouseProcessor::GetMouseWheelForegroundThread(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *result; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rcx

  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18928) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v4, v3, v5);
  result = (struct tagTHREADINFO *)PtiKbdFromQ(*(_QWORD *)(UserSessionState + 18928));
  if ( !result )
  {
    v12 = *(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 18928);
    if ( *(_QWORD *)(v12 + 120) )
    {
      return *(struct tagTHREADINFO **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v11, v13) + 18928) + 120LL)
                                      + 16LL);
    }
    else
    {
      v14 = *(_QWORD *)(W32GetUserSessionState(v12, v11, v13) + 18928);
      v15 = *(_QWORD *)(v14 + 112);
      if ( v15 )
        return *(struct tagTHREADINFO **)(v15 + 16);
      else
        return *(struct tagTHREADINFO **)(v14 + 96);
    }
  }
  return result;
}
