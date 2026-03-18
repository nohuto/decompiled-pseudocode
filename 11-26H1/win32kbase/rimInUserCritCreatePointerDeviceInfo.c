/*
 * XREFs of rimInUserCritCreatePointerDeviceInfo @ 0x14007C0AC
 * Callers:
 *     rimDoRimDevChangeAsyncWorkItem @ 0x140096618 (rimDoRimDevChangeAsyncWorkItem.c)
 * Callees:
 *     RIMSetDeviceOutputConfig @ 0x14007B81C (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x14007C5BC (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMGetQDCActivePathsData @ 0x14007CE38 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x14007D080 (RIMFreeQDCActivePathsData.c)
 *     HMValidateSharedHandleNoRip @ 0x140082658 (HMValidateSharedHandleNoRip.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140192A90 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     RIMGetMonitorPhysicalSize @ 0x140205BA0 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x140205D48 (RIMReadDigitizerToMonitorMappings.c)
 */

__int64 __fastcall rimInUserCritCreatePointerDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi
  __int64 v5; // rbp
  int v6; // eax
  __int64 v8; // rax
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  v2 = *(_QWORD *)(a2 + 456);
  v10 = 0LL;
  v4 = 0;
  v5 = RIMGetQDCActivePathsData(&v10);
  v6 = *(_DWORD *)(v2 + 24);
  if ( v6 != 7 && v6 != 6 )
  {
    LODWORD(v12) = 0;
    *(_DWORD *)(a2 + 1328) = 1;
    RIMReadDigitizerToMonitorMappings(a2);
    rimFindMonitorForDigitizerWithQDCData(a2, v5, &v12);
  }
  if ( *(_DWORD *)(v2 + 148) - *(_DWORD *)(v2 + 140) <= 1 || *(_DWORD *)(v2 + 152) - *(_DWORD *)(v2 + 144) <= 1 )
  {
    v8 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1336));
    *(_OWORD *)(v2 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize(v11, v8);
  }
  RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v2, 0, v5);
  if ( *(_DWORD *)(v2 + 24) == 7 )
  {
    v9 = CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v2);
    if ( v9 < 0 )
      v9 = -1073741668;
    v4 = v9;
  }
  RIMFreeQDCActivePathsData(v5);
  return v4;
}
