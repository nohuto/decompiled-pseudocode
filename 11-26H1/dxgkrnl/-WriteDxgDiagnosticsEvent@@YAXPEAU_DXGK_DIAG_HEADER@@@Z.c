/*
 * XREFs of ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000B688
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000BBFC (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?WriteDxgDiagnosticsEvent_HPD@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1400475C4 (-WriteDxgDiagnosticsEvent_HPD@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_BML_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1400476AC (-WriteDxgDiagnosticsEvent_BML_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140047734 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_SetTimingsFromVidPnSourceMasksPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140047898 (-WriteDxgDiagnosticsEvent_SetTimingsFromVidPnSourceMasksPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1400483E8 (-WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140048778 (-WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140048FD8 (-WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140049A7C (-WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_MGR@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14005C798 (-WriteDxgDiagnosticsEvent_MONITOR_MGR@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14005D408 (-WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS_EX@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1400608E8 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS_EX@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CCD_DATABASE_ACCESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1400611C8 (-WriteDxgDiagnosticsEvent_CCD_DATABASE_ACCESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140061C50 (-WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140062364 (-WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_USER_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140063360 (-WriteDxgDiagnosticsEvent_USER_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_ADAPTER_START2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14007AE08 (-WriteDxgDiagnosticsEvent_ADAPTER_START2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14007AF80 (-WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14007B010 (-WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14007B170 (-WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DRV_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14007B200 (-WriteDxgDiagnosticsEvent_DRV_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MESSAGE_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14007B290 (-WriteDxgDiagnosticsEvent_MESSAGE_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14007B310 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14007B3A0 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14007B430 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14007B4C0 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14007B550 (-WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

void __fastcall WriteDxgDiagnosticsEvent(struct _DXGK_DIAG_HEADER *a1)
{
  int v1; // edx
  const wchar_t *v3; // r9
  bool v4; // zf
  int v5; // ecx

  v1 = *(_DWORD *)a1;
  if ( *(int *)a1 <= 30 )
  {
    if ( v1 == 30 )
    {
      WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID(a1);
      return;
    }
    if ( v1 > 14 )
    {
      if ( v1 <= 22 )
      {
        switch ( v1 )
        {
          case 22:
            goto LABEL_37;
          case 15:
            WriteDxgDiagnosticsEvent_OUTPUTDUPL(a1);
            return;
          case 16:
            WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS(a1);
            return;
          case 17:
            goto LABEL_37;
          case 18:
            WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE(a1);
            return;
          case 19:
            WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START(a1);
            return;
        }
        v4 = v1 == 21;
        goto LABEL_36;
      }
      switch ( v1 )
      {
        case 23:
          goto LABEL_37;
        case 24:
          WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2(a1);
          return;
        case 25:
          WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS_EX(a1);
          return;
      }
      if ( v1 != 27 && v1 != 28 )
      {
        if ( v1 == 29 )
        {
          WriteDxgDiagnosticsEvent_MESSAGE_PACKET(a1);
          return;
        }
        goto LABEL_92;
      }
    }
    else
    {
      if ( v1 == 14 )
        goto LABEL_37;
      if ( v1 <= 7 )
      {
        if ( v1 != 7 )
        {
          if ( !v1 )
          {
            WdLogSingleEntry1(1LL);
            v3 = L"DXGK_DIAG_TYPE_NONE (0x%lx), being logged but it never should";
            WdLogGlobalForLineNumber = 1441;
LABEL_93:
            DxgkLogInternalTriageEvent(0, 262146, -1, (_DWORD)v3, *(int *)a1, 0LL, 0LL, 0LL, 0LL);
            return;
          }
          if ( v1 != 1 )
          {
            switch ( v1 )
            {
              case 2:
                WriteDxgDiagnosticsEvent_HPD(a1);
                return;
              case 3:
                WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN(a1);
                return;
              case 4:
                WriteDxgDiagnosticsEvent_USER_CDS(a1);
                return;
              case 5:
                WriteDxgDiagnosticsEvent_DRV_CDS(a1);
                return;
              case 6:
                WriteDxgDiagnosticsEvent_CODE_POINT(a1);
                return;
            }
            goto LABEL_92;
          }
        }
        goto LABEL_37;
      }
      if ( v1 == 8 )
      {
        WriteDxgDiagnosticsEvent_MONITOR_MGR(a1);
        return;
      }
      if ( v1 == 9 )
      {
        WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND(a1);
        return;
      }
      if ( v1 != 10 )
      {
        if ( v1 == 11 || v1 == 12 )
          goto LABEL_37;
        v4 = v1 == 13;
LABEL_36:
        if ( v4 )
          goto LABEL_37;
LABEL_92:
        WdLogSingleEntry1(1LL);
        v3 = L"Unrecognized diag type 0x%lx, being logged";
        WdLogGlobalForLineNumber = 1682;
        goto LABEL_93;
      }
    }
LABEL_71:
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1639;
    return;
  }
  if ( v1 <= 45 )
  {
    if ( v1 == 45 )
    {
      WriteDxgDiagnosticsEvent_SetTimingsFromVidPnSourceMasksPacket(a1);
      return;
    }
    if ( v1 <= 38 )
    {
      if ( v1 != 38 && v1 != 31 && v1 != 32 && v1 != 33 )
      {
        switch ( v1 )
        {
          case '"':
            WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN(a1);
            return;
          case '$':
            WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET(a1);
            return;
          case '%':
            WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED(a1);
            return;
        }
        goto LABEL_92;
      }
      goto LABEL_37;
    }
    switch ( v1 )
    {
      case '\'':
LABEL_37:
        WdLogSingleEntry1(1LL);
        v3 = L"Obsolete diag type 0x%lx, being logged";
        WdLogGlobalForLineNumber = 1618;
        goto LABEL_93;
      case '(':
        WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3(a1);
        return;
      case ')':
        WriteDxgDiagnosticsEvent_ADAPTER_START2(a1);
        return;
      case '*':
        goto LABEL_71;
    }
    v5 = v1 - 43;
    if ( v1 == 43 )
    {
      WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket(a1);
      return;
    }
    goto LABEL_70;
  }
  if ( v1 <= 52 )
  {
    switch ( v1 )
    {
      case '4':
        return;
      case '.':
        goto LABEL_37;
      case '/':
        WriteDxgDiagnosticsEvent_SDC(a1);
        return;
      case '0':
        WriteDxgDiagnosticsEvent_QDC(a1);
        return;
      case '1':
        WriteDxgDiagnosticsEvent_CCD_DATABASE_ACCESS(a1);
        return;
    }
    v5 = v1 - 50;
    if ( v1 == 50 )
    {
      WriteDxgDiagnosticsEvent_BML_PACKET(a1);
      return;
    }
LABEL_70:
    if ( v5 != 1 )
      goto LABEL_92;
    goto LABEL_71;
  }
  if ( v1 != 53 && v1 != 54 && v1 != 55 && v1 != 56 && (unsigned int)(v1 - 57) >= 2 )
    goto LABEL_92;
}
