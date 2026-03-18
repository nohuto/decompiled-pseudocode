/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801DDCBC
 * Callers:
 *     ??0CRenderThreadWaitTick@@QEAA@PEC_K@Z @ 0x180202DC0 (--0CRenderThreadWaitTick@@QEAA@PEC_K@Z.c)
 *     DebugInspectSysMemSurface_NoOpt @ 0x18028CE48 (DebugInspectSysMemSurface_NoOpt.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180292794 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1803DD3A0;
  if ( !(_BYTE)word_1803DD3A0 )
    return 0;
  v1 = HIBYTE(word_1803DD3A0);
  v2 = 1;
  if ( HIBYTE(word_1803DD3A0) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1803DD3A0, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1803DD3A0);
      v0 = word_1803DD3A0;
    }
    else
    {
      v0 = 1;
      word_1803DD3A0 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
