/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x14000F730
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x14000F564 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_140018244;
  if ( !(_BYTE)word_140018244 )
    return 0;
  v1 = HIBYTE(word_140018244);
  v2 = 1;
  if ( HIBYTE(word_140018244) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_140018244, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_140018244);
      v0 = word_140018244;
    }
    else
    {
      v0 = 1;
      word_140018244 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
