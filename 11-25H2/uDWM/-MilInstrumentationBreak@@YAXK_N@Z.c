/*
 * XREFs of ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800E9CE4
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800959F8 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800E9940 (-AssertW@@YAXPEBG000K@Z.c)
 *     ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1800E9B80 (-IsKernelDebuggerEnabled@@YAHXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800E9BCC (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     BreakForInstrumentation @ 0x1800E9C98 (BreakForInstrumentation.c)
 */

void __fastcall MilInstrumentationBreak(char a1)
{
  if ( BreakForInstrumentation()
    && ((a1 & 8) == 0
     || (unsigned int)IsKernelDebuggerPresent()
     || !IsDebuggerPresent() && (unsigned int)IsKernelDebuggerEnabled()) )
  {
    AssertW(
      L"Unexpected HRESULT in MilInstrumentation* caller",
      0LL,
      L"MilInstrumentationBreak",
      L"clientcore\\windows\\dwm\\shared\\util\\utillib\\debugbreak.cpp",
      0xDDu);
  }
}
