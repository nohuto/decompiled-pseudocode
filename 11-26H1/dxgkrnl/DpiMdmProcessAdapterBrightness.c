/*
 * XREFs of DpiMdmProcessAdapterBrightness @ 0x140090678
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x140076F6C (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     _DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A1C8 (_DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?GetInternalPanelInfo@DISPLAY_MUX_MGR@@QEBA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z @ 0x14008C580 (-GetInternalPanelInfo@DISPLAY_MUX_MGR@@QEBA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x14008CDC4 (-IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z.c)
 *     ?SetInternalPanelInfo@DISPLAY_MUX_MGR@@QEAA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z @ 0x14008F554 (-SetInternalPanelInfo@DISPLAY_MUX_MGR@@QEAA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z.c)
 *     DpiDxgkDdiDisplayMuxSetInternalPanelInfo @ 0x14009421C (DpiDxgkDdiDisplayMuxSetInternalPanelInfo.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     memcmp @ 0x1400A6320 (memcmp.c)
 *     ?DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x14024D810 (-DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024D910 (-DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 */

void __fastcall DpiMdmProcessAdapterBrightness(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // r8d
  struct _LUID v4; // rdx
  __int64 v5; // rdi
  unsigned __int8 v6[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v7; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v8; // [rsp+60h] [rbp-A0h] BYREF
  char v9; // [rsp+68h] [rbp-98h]
  _BYTE Buf2[224]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE Buf1[224]; // [rsp+150h] [rbp+50h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4040;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(FunctionalDeviceObject)",
      4040LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = *(_QWORD *)(a1 + 64);
  v7 = v2;
  if ( *(_DWORD *)(v2 + 6024) != 1 && *(_DWORD *)(v2 + 6032) == 1 )
  {
    v3 = *(_DWORD *)(v2 + 6376);
    v4 = *(struct _LUID *)(v2 + 6036);
    v8 = &v7;
    v9 = 1;
    v6[0] = 0;
    if ( (int)DISPLAY_MUX_MGR::IsTargetPartOfMux(qword_140169448, v4, v3, v6, 0LL) < 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 4073;
      *(_DWORD *)(v7 + 6032) = 9;
LABEL_48:
      DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v8);
      return;
    }
    if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
    {
      memset(Buf1, 0, 0xD1uLL);
      if ( DISPLAY_MUX_MGR::GetInternalPanelInfo(
             qword_140169448,
             (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)Buf1) )
      {
        if ( (int)DpiDxgkDdiDisplayMuxSetInternalPanelInfo(v7, *(unsigned int *)(v7 + 6376), Buf1) < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4088;
LABEL_11:
          *(_DWORD *)(v7 + 6032) = 15;
          goto LABEL_48;
        }
        *(_BYTE *)(v7 + 6441) = 1;
      }
      else
      {
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 4098;
      }
      if ( v6[0] )
      {
        memset(Buf2, 0, 0xD1uLL);
        if ( *(_WORD *)(v7 + 4810) == 3 )
        {
          Buf2[0] = 1;
          if ( (int)DpiBrightness3GetCaps(
                      *(void **)(v7 + 24),
                      *(_DWORD *)(v7 + 6376),
                      (struct _DXGK_BRIGHTNESS_CAPS *)&Buf2[1]) < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 4114;
LABEL_18:
            *(_DWORD *)(v7 + 6032) = 12;
            goto LABEL_48;
          }
          if ( DpiBrightness3GetNitRanges(
                 *(void **)(v7 + 24),
                 *(_DWORD *)(v7 + 6376),
                 (struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *)&Buf2[5]) < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 4122;
LABEL_21:
            *(_DWORD *)(v7 + 6032) = 13;
            goto LABEL_48;
          }
        }
        if ( !DISPLAY_MUX_MGR::SetInternalPanelInfo(
                qword_140169448,
                (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)Buf2)
          && memcmp(Buf1, Buf2, 0xD1uLL) )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 4136;
          goto LABEL_25;
        }
      }
      else
      {
        v5 = v7;
        if ( *(_BYTE *)(v7 + 6441) )
          goto LABEL_48;
        memset(Buf2, 0, 0xD1uLL);
        if ( !DISPLAY_MUX_MGR::GetInternalPanelInfo(
                qword_140169448,
                (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)Buf2) )
        {
          WdLogSingleEntry0(4LL);
          WdLogGlobalForLineNumber = 4172;
          goto LABEL_48;
        }
        if ( (int)DpiDxgkDdiDisplayMuxSetInternalPanelInfo(v5, *(unsigned int *)(v5 + 6376), Buf2) < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4162;
          goto LABEL_11;
        }
      }
    }
    else if ( v6[0] )
    {
      memset(Buf2, 0, 0xD1uLL);
      if ( *(_WORD *)(v7 + 4810) == 3 )
      {
        Buf2[0] = 1;
        if ( (int)DpiBrightness3GetCaps(
                    *(void **)(v7 + 24),
                    *(_DWORD *)(v7 + 6376),
                    (struct _DXGK_BRIGHTNESS_CAPS *)&Buf2[1]) < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4193;
          goto LABEL_18;
        }
        if ( DpiBrightness3GetNitRanges(
               *(void **)(v7 + 24),
               *(_DWORD *)(v7 + 6376),
               (struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *)&Buf2[5]) < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4201;
          goto LABEL_21;
        }
      }
      if ( !DISPLAY_MUX_MGR::SetInternalPanelInfo(
              qword_140169448,
              (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)Buf2) )
      {
        memset(Buf1, 0, 0xD1uLL);
        DISPLAY_MUX_MGR::GetInternalPanelInfo(qword_140169448, (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)Buf1);
        if ( memcmp(Buf1, Buf2, 0xD1uLL) )
        {
          if ( !(unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline() )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 4227;
            goto LABEL_26;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 4219;
LABEL_25:
          if ( byte_1401694F3 )
            goto LABEL_48;
LABEL_26:
          *(_DWORD *)(v7 + 6032) = 14;
          goto LABEL_48;
        }
      }
    }
    else
    {
      memset(Buf1, 0, 0xD1uLL);
      if ( !DISPLAY_MUX_MGR::GetInternalPanelInfo(
              qword_140169448,
              (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)Buf1) )
      {
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 4258;
        goto LABEL_48;
      }
      if ( (int)DpiDxgkDdiDisplayMuxSetInternalPanelInfo(v7, *(unsigned int *)(v7 + 6376), Buf1) < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4248;
        goto LABEL_11;
      }
    }
    *(_BYTE *)(v7 + 6441) = 1;
    goto LABEL_48;
  }
}
