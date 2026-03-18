/*
 * XREFs of DpiSriovEventComplete @ 0x14024A040
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 */

__int64 __fastcall DpiSriovEventComplete(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  void *v4; // rdi
  unsigned int v5; // ebx

  v4 = *(void **)(a1 + 64);
  v5 = 0;
  if ( bTracingEnabled )
    VgpuTrace(1, 0, v4, L"DpiSriovEventComplete", 0LL);
  if ( a4 >= 4 && a3 )
  {
    if ( !*((_BYTE *)v4 + (a2 != 0 ? 0x20 : 0) + 5516) )
    {
      v5 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3308;
    }
  }
  else
  {
    v5 = -1073741789;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3286;
  }
  if ( bTracingEnabled )
    VgpuTrace(0, v5, v4, L"DpiSriovEventComplete", 0LL);
  return v5;
}
