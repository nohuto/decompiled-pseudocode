/*
 * XREFs of ?xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z @ 0x1402AA42C
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140217238 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402A67FC (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402A8174 (-SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxMoveSizeSetWindowPos(struct MOVESIZEDATA *a1, const struct tagRECT *a2)
{
  LONG left; // eax
  LONG top; // r8d
  const struct tagWND *v6; // r9
  int v7; // ecx
  struct tagMONITOR *v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-89h] BYREF
  int v13; // [rsp+24h] [rbp-85h]
  LONG v14; // [rsp+2Ch] [rbp-7Dh]
  LONG v15; // [rsp+30h] [rbp-79h]
  int v16; // [rsp+34h] [rbp-75h]
  int v17; // [rsp+38h] [rbp-71h]
  int v18; // [rsp+48h] [rbp-61h]
  char v19[40]; // [rsp+C8h] [rbp+1Fh] BYREF

  AdvancedWindowPos::CWindowAction::CWindowAction((__int64)&v12, 1);
  left = a2->left;
  top = a2->top;
  v6 = (const struct tagWND *)*((_QWORD *)a1 + 2);
  v7 = a2->right - a2->left;
  v8 = (struct tagMONITOR *)*((_QWORD *)a1 + 27);
  v12 |= 6u;
  v14 = left;
  v9 = a2->bottom - top;
  v15 = top;
  v16 = v7;
  v17 = v9;
  AdvancedWindowPos::CWindowAction::SetMonitor((AdvancedWindowPos::CWindowAction *)&v12, v8, 0, v6);
  v10 = *((_DWORD *)a1 + 50);
  if ( (v10 & 0x40000000) != 0 )
  {
    v12 |= 0x20u;
    v18 = 0;
    v13 |= 0x20000u;
    *((_DWORD *)a1 + 50) = v10 & 0xBFFFFFFF;
  }
  AdvancedWindowPos::xxxApplyWindowAction(*((_QWORD *)a1 + 2), &v12, 8LL);
  CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
    (CThreadLockedCurrentMonitorTopologyPtr *)v19,
    v11);
}
