/*
 * XREFs of CaptureLogicalCursorPosToQMouseMove @ 0x1400840D0
 * Callers:
 *     <none>
 * Callees:
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x140084250 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CaptureLogicalCursorPosToQMouseMove(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // xmm0_8
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  result = W32GetUserSessionState(a1, a2, a3);
  v5 = *(_QWORD *)(result + 3136);
  if ( v5 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    if ( result )
    {
      v6 = *(_QWORD *)(a1 + 112);
      if ( v6 )
      {
        v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 456LL) + 268LL);
        CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext((CMouseProcessor *)result, (unsigned int)&v9);
        result = HIDWORD(v9);
        v8 = v9;
      }
      else
      {
        v8 = *(_QWORD *)(result + 44);
        v7 = *(_DWORD *)(result + 52);
      }
      *(_QWORD *)(a1 + 192) = v8;
      *(_DWORD *)(a1 + 200) = v7;
    }
  }
  return result;
}
