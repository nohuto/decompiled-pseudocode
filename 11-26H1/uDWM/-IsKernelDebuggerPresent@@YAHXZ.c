/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800E5834
 * Callers:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800E55B4 (-AssertW@@YAXPEBG000K@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800E594C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1801149E8;
  if ( !(_BYTE)word_1801149E8 )
    return 0;
  v1 = HIBYTE(word_1801149E8);
  v2 = 1;
  if ( HIBYTE(word_1801149E8) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1801149E8, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1801149E8);
      v0 = word_1801149E8;
    }
    else
    {
      v0 = 1;
      word_1801149E8 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
