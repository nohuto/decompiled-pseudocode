/*
 * XREFs of ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1403EC47C
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1401BC480 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2480 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkDisplayOnOff @ 0x1403EBC10 (DxgkDisplayOnOff.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403EC5CC (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DmmDisablePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  ADAPTER_DISPLAY *v5; // rbx
  int v6; // eax
  int v8; // eax
  __int64 v9; // r14

  v2 = *((_QWORD *)a1 + 237);
  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 13760;
  }
  v5 = *(ADAPTER_DISPLAY **)(v2 + 3160);
  if ( (*(_DWORD *)(v2 + 444) & 0x100) != 0
    || (v8 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v5, v4, 0, 0x40u, 0), v9 = v8, v8 >= 0) )
  {
    v6 = ADAPTER_DISPLAY::DestroyCddAllocations(v5, a1, v4);
    if ( v6 < 0 )
    {
      WdLogSingleEntry3(2LL, v4, v2, v6);
      WdLogGlobalForLineNumber = 13801;
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry3(2LL, v4, v2, v8);
    WdLogGlobalForLineNumber = 13783;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to disable scanning from primary on source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)",
      v4,
      v2,
      v9,
      0LL,
      0LL);
    return (unsigned int)v9;
  }
}
