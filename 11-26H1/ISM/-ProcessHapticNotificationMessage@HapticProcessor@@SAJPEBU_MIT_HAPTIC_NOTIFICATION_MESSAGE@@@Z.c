/*
 * XREFs of ?ProcessHapticNotificationMessage@HapticProcessor@@SAJPEBU_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@Z @ 0x1800CA110
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_114e43d0f2b3355c45e38d94700236e9__void__MIT_HAPTIC_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x1800F3B50 (std--_Func_impl_no_alloc__lambda_114e43d0f2b3355c45e38d94700236e9__void__MIT_HAPTIC_ea_1800F3B50.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C8028 (--1-$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@.c)
 *     ?PlayWaveformOnController@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@IIAEBUtagINPUT_HAPTIC_SETTINGS@@@Z @ 0x1800C9F20 (-PlayWaveformOnController@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINP.c)
 *     ?ProcessHapticNotificationMessage@Haptics@InputTraceLogging@@SAXW4_MIT_HAPTIC_NOTIFICATION_MESSAGE_ID@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800CA214 (-ProcessHapticNotificationMessage@Haptics@InputTraceLogging@@SAXW4_MIT_HAPTIC_NOTIFICATION_MESSA.c)
 *     ?TryFindControllerForInput@HapticProcessor@@CAJPEBUtagINPUT_MESSAGE_DATA@@PEAPEAVBamoSimpleHapticsControllerPrincipal@@PEAW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEAI@Z @ 0x1800CAA28 (-TryFindControllerForInput@HapticProcessor@@CAJPEBUtagINPUT_MESSAGE_DATA@@PEAPEAVBamoSimpleHapti.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HapticProcessor::ProcessHapticNotificationMessage(const struct _MIT_HAPTIC_NOTIFICATION_MESSAGE *a1)
{
  const char *v2; // r9
  unsigned int v3; // ebx
  int ControllerForInput; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  tagINPUT_MESSAGE_DEVICE_TYPE v10; // [rsp+58h] [rbp+10h] BYREF
  struct BamoSimpleHapticsControllerPrincipal *v11; // [rsp+60h] [rbp+18h] BYREF

  InputTraceLogging::Haptics::ProcessHapticNotificationMessage(*(unsigned int *)a1, *((unsigned int *)a1 + 16));
  if ( !*(_DWORD *)a1 )
  {
LABEL_5:
    v3 = 4114;
    goto LABEL_6;
  }
  if ( *(_DWORD *)a1 != 1 && *(_DWORD *)a1 != 2 )
  {
    if ( (unsigned int)(*(_DWORD *)a1 - 3) > 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xE3,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
        v2);
    goto LABEL_5;
  }
  v3 = 4104;
LABEL_6:
  v10 = IMDT_UNAVAILABLE;
  v9 = 0;
  v11 = 0LL;
  ControllerForInput = HapticProcessor::TryFindControllerForInput(
                         (const struct _MIT_HAPTIC_NOTIFICATION_MESSAGE *)((char *)a1 + 8),
                         &v11,
                         &v10,
                         &v9);
  v5 = ControllerForInput;
  if ( ControllerForInput < 0 )
  {
    v6 = 234LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
      (const char *)(unsigned int)ControllerForInput);
    wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v11);
    return v5;
  }
  if ( v11 )
  {
    ControllerForInput = HapticProcessor::PlayWaveformOnController(
                           v11,
                           v10,
                           v3,
                           v9,
                           (const struct _MIT_HAPTIC_NOTIFICATION_MESSAGE *)((char *)a1 + 80));
    v5 = ControllerForInput;
    if ( ControllerForInput < 0 )
    {
      v6 = 242LL;
      goto LABEL_12;
    }
  }
  wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v11);
  return 0LL;
}
