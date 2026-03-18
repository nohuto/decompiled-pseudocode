/*
 * XREFs of W32pLkmdDataCollectionCallback @ 0x1401C39A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033190 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033310 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z @ 0x1401ABFC0 (--0EnterLeaveCritShared@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1401C3600 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 */

__int64 __fastcall W32pLkmdDataCollectionCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *ProcessWin32Process; // rax
  __int64 v9; // rdx
  int v10; // ebx
  __int128 v12; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+38h] [rbp-D0h]
  __int128 v14; // [rsp+48h] [rbp-C0h]
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v16[256]; // [rsp+68h] [rbp-A0h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v16);
  EnterLeaveCritShared::EnterLeaveCritShared(&v15, 1u, 1u);
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(a5);
  if ( (!ProcessWin32Process || *ProcessWin32Process) && (*(_QWORD *)&v12 = ProcessWin32Process) != 0LL )
  {
    *((_QWORD *)&v12 + 1) = 0LL;
    LODWORD(v13) = 0;
    *((_QWORD *)&v13 + 1) = a1;
    *(_QWORD *)&v14 = a2;
    *((_QWORD *)&v14 + 1) = a3;
    v10 = _AddWin32TriageDataToDump((struct tagWIN32_TRIAGE_DATA *)&v12);
    if ( v10 >= 0 )
      v10 = 0;
  }
  else
  {
    v10 = -1073741811;
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v9);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v16);
  return (unsigned int)v10;
}
