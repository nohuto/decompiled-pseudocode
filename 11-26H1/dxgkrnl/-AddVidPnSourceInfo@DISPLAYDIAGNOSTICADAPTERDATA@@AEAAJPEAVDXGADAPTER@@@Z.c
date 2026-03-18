/*
 * XREFs of ?AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1401C92B0
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401C9CF0 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004A0F8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1401CB12C (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnSourceInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        ADAPTER_DISPLAY **a2)
{
  ADAPTER_DISPLAY *v5; // rbp
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  __int64 v8; // rax
  VIDPNSOURCEINFO *v9; // rcx

  if ( !a2 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1276;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1276LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = a2[395];
  v6 = 0;
  v7 = *((_DWORD *)v5 + 24);
  while ( v6 < v7 )
  {
    if ( ADAPTER_DISPLAY::IsPartOfDesktop(v5, v6) )
    {
      v8 = *((unsigned int *)this + 240);
      if ( (unsigned int)v8 >= 4 || (v9 = (DISPLAYDIAGNOSTICADAPTERDATA *)((char *)this + 224 * v8 + 64)) == 0LL )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1291;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"No memory available for adding a new display source",
          1291LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225495LL;
      }
      VIDPNSOURCEINFO::Initialize(v9, (struct DXGADAPTER *)a2, v6);
      ++*((_DWORD *)this + 240);
    }
    ++v6;
  }
  return 0LL;
}
