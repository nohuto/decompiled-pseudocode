/*
 * XREFs of ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x14042B634
 * Callers:
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x140279F70 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?EDID_V1_GetExtractedDisplayIdBlobSize@@YAKKPEBE@Z @ 0x14006D95C (-EDID_V1_GetExtractedDisplayIdBlobSize@@YAKKPEBE@Z.c)
 *     ??4?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140098C40 (--4-$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U-$default_delete@UIMonitorDescriptor@DxgMonitor.c)
 *     ??_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x140099720 (--_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ?EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z @ 0x14009DD38 (-EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x140281218 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::ExtractFromEdid(
        unsigned __int8 **a1,
        unsigned int a2,
        __int64 (__fastcall ****a3)(_QWORD, __int64))
{
  unsigned int ExtractedDisplayIdBlobSize; // r14d
  void *v7; // rax
  int DisplayIdBlob; // ebx
  unsigned __int8 *v9; // rdx
  __int64 v10; // rax
  void *v12; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-18h]
  __int128 v14; // [rsp+2Ch] [rbp-14h]
  int v15; // [rsp+3Ch] [rbp-4h]
  DxgMonitor::DisplayIdMonitorDescriptor *v16; // [rsp+60h] [rbp+20h] BYREF
  void *v17; // [rsp+78h] [rbp+38h] BYREF

  ExtractedDisplayIdBlobSize = EDID_V1_GetExtractedDisplayIdBlobSize(a2, *a1);
  v7 = (void *)operator new[](ExtractedDisplayIdBlobSize, 0x4D677844u, 256LL);
  v17 = v7;
  if ( v7 )
  {
    v9 = *a1;
    v15 = 0;
    v12 = v7;
    v14 = 0LL;
    v13 = ExtractedDisplayIdBlobSize;
    DisplayIdBlob = EDID_V1_ExtractDisplayIdBlob(a2, v9, (struct DisplayIDObj *)&v12);
    if ( DisplayIdBlob >= 0 )
    {
      v10 = operator new(0x48uLL, 0x4D677844u, 256LL);
      if ( v10
        && (v16 = (DxgMonitor::DisplayIdMonitorDescriptor *)DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(
                                                              v10,
                                                              &v17,
                                                              v13)) != 0LL )
      {
        wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::operator=(
          a3,
          (__int64 (__fastcall ****)(_QWORD, __int64))&v16);
        if ( v16 )
          DxgMonitor::DisplayIdMonitorDescriptor::`scalar deleting destructor'(v16, 1);
        DisplayIdBlob = 0;
      }
      else
      {
        DisplayIdBlob = -1073741801;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 91;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 85;
    }
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v17);
  }
  else
  {
    DisplayIdBlob = -1073741801;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 79;
  }
  return (unsigned int)DisplayIdBlob;
}
