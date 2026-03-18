/*
 * XREFs of IsAdaptiveQueueDetachExempted @ 0x140151C68
 * Callers:
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     EditionMouseMoveShellResilience @ 0x140151830 (EditionMouseMoveShellResilience.c)
 *     IsShellFrameHangResilient @ 0x140151BD4 (IsShellFrameHangResilient.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     IsIAMThread @ 0x140151CF0 (IsIAMThread.c)
 *     IsDebuggerAttached @ 0x140151D14 (IsDebuggerAttached.c)
 */

__int64 __fastcall IsAdaptiveQueueDetachExempted(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 v6; // rcx

  v1 = *(_QWORD *)(a1 + 1584);
  v2 = 0;
  if ( !v1 )
    return 1LL;
  v4 = *(_QWORD *)(v1 + 112);
  if ( v4 )
  {
    if ( (unsigned __int8)IsIAMThread(*(_QWORD *)(v4 + 16)) )
      return 1LL;
  }
  if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(a1 + 464)) )
    return 1LL;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1584) + 112LL);
  if ( !v6 )
    return 0LL;
  LOBYTE(v2) = (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 464LL)) != 0;
  return v2;
}
