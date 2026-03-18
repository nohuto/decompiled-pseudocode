/*
 * XREFs of W32GetCurrentThreadAndEnterCriticalRegion @ 0x1400C36A0
 * Callers:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400C2CFC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400C2EEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgMarkLazyDelete @ 0x1400C3440 (HmgMarkLazyDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall W32GetCurrentThreadAndEnterCriticalRegion(__int64 a1)
{
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rbx
  __int64 v2; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax

  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(a1);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(v2),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    return *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion;
  }
  else
  {
    return 0LL;
  }
}
