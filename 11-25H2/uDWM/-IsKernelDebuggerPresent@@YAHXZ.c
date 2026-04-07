/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800E9BCC
 * Callers:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800E9940 (-AssertW@@YAXPEBG000K@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800E9CE4 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_180118920;
  if ( !(_BYTE)word_180118920 )
    return 0;
  v1 = HIBYTE(word_180118920);
  v2 = 1;
  if ( HIBYTE(word_180118920) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_180118920, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_180118920);
      v0 = word_180118920;
    }
    else
    {
      v0 = 1;
      word_180118920 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
