/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1400FE4E4
 * Callers:
 *     ??$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2058 (--$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 v6; // rcx

  *(_OWORD *)a1 = 0LL;
  v2 = 0LL;
  v3 = (a1 - 32) & -(__int64)(a1 != 0);
  *(_OWORD *)(a1 + 16) = 0LL;
  if ( a1 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a1 - 32);
    if ( CurrentThreadWin32Thread )
      v2 = *CurrentThreadWin32Thread;
    *(_QWORD *)(a1 + 16) = v3;
    *(_QWORD *)(a1 + 24) = UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic;
    if ( ((v2 + 8) & -(__int64)(v2 != 0)) != 0 )
    {
      v5 = ((v2 + 8) & -(__int64)(v2 != 0)) + 88;
      v6 = *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58);
      if ( *(_QWORD *)(v6 + 8) != v5 )
        __fastfail(3u);
      *(_QWORD *)a1 = v6;
      *(_QWORD *)(a1 + 8) = v5;
      *(_QWORD *)(v6 + 8) = a1;
      *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58) = a1;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = a1;
      *(_QWORD *)a1 = a1;
    }
  }
  return a1;
}
