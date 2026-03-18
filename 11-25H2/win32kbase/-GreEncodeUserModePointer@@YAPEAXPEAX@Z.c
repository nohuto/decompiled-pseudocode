/*
 * XREFs of ?GreEncodeUserModePointer@@YAPEAXPEAX@Z @ 0x14008EE10
 * Callers:
 *     GreSetBrushOwner @ 0x1400711D0 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140087310 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x14008EAB0 (NtGdiCreateRectRgn.c)
 * Callees:
 *     <none>
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
    KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
  if ( PsGetProcessWow64Process(*CurrentProcessWin32Process) )
    return (unsigned int)__ROR4__(a1 ^ *((_DWORD *)v3 + 70), v3[35] & 0x1F);
  if ( (*((_DWORD *)v3 + 69) & 0x20) != 0 )
    v4 = *((unsigned int *)v3 + 70);
  else
    v4 = v3[35];
  return __ROR8__(a1 ^ v4, v4 & 0x3F);
}
