/*
 * XREFs of KeResetKernelShadowStackRstorssp @ 0x140B3D348
 * Callers:
 *     PspDeleteKernelStack @ 0x14040A7F0 (PspDeleteKernelStack.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KeResetKernelShadowStackRstorssp(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 result; // rax

  _RAX = *a1;
  __asm { rdsspq  r8 }
  _R8 = _R8 & 0xFFFFFFFFFFFFFFF8uLL;
  __asm
  {
    rstorssp qword ptr [rax]
    saveprevssp
  }
  _RDX = (a2 - _RAX) >> 3;
  if ( _RDX )
  {
    _R9 = 255LL;
    while ( _RDX > 0xFF )
    {
      _RDX -= 255LL;
      __asm { incsspq r9 }
      if ( !_RDX )
        goto LABEL_2;
    }
    __asm { incsspq rdx }
  }
LABEL_2:
  __asm { rdsspq  rax }
  result = (_RAX & 0xFFFFFFFFFFFFFFF8uLL) - 8;
  __asm { rstorssp qword ptr [r8-8] }
  *a1 = result;
  __asm { saveprevssp }
  return result;
}
