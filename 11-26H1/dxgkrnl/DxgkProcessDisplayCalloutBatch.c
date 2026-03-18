/*
 * XREFs of DxgkProcessDisplayCalloutBatch @ 0x140438A20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkSkipProcessingDisplayBatches @ 0x1400181CC (DxgkSkipProcessingDisplayBatches.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x14005A14C (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 *     ?Release@CDisplayScenarioContextCarrier@@QEAAXXZ @ 0x140061264 (-Release@CDisplayScenarioContextCarrier@@QEAAXXZ.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x140067E2C (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1400764D8 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 *     ?GetDisplayCalloutEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x140191960 (-GetDisplayCalloutEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403ABC4C (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1404109DC (-StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
 */

__int64 __fastcall DxgkProcessDisplayCalloutBatch(__int64 a1)
{
  int v2; // r12d
  struct DXGGLOBAL *Global; // r14
  __int64 result; // rax
  struct DXGGLOBAL *v5; // rax
  bool started; // al
  DISPLAY_CALLOUT_ENTRY *v7; // rbx
  bool v8; // r13
  int v9; // r15d
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT **v10; // rbp
  int v11; // eax
  bool v12; // bp
  int v13; // eax
  struct DXGGLOBAL *v14; // rax
  bool DisplayCalloutEntry; // al
  struct DXGFASTMUTEX *v16; // rbx
  _BYTE v17[16]; // [rsp+30h] [rbp-38h] BYREF
  DISPLAY_CALLOUT_ENTRY *v18; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  v18 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  if ( DxgkSkipProcessingDisplayBatches() )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 4560;
    v18 = 0LL;
    DxgkLogCodePointPacket(0x87u, 0, 0, 0, 0LL);
    *(_BYTE *)a1 |= 1u;
    return 0LL;
  }
  v5 = DXGGLOBAL::GetGlobal();
  started = DXGDISPLAYCALLOUTQUEUE::StartProcessingBatch((struct DXGGLOBAL *)((char *)v5 + 1824), &v18);
  v7 = v18;
  v8 = started;
  if ( !v18 )
    goto LABEL_22;
  v9 = 0;
  v10 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)(a1 + 24);
  while ( 1 )
  {
    CDisplayScenarioContextCarrier::Release(v10);
    *(_BYTE *)v10 = *((_BYTE *)v7 + 64);
    *(_QWORD *)(a1 + 32) = *((_QWORD *)v7 + 9);
    *((_BYTE *)v7 + 64) = 0;
    *((_QWORD *)v7 + 9) = 0LL;
    v11 = *((_DWORD *)v7 + 4);
    if ( v11 == 1 )
    {
      v2 = DxgkHandleMonitorEvent(
             *(struct _LUID *)((char *)v7 + 24),
             *((_DWORD *)v7 + 8),
             *((_DWORD *)v7 + 9),
             *((_QWORD *)v7 + 5),
             a1);
      v12 = v2 < 0 || (*(_BYTE *)a1 & 0x44) == 68;
      goto LABEL_11;
    }
    if ( v11 == 2 )
    {
      *(_BYTE *)a1 |= 4u;
      v13 = *((_DWORD *)v7 + 12);
      *(_BYTE *)a1 &= ~0x80u;
      v12 = 1;
      *(_DWORD *)(a1 + 4) = v13;
      *(_DWORD *)(a1 + 8) = *((_DWORD *)v7 + 10);
      *(_QWORD *)(a1 + 16) = *((_QWORD *)v7 + 3);
      RAPID_HPD_MANAGER::ExtendExistingHPDPeriod((__int64)Global + 305640, 2u, *((_QWORD *)v7 + 3));
LABEL_11:
      v9 = 1;
      goto LABEL_13;
    }
    v12 = v11 == 3;
LABEL_13:
    if ( *((_BYTE *)v7 + 20) )
      break;
    DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'(v7);
    if ( !v12 )
    {
      v14 = DXGGLOBAL::GetGlobal();
      DisplayCalloutEntry = DXGDISPLAYCALLOUTQUEUE::GetDisplayCalloutEntry(
                              (struct DXGGLOBAL *)((char *)v14 + 1824),
                              &v18);
      v7 = v18;
      v10 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)(a1 + 24);
      v8 = DisplayCalloutEntry;
      if ( v18 )
        continue;
    }
    goto LABEL_18;
  }
  *(_QWORD *)(a1 + 80) = (char *)v7 + 56;
LABEL_18:
  if ( v9 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 )
      RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
        (struct DXGGLOBAL *)((char *)Global + 305640),
        1u,
        (enum _DXGK_RAPID_HPD_TYPE *)(a1 + 40),
        (struct _GUID *)(a1 + 44),
        (struct _DXGK_RAPID_HPD_DIAG *)(a1 + 64));
  }
  v16 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1824);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, v16, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  *((_QWORD *)v16 + 8) = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
LABEL_22:
  result = (unsigned int)v2;
  *(_BYTE *)a1 = *(_BYTE *)a1 & 0xFE | !v8;
  return result;
}
