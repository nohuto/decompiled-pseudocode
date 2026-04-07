/*
 * XREFs of ?_GetRightFrameThickness@CTopLevelWindow@@AEAAHXZ @ 0x180012204
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180011D38 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::_GetRightFrameThickness(CTopLevelWindow *this)
{
  __int64 result; // rax

  result = *((unsigned int *)this + 144);
  if ( (int)result <= 0 )
    return *(unsigned int *)(*((_QWORD *)this + 87) + 112LL);
  return result;
}
