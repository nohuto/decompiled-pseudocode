/*
 * XREFs of GetDPITransformationMonitor @ 0x140044BBC
 * Callers:
 *     EditionDoPointerDPITransforms @ 0x140044B40 (EditionDoPointerDPITransforms.c)
 *     ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x14013A768 (-MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAP.c)
 *     ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x14020C134 (-xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z.c)
 *     PointerInfoCopyOutHelperInternal @ 0x140247670 (PointerInfoCopyOutHelperInternal.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1402E032C (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     _MonitorFromPoint @ 0x140091A70 (_MonitorFromPoint.c)
 */

__int64 __fastcall GetDPITransformationMonitor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 TopLevelWindow; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v8 = a1;
  v2 = a1;
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( TopLevelWindow )
  {
    v10 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 256LL), v5);
    if ( v10 )
    {
      v6 = *(_QWORD *)(a2 + 40);
      v9 = 0LL;
      PhysicalToLogicalDPIPoint(&v9, &v8, *(unsigned int *)(v6 + 288), &v10);
      if ( (unsigned int)PtInRect(*(_QWORD *)(a2 + 40) + 88LL) )
        return v10;
    }
    v2 = v8;
  }
  return MonitorFromPoint(v2, 2LL, 18LL);
}
