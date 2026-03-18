/*
 * XREFs of ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1400B9534
 * Callers:
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1400B8984 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1400B89EC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x14021F75C (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1400B95DC (PtiKbdFromQ.c)
 */

struct tagTHREADINFO *__fastcall CMouseProcessor::GetMouseWheelForegroundThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v3, v2);
  result = (struct tagTHREADINFO *)PtiKbdFromQ(*(_QWORD *)(UserSessionState + 18888));
  if ( !result )
  {
    v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 18888);
    if ( *(_QWORD *)(v9 + 120) )
    {
      return *(struct tagTHREADINFO **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 18888) + 120LL) + 16LL);
    }
    else
    {
      v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18888);
      v11 = *(_QWORD *)(v10 + 112);
      if ( v11 )
        return *(struct tagTHREADINFO **)(v11 + 16);
      else
        return *(struct tagTHREADINFO **)(v10 + 96);
    }
  }
  return result;
}
