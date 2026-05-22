/*
 * XREFs of ?CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x1801CA22C
 * Callers:
 *     ?RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801CA620 (-RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180098C24 (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B5E0C (--1-$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVHapticDeviceManager@@@Z @ 0x1800C7ED4 (--0-$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVHapticDeviceMana.c)
 *     ??4?$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVHapticDeviceManager@@@Z @ 0x1800C8080 (--4-$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVHapticDevi.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800E772C (--1-$unique_storage@U-$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1-HidD_FreePrepars.c)
 *     ??0HapticDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18018D88C (--0HapticDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?AttachHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@4@@Z @ 0x18018E0A4 (-AttachHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@$$QEAV-$unique_any_t@V-$un.c)
 *     ?HasManualTriggerHaptic@CompliantHapticInterface@@SA_NPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x18019DF98 (-HasManualTriggerHaptic@CompliantHapticInterface@@SA_NPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall PTPProcessor::CheckForHapticTouchpadArrival(PTPProcessor *this, const WCHAR *a2)
{
  HANDLE FileW; // rax
  struct InputSystemServerConnection *BamoServerConnection; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  HapticDeviceManager *v7; // rax
  PTPProcessor *v8; // [rsp+70h] [rbp+28h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+78h] [rbp+30h] BYREF
  void *v10; // [rsp+80h] [rbp+38h] BYREF
  HapticDeviceManager *v11; // [rsp+88h] [rbp+40h]

  v8 = this;
  if ( !*((_BYTE *)a2 + 12) )
  {
    FileW = CreateFileW(a2 + 38, 0x40000000u, 3u, 0LL, 3u, 0, 0LL);
    v10 = FileW;
    PreparsedData = 0LL;
    if ( FileW != (HANDLE)-1LL
      && FileW
      && HidD_GetPreparsedData(FileW, &PreparsedData)
      && CompliantHapticInterface::HasManualTriggerHaptic(PreparsedData) )
    {
      BamoServerConnection = ISMStatics::GetBamoServerConnection();
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 168LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
      wil::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>(
        &v8,
        v5);
      v6 = (__int64)v8;
      if ( !v8 )
      {
        v11 = (HapticDeviceManager *)operator new(0xA0uLL);
        v7 = HapticDeviceManager::HapticDeviceManager(v11, BamoServerConnection);
        wil::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>::operator=((__int64 *)&v8, (__int64)v7);
        v6 = (__int64)v8;
        (*(void (__fastcall **)(__int64, PTPProcessor *))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL)
                                                        + 176LL))(
          *((_QWORD *)BamoServerConnection + 31) + 8LL,
          v8);
      }
      HapticDeviceManager::AttachHapticTouchpad(v6, (__int64)a2);
      wil::com_ptr_t<MPCManager,wil::err_exception_policy>::~com_ptr_t<MPCManager,wil::err_exception_policy>((__int64 *)&v8);
    }
    wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>(&PreparsedData);
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v10);
  }
}
