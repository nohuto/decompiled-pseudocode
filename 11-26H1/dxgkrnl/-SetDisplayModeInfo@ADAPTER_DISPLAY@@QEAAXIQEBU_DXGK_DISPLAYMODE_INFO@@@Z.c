/*
 * XREFs of ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x140031434
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1401BC480 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x14025A990 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer @ 0x140031A00 (McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1402843BC (-UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetDisplayModeInfo(
        DXGADAPTER **this,
        unsigned int a2,
        const struct _DXGK_DISPLAYMODE_INFO *const a3)
{
  __int64 v4; // rbp
  int v6; // edx
  int v7; // r8d
  DXGADAPTER *v8; // rax
  __int64 v9; // rsi
  int v10; // eax
  DXGADAPTER *v11; // rcx
  int v12; // eax
  DXGDODPRESENT *v13; // rcx

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5912;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 5912LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5913;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      5913LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = this[16];
  v9 = 4024 * v4;
  *(_OWORD *)((char *)v8 + v9 + 992) = *(_OWORD *)a3;
  *(_OWORD *)((char *)v8 + v9 + 1008) = *((_OWORD *)a3 + 1);
  *(_OWORD *)((char *)v8 + v9 + 1024) = *((_OWORD *)a3 + 2);
  *(_OWORD *)((char *)v8 + v9 + 1040) = *((_OWORD *)a3 + 3);
  *(_OWORD *)((char *)v8 + v9 + 1056) = *((_OWORD *)a3 + 4);
  v10 = *((_DWORD *)a3 + 7);
  if ( v10 == 2 || v10 == 4 )
  {
    *(_DWORD *)((char *)this[16] + v9 + 636) = *((_DWORD *)a3 + 1) + *(_DWORD *)((char *)this[16] + v9 + 628);
    v11 = this[16];
    v12 = *(_DWORD *)a3 + *(_DWORD *)((char *)v11 + v9 + 632);
  }
  else
  {
    *(_DWORD *)((char *)this[16] + v9 + 636) = *(_DWORD *)a3 + *(_DWORD *)((char *)this[16] + v9 + 628);
    v11 = this[16];
    v12 = *((_DWORD *)a3 + 1) + *(_DWORD *)((char *)v11 + v9 + 632);
  }
  *(_DWORD *)((char *)v11 + v9 + 640) = v12;
  v13 = this[58];
  if ( v13 )
    DXGDODPRESENT::UpdateDisplayModeInfo(v13, v4, (struct _D3DKMT_DISPLAYMODE *)((char *)this[16] + v9 + 992));
  *(_DWORD *)((char *)this[16] + v9 + 1116) = -1;
  *(_DWORD *)((char *)this[16] + v9 + 1120) = -1;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
  {
    if ( bTracingEnabled )
      McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer(
        *((_BYTE *)a3 + 36) & 1,
        v6,
        v7,
        (_DWORD)this,
        v4,
        *(_DWORD *)a3,
        *((_DWORD *)a3 + 1),
        *((_DWORD *)a3 + 2),
        *((_DWORD *)a3 + 4),
        *((_DWORD *)a3 + 5),
        *((_DWORD *)a3 + 6),
        *((_DWORD *)a3 + 7),
        *((_DWORD *)a3 + 8),
        *((_BYTE *)a3 + 36) & 1,
        *((_DWORD *)a3 + 11),
        *((_DWORD *)a3 + 12));
  }
}
