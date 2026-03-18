/*
 * XREFs of DpiGdiSyncDisplayCallout @ 0x140422578
 * Callers:
 *     ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1401DFABC (-RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 *     DpiGdiHandleAsyncDisplayCallout @ 0x140238930 (DpiGdiHandleAsyncDisplayCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdiSyncDisplayCallout(__int64 a1, char a2, __int64 a3)
{
  int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  if ( dword_140168DE0 == 2 )
  {
    HIBYTE(v6) = a2;
    LODWORD(v5) = 8;
    LOBYTE(a3) = 1;
    v3 = SMgrGdiCallout(&v5, a1, a3, 0LL, 0LL, 0LL);
    if ( v3 >= 0 )
    {
      if ( SDWORD2(v6) < 0 )
      {
        v3 = DWORD2(v6);
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 372;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 362;
    }
  }
  else
  {
    v3 = -1073741661;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 344;
  }
  return (unsigned int)v3;
}
