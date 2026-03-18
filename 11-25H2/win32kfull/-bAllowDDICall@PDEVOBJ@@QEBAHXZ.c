/*
 * XREFs of ?bAllowDDICall@PDEVOBJ@@QEBAHXZ @ 0x1401CE438
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x140261548 (-bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x14033191C (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bAllowDDICall(PDEVOBJ *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  __int64 CurrentProcessWin32Process; // rax

  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x8000) == 0 )
    return 1;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 1776LL) + 56LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(this);
  v1 = 0;
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( v3 == CurrentProcessWin32Process && !KeAreApcsDisabled() )
    return 1;
  return v1;
}
