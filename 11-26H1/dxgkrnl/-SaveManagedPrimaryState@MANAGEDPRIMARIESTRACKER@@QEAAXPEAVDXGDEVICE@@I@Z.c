/*
 * XREFs of ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x14042F984
 * Callers:
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401C25AC (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140359E70 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x140010BA4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140046328 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1400580CC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14005B4F8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1400A56A4 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     ?IsAllocationPinnableOrNoNeedPin@DXGDEVICE@@QEAAHIPEBVDXGALLOCATION@@@Z @ 0x14042DCDC (-IsAllocationPinnableOrNoNeedPin@DXGDEVICE@@QEAAHIPEBVDXGALLOCATION@@@Z.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState(
        MANAGEDPRIMARIESTRACKER *this,
        struct DXGDEVICE *a2,
        int a3)
{
  __int64 v6; // rdi
  int v7; // eax
  struct DXGDEVICE *VidPnSourceOwner; // rax
  struct _KTHREAD **v9; // rbp
  int v10; // r8d
  const struct DXGALLOCATION *DisplayedPrimary; // rax
  const struct DXGALLOCATION *v12; // r14
  int v13; // ebp
  _BYTE v14[32]; // [rsp+50h] [rbp-38h] BYREF

  if ( !*(_QWORD *)this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 77;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pDisplayCore != NULL", 77LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 80;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pDisplayCore->IsCoreResourceExclusiveOwner()",
      80LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = 0LL;
  v7 = *((_DWORD *)this + 104) | 4;
  *((_DWORD *)this + 104) = v7;
  if ( (v7 & 0xFFFFFFF8) != 0 )
  {
    while ( 1 )
    {
      *((_QWORD *)this + v6 + 2) = 0LL;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)this, v6) - 1 > 1 )
        goto LABEL_15;
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*(ADAPTER_DISPLAY **)this, v6);
      v9 = (struct _KTHREAD **)VidPnSourceOwner;
      if ( a2 == VidPnSourceOwner )
      {
        if ( _bittest(&a3, v6) )
          goto LABEL_15;
      }
      *((_QWORD *)this + v6 + 2) = VidPnSourceOwner;
      v10 = *((_DWORD *)this + v6 + 84) ^ ((unsigned __int16)*((_DWORD *)this + v6 + 84) ^ (unsigned __int16)((unsigned __int8)BYTE1(*((_DWORD *)VidPnSourceOwner + v6 + 310)) << 8)) & 0x100;
      *((_DWORD *)this + v6 + 84) = v10;
      *((_DWORD *)this + v6 + 84) = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int8)(*((_DWORD *)VidPnSourceOwner + v6 + 310) >> 9) << 9)) & 0x200;
      DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)VidPnSourceOwner, v6);
      v12 = DisplayedPrimary;
      if ( !DisplayedPrimary )
        goto LABEL_13;
      if ( !(unsigned int)DXGDEVICE::IsAllocationPinnableOrNoNeedPin((DXGDEVICE *)v9, v6, DisplayedPrimary) )
        break;
      *((_QWORD *)this + v6 + 18) = v12;
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v14, v9 + 38);
      v13 = *((_DWORD *)v9 + v6 + 294);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
LABEL_14:
      *((_DWORD *)this + (unsigned int)v6 + 68) = v13;
      *((_BYTE *)this + v6 + 400) = ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)this, v6);
LABEL_15:
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)this + 104) >> 3 )
        return;
    }
    MicrosoftTelemetryAssertTriggeredMsgKM((__int64)"Displayed Primary is not in the primary allocation list during SaveM"
                                                    "anagedPrimaryState.");
LABEL_13:
    *((_QWORD *)this + v6 + 18) = 0LL;
    v13 = 0;
    goto LABEL_14;
  }
}
