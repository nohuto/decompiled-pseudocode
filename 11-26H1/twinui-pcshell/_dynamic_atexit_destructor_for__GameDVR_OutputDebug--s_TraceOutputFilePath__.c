/*
 * XREFs of _dynamic_atexit_destructor_for__GameDVR_OutputDebug::s_TraceOutputFilePath__ @ 0x180708B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT dynamic_atexit_destructor_for__GameDVR_OutputDebug::s_TraceOutputFilePath__()
{
  HRESULT result; // eax

  if ( GameDVR_OutputDebug::s_TraceOutputFilePath )
    return WindowsDeleteString(GameDVR_OutputDebug::s_TraceOutputFilePath);
  return result;
}
