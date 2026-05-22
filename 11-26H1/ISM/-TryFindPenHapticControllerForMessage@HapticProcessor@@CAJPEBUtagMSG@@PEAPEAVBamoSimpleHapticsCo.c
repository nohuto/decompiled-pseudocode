/*
 * XREFs of ?TryFindPenHapticControllerForMessage@HapticProcessor@@CAJPEBUtagMSG@@PEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CAD94
 * Callers:
 *     ?TryFindControllerForInput@HapticProcessor@@CAJPEBUtagINPUT_MESSAGE_DATA@@PEAPEAVBamoSimpleHapticsControllerPrincipal@@PEAW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEAI@Z @ 0x1800CAA28 (-TryFindControllerForInput@HapticProcessor@@CAJPEBUtagINPUT_MESSAGE_DATA@@PEAPEAVBamoSimpleHapti.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??0?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800C7EA4 (--0-$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEA.c)
 *     ??1?$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C8028 (--1-$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@.c)
 *     ?TryFindPenDeviceForUniqueId@HapticDeviceManager@@QEAAXU_GUID@@PEAPEAVPenDevice@@@Z @ 0x180191C20 (-TryFindPenDeviceForUniqueId@HapticDeviceManager@@QEAAXU_GUID@@PEAPEAVPenDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HapticProcessor::TryFindPenHapticControllerForMessage(
        const struct tagMSG *a1,
        struct BamoSimpleHapticsControllerPrincipal **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 message; // r8
  bool v7; // cl
  unsigned __int16 wParam; // ax
  struct InputSystemServerConnection *BamoServerConnection; // rax
  void (__fastcall ***v10)(_QWORD); // rax
  void (__fastcall ***v11)(_QWORD); // rax
  struct BamoSimpleHapticsControllerPrincipal *v12; // rax
  struct PenDevice *v14; // [rsp+20h] [rbp-40h] BYREF
  HapticDeviceManager *v15; // [rsp+28h] [rbp-38h] BYREF
  struct _GUID v16; // [rsp+30h] [rbp-30h] BYREF
  GUID v17; // [rsp+40h] [rbp-20h] BYREF

  message = a1->message;
  LOBYTE(a4) = 1;
  v7 = (unsigned int)message >= 0x245 && (unsigned int)message <= 0x257 || (unsigned int)(message - 577) <= 3;
  if ( (unsigned int)(message - 512) > 0xE && (unsigned int)(message - 160) > 0xD )
    LOBYTE(a4) = 0;
  if ( v7 )
  {
    wParam = a1->wParam;
  }
  else
  {
    if ( !(_BYTE)a4 )
      return 0LL;
    wParam = GetPointerIdForPromotion();
  }
  if ( wParam )
  {
    v17 = GUID_NULL;
    if ( (unsigned int)GetPointerProprietaryId(wParam, &v17, message, a4) )
    {
      BamoServerConnection = ISMStatics::GetBamoServerConnection();
      v10 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                            + 31)
                                                                                          + 8LL)
                                                                              + 168LL))(*((_QWORD *)BamoServerConnection
                                                                                        + 31) + 8LL);
      wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>(
        &v15,
        v10);
      if ( v15 )
      {
        v14 = 0LL;
        v16 = v17;
        HapticDeviceManager::TryFindPenDeviceForUniqueId(v15, &v16, &v14);
        if ( v14 )
        {
          v11 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(char *))(*((_QWORD *)v14 + 1) + 40LL))((char *)v14 + 8);
          wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>(
            &v16,
            v11);
          v12 = *(struct BamoSimpleHapticsControllerPrincipal **)&v16.Data1;
          *(_QWORD *)&v16.Data1 = 0LL;
          *a2 = v12;
          wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v16);
        }
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v14);
      }
      wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v15);
    }
  }
  return 0LL;
}
