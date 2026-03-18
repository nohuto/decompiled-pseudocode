/*
 * XREFs of ?ContainsMotionData@MouseInputDataEx@CMouseProcessor@@QEBA_NXZ @ 0x14012E190
 * Callers:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x14012E0A0 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMouseProcessor::MouseInputDataEx::ContainsMotionData(CMouseProcessor::MouseInputDataEx *this)
{
  bool result; // al

  if ( (*((_BYTE *)this + 2) & 1) != 0 )
    return 1;
  result = 0;
  if ( *((_DWORD *)this + 3) || *((_DWORD *)this + 4) )
    return 1;
  return result;
}
