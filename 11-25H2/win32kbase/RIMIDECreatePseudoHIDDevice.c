/*
 * XREFs of RIMIDECreatePseudoHIDDevice @ 0x1401E90CC
 * Callers:
 *     RIMIDE_CreateGenericHidDevice @ 0x14019CF94 (RIMIDE_CreateGenericHidDevice.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1401EBD7C (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1401EBEA8 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14013B930 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     RIMIDECreateDeviceInstancePath @ 0x14014FF4C (RIMIDECreateDeviceInstancePath.c)
 *     rimFindReferencedRimObj @ 0x1401D7200 (rimFindReferencedRimObj.c)
 *     rimInputTypeFromDeviceTypeAndUsages @ 0x1401D7380 (rimInputTypeFromDeviceTypeAndUsages.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401D8A10 (RIMAddInjectionDeviceOfType.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1401E6D70 (RawInputManagerObjectCreateKernelHandle.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall RIMIDECreatePseudoHIDDevice(
        unsigned __int16 a1,
        __int16 a2,
        int a3,
        int a4,
        __int64 a5,
        PHIDP_DEVICE_DESC DeviceDescription,
        int a7,
        char a8,
        int a9,
        __int64 a10,
        __int64 *a11)
{
  __int64 v14; // rcx
  int ReferencedRimObj; // esi
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int16 v18; // r8
  bool v19; // bl
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v26; // rdx
  char v27; // r15
  bool v28; // r12
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  void *v33; // rcx
  __int64 v34; // rdx
  bool v35; // r14
  __int64 UserSessionState; // rax
  int v37; // r8d
  int v38; // edx
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v43; // [rsp+68h] [rbp-98h] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h]
  _QWORD v45[18]; // [rsp+80h] [rbp-80h] BYREF
  char v46; // [rsp+110h] [rbp+10h] BYREF

  v44 = a10;
  Handle = 0LL;
  v43.Buffer = (PWSTR)&v46;
  *(_QWORD *)&v43.Length = 0x1000000LL;
  memset(v45, 0, sizeof(v45));
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    McTemplateK0_EtwWriteTransfer(v14, &PseudoDevCreationStart, &W32kControlGuid);
  ReferencedRimObj = RIMIDECreateDeviceInstancePath(2LL, a1, a2, &v43);
  if ( ReferencedRimObj < 0 )
  {
    HidP_FreeCollectionDescription(DeviceDescription);
  }
  else
  {
    Object = 0LL;
    v16 = rimInputTypeFromDeviceTypeAndUsages(2, a1, a2);
    v19 = 0;
    ReferencedRimObj = rimFindReferencedRimObj(v16, v17, v18, &Object);
    if ( ReferencedRimObj < 0 )
    {
      HidP_FreeCollectionDescription(DeviceDescription);
      v33 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
        v19 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v34);
        LOBYTE(v37) = v35;
        LOBYTE(v38) = v19;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v38,
          v37,
          *(_QWORD *)(UserSessionState + 19336),
          2,
          1,
          20,
          (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
      }
    }
    else
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
      if ( ReferencedRimObj >= 0 )
      {
        v20 = *(_OWORD *)&DeviceDescription->ReportIDs;
        *(_OWORD *)&v45[3] = *(_OWORD *)&DeviceDescription->CollectionDesc;
        v45[11] = a5;
        v21 = *(_OWORD *)&DeviceDescription->Dbg.ErrorCode;
        *(_OWORD *)&v45[5] = v20;
        LODWORD(v45[12]) = a3;
        v22 = *(_OWORD *)&DeviceDescription->Dbg.Args[3];
        *(_OWORD *)&v45[7] = v21;
        *(_OWORD *)&v45[9] = v22;
        v23 = *((_QWORD *)PtiCurrent() + 58);
        *(_QWORD *)((char *)&v45[12] + 4) = *(_QWORD *)(v23 + 864);
        HIDWORD(v45[13]) = *(_DWORD *)(v23 + 872);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
        if ( CurrentProcessWin32Process )
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        LODWORD(v45[14]) = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80000000;
        HIDWORD(v45[14]) = a4;
        HIDWORD(v45[1]) = a7;
        LODWORD(v45[15]) = 0;
        LODWORD(v45[17]) = 1;
        LODWORD(v45[2]) = a8 & 1 | v45[2] & 0xFFFFFFFE;
        v45[16] = v44;
        ReferencedRimObj = RIMAddInjectionDeviceOfType((char *)Handle, &v43, 2, (__int64)v45, 0, a11);
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v27 = 0;
        }
        v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v29 = *a11;
          v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
          LOBYTE(v31) = v28;
          LOBYTE(v32) = v27;
          WPP_RECORDER_AND_TRACE_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v32,
            v31,
            *(_QWORD *)(v30 + 19336),
            4,
            1,
            19,
            (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
            v29,
            ReferencedRimObj);
        }
        if ( LODWORD(v45[17]) == 1 )
          HidP_FreeCollectionDescription(DeviceDescription);
        ZwClose(Handle);
      }
      ObfDereferenceObject(Object);
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
      McTemplateK0_EtwWriteTransfer((__int64)v33, &PseudoDevCreationStop, &W32kControlGuid);
  }
  return (unsigned int)ReferencedRimObj;
}
