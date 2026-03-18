/*
 * XREFs of ?GreEncodeUserModePointer@@YAPEAXPEAX@Z @ 0x140102E20
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140034DD0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     GreSetBrushOwner @ 0x140035090 (GreSetBrushOwner.c)
 *     NtGdiCreateRectRgn @ 0x140102C20 (NtGdiCreateRectRgn.c)
 *     ?SetupDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@PEAU_DC_ATTR@@@Z @ 0x140102DC4 (-SetupDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@PEAU_DC_ATTR@@@Z.c)
 * Callees:
 *     EngBugCheckEx @ 0x1401C0710 (EngBugCheckEx.c)
 */

unsigned __int64 __fastcall GreEncodeUserModePointer(unsigned __int64 a1)
{
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rax

  if ( !a1 )
    return 0LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v3 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    EngBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
  if ( PsGetProcessWow64Process(*CurrentProcessWin32Process) )
    return (unsigned int)__ROR4__(a1 ^ *((_DWORD *)v3 + 70), v3[35] & 0x1F);
  if ( (*((_DWORD *)v3 + 69) & 0x20) != 0 )
    v4 = *((unsigned int *)v3 + 70);
  else
    v4 = v3[35];
  return __ROR8__(a1 ^ v4, v4 & 0x3F);
}
