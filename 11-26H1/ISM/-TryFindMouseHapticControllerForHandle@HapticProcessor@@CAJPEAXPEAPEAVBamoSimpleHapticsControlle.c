/*
 * XREFs of ?TryFindMouseHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CABBC
 * Callers:
 *     ?TryFindControllerForInput@HapticProcessor@@CAJPEBUtagINPUT_MESSAGE_DATA@@PEAPEAVBamoSimpleHapticsControllerPrincipal@@PEAW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEAI@Z @ 0x1800CAA28 (-TryFindControllerForInput@HapticProcessor@@CAJPEBUtagINPUT_MESSAGE_DATA@@PEAPEAVBamoSimpleHapti.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?GetItemAt@?$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_ActivatableEntityPrincipal_Stub@3456@$00$0A@$0A@@Bamo@Microsoft@@QEAAPEAVBamoActivatableEntityPrincipal@@I@Z @ 0x180028078 (-GetItemAt@-$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPr.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009C94C (--_U@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800C7EA4 (--0-$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEA.c)
 *     ??1?$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C8028 (--1-$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HapticProcessor::TryFindMouseHapticControllerForHandle(
        HANDLE hDevice,
        struct BamoSimpleHapticsControllerPrincipal **a2)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  void (__fastcall ***v5)(_QWORD); // rax
  __int64 v6; // rbx
  unsigned int LastError; // edi
  const char *v8; // r9
  void *v9; // r13
  const char *v10; // r9
  const struct std::nothrow_t *v11; // rdx
  void (__fastcall ***v12)(_QWORD); // rax
  _QWORD *v13; // rbx
  __int64 v14; // r14
  unsigned int v15; // esi
  void (__fastcall ***ItemAt)(_QWORD); // rax
  struct BamoSimpleHapticsControllerPrincipal *v17; // r15
  unsigned __int16 *v18; // rax
  signed __int64 v19; // r8
  int v20; // edx
  int v21; // ecx
  _QWORD *v23; // [rsp+20h] [rbp-20h] BYREF
  void *v24; // [rsp+28h] [rbp-18h] BYREF
  __int64 v25[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  unsigned int pcbSize; // [rsp+90h] [rbp+50h] BYREF
  struct BamoSimpleHapticsControllerPrincipal *v28; // [rsp+98h] [rbp+58h] BYREF

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v5 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                       + 31)
                                                                                     + 8LL)
                                                                         + 168LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>(
    v25,
    v5);
  v6 = v25[0];
  LastError = 0;
  if ( v25[0] )
  {
    pcbSize = 0;
    if ( GetRawInputDeviceInfoW(hDevice, 0x20000007u, 0LL, &pcbSize) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x1AF,
                    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hap"
                         "ticprocessor.cpp",
                    v8);
    }
    else
    {
      v9 = operator new[](saturated_mul(pcbSize, 2uLL));
      v24 = v9;
      if ( GetRawInputDeviceInfoW(hDevice, 0x20000007u, v9, &pcbSize) )
      {
        v12 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v6 + 8) + 56LL))(v6 + 8);
        wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>(
          &v23,
          v12);
        v13 = v23;
        v14 = (__int64)(v23[8] - v23[7]) >> 3;
        v15 = 0;
        if ( (_DWORD)v14 )
        {
          while ( 1 )
          {
            ItemAt = (void (__fastcall ***)(_QWORD))Microsoft::Bamo::ListPrincipalDetails<BamoActivatableEntityPrincipal,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,1,0,0>::GetItemAt(
                                                      v13,
                                                      v15);
            wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>(
              &v28,
              ItemAt);
            v17 = v28;
            v18 = (unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v28 + 1) + 40LL))((_QWORD *)v28 + 1);
            v19 = (_BYTE *)v9 - (_BYTE *)v18;
            do
            {
              v20 = *(unsigned __int16 *)((char *)v18 + v19);
              v21 = *v18 - v20;
              if ( v21 )
                break;
              ++v18;
            }
            while ( v20 );
            if ( !v21 )
              break;
            wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v28);
            if ( ++v15 >= (unsigned int)v14 )
              goto LABEL_14;
          }
          v28 = 0LL;
          *a2 = v17;
          wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v28);
        }
LABEL_14:
        wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v23);
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x1B1,
                      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\h"
                           "apticprocessor.cpp",
                      v10);
      }
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v24, v11);
    }
  }
  wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>(v25);
  return LastError;
}
