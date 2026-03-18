/*
 * XREFs of DpiFdoInitializeDP @ 0x140086718
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiFdoCleanupDP @ 0x14006D168 (DpiFdoCleanupDP.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiQueryMiniportInterface @ 0x140193720 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoInitializeDP(__int64 a1)
{
  _QWORD *v1; // rsi
  int MiniportInterface; // edi

  v1 = *(_QWORD **)(a1 + 64);
  MiniportInterface = 0;
  if ( !*((_WORD *)v1 + 2828) )
  {
    MiniportInterface = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGK_DP_INTERFACE, 72, 1);
    if ( MiniportInterface < 0 )
    {
      memset(v1 + 707, 0, 0x48uLL);
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 14148;
    }
    else if ( *((_WORD *)v1 + 2828) != 72 || !v1[711] || !v1[712] || !v1[713] || !v1[714] || !v1[715] )
    {
      DpiFdoCleanupDP(v1);
      MiniportInterface = -1073741823;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 14140;
    }
  }
  return (unsigned int)MiniportInterface;
}
