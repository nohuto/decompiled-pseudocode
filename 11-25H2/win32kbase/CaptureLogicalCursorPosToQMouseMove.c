/*
 * XREFs of CaptureLogicalCursorPosToQMouseMove @ 0x1400D05E0
 * Callers:
 *     <none>
 * Callees:
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x140041A20 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CaptureLogicalCursorPosToQMouseMove(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // xmm0_8
  unsigned int v7; // edi
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  result = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(result + 3136);
  if ( v4 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    if ( result )
    {
      v5 = *(_QWORD *)(a1 + 112);
      if ( v5 )
      {
        v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 464LL) + 268LL);
        CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext((CMouseProcessor *)result, (__int64)&v8, v7);
        result = HIDWORD(v8);
        v6 = v8;
      }
      else
      {
        v6 = *(_QWORD *)(result + 44);
        v7 = *(_DWORD *)(result + 52);
      }
      *(_QWORD *)(a1 + 192) = v6;
      *(_DWORD *)(a1 + 200) = v7;
    }
  }
  return result;
}
