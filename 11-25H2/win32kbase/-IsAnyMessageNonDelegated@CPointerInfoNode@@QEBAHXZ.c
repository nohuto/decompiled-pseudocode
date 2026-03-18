/*
 * XREFs of ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x140204B4C
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140209AA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageNonDelegated@CPointerInfoNode@@QEBAHHHH@Z @ 0x140140544 (-IsMessageNonDelegated@CPointerInfoNode@@QEBAHHHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CPointerInfoNode::IsAnyMessageNonDelegated(CPointerInfoNode *this)
{
  __int64 result; // rax
  _DWORD *v3; // rcx
  unsigned int v4; // ebx
  CPointerInfoNode *v5; // rcx
  CPointerInfoNode *v6; // rcx
  int v7; // ecx
  CPointerInfoNode *v8; // rcx
  int v9; // r10d

  result = CPointerInfoNode::IsValid(this);
  v4 = 0;
  if ( (_DWORD)result )
  {
    if ( !gbIgnoreStressedOutStuff && (*v3 & 0x80000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 451);
    v5 = (CPointerInfoNode *)*(unsigned int *)this;
    if ( ((unsigned int)v5 & 0x100000) == 0
      || ((unsigned int)v5 & 0x400000) != 0
      || (unsigned int)CPointerInfoNode::IsMessageNonDelegated(
                         v5,
                         -__CFSHR__((_DWORD)v5, 24),
                         -__CFSHR__((_DWORD)v5, 25),
                         -__CFSHR__((_DWORD)v5, 27))
      || (unsigned int)CPointerInfoNode::IsMessageNonDelegated(
                         v6,
                         -__CFSHR__((_DWORD)v6, 28),
                         (8 * (int)v6) >> 31,
                         (2 * (int)v6) >> 31)
      || (unsigned int)CPointerInfoNode::IsMessageNonDelegated(
                         (CPointerInfoNode *)(unsigned int)(v7 >> 31),
                         v7 >> 31,
                         -(*((_DWORD *)this + 1) & 1),
                         -__CFSHR__(*((_DWORD *)this + 1), 3))
      || (unsigned int)CPointerInfoNode::IsMessageNonDelegated(
                         v8,
                         -__CFSHR__(v9, 4),
                         -__CFSHR__(v9, 5),
                         -__CFSHR__(v9, 7)) )
    {
      return 1;
    }
    return v4;
  }
  return result;
}
