/*
 * XREFs of ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x14016CBE4
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageNonDelegated@CPointerInfoNode@@QEBAHHHH@Z @ 0x14016CD00 (-IsMessageNonDelegated@CPointerInfoNode@@QEBAHHHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CPointerInfoNode::IsAnyMessageNonDelegated(CPointerInfoNode *this)
{
  _DWORD *v2; // rcx
  unsigned int v3; // ebx
  CPointerInfoNode *v4; // rcx
  CPointerInfoNode *v6; // rcx
  int v7; // ecx
  CPointerInfoNode *v8; // rcx
  int v9; // r10d

  v3 = 0;
  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
    return 0LL;
  if ( !gbIgnoreStressedOutStuff && (*v2 & 0x80000) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 451LL);
  v4 = (CPointerInfoNode *)*(unsigned int *)this;
  if ( ((unsigned int)v4 & 0x100000) == 0
    || ((unsigned int)v4 & 0x400000) != 0
    || (unsigned int)CPointerInfoNode::IsMessageNonDelegated(
                       v4,
                       -__CFSHR__((_DWORD)v4, 24),
                       -__CFSHR__((_DWORD)v4, 25),
                       -__CFSHR__((_DWORD)v4, 27))
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
  return v3;
}
