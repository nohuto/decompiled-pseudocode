/*
 * XREFs of ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x140119300
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1400CDFE8 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400CFE80 (_anonymous_namespace_--PhysicalCursorPointAsLogicalPoint.c)
 *     UserIsCurrentThreadDesktopComposed @ 0x140119530 (UserIsCurrentThreadDesktopComposed.c)
 */

__int64 __fastcall QHelper::GetPendingMouseMovePoint(__int64 a1, CInputDest *a2, int a3)
{
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v5; // rdi
  __int64 v6; // xmm0_8
  int v7; // eax
  _DWORD *v9; // rax
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)a2
    && (ThreadInfo = CInputDest::GetThreadInfo(a2)) != 0LL
    && (v5 = *((_QWORD *)ThreadInfo + 58)) != 0
    && (unsigned int)UserIsCurrentThreadDesktopComposed() )
  {
    v6 = *(_QWORD *)(v5 + 192);
    v7 = *(_DWORD *)(v5 + 200);
  }
  else
  {
    v9 = anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(v10, (int)a2, a3);
    v6 = *(_QWORD *)v9;
    v7 = v9[2];
  }
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 8) = v7;
  return a1;
}
