/*
 * XREFs of W32pLkmdDataCollectionCallback @ 0x1401ECA50
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1401EC6A8 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 */

__int64 __fastcall W32pLkmdDataCollectionCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *ProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  __int128 v17; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v18; // [rsp+38h] [rbp-D0h]
  __int128 v19; // [rsp+48h] [rbp-C0h]
  _BYTE v20[256]; // [rsp+58h] [rbp-B0h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v20);
  EnterSharedCrit(1LL, 1LL, v8, v9);
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(a5);
  if ( (!ProcessWin32Process || *ProcessWin32Process) && (*(_QWORD *)&v17 = ProcessWin32Process) != 0LL )
  {
    *((_QWORD *)&v17 + 1) = 0LL;
    LODWORD(v18) = 0;
    *((_QWORD *)&v18 + 1) = a1;
    *(_QWORD *)&v19 = a2;
    *((_QWORD *)&v19 + 1) = a3;
    v15 = _AddWin32TriageDataToDump((struct tagWIN32_TRIAGE_DATA *)&v17);
    if ( v15 >= 0 )
      v15 = 0;
  }
  else
  {
    v15 = -1073741811;
  }
  UserSessionSwitchLeaveCritWithNonPaged(v12, v11, v13, v14);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v20);
  return (unsigned int)v15;
}
