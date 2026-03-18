/*
 * XREFs of RIMIDECreatePseudoHIDDevice @ 0x1402083FC
 * Callers:
 *     RIMIDE_CreateGenericHidDevice @ 0x1401B8FF0 (RIMIDE_CreateGenericHidDevice.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x14020A824 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x14020A954 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1401184A0 (RawInputManagerObjectCreateKernelHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14016CD20 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     RIMIDECreateDeviceInstancePath @ 0x14018F42C (RIMIDECreateDeviceInstancePath.c)
 *     rimFindReferencedRimObj @ 0x1401FE4CC (rimFindReferencedRimObj.c)
 *     rimInputTypeFromDeviceTypeAndUsages @ 0x1401FE638 (rimInputTypeFromDeviceTypeAndUsages.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401FFA30 (RIMAddInjectionDeviceOfType.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMIDECreatePseudoHIDDevice(
        unsigned __int16 a1,
        unsigned __int16 a2,
        int a3,
        int a4,
        __int64 a5,
        PHIDP_DEVICE_DESC DeviceDescription,
        int a7,
        char a8,
        __int64 a9,
        __int64 *a10)
{
  __int64 v13; // rcx
  int ReferencedRimObj; // esi
  unsigned int v15; // eax
  int v16; // edx
  int v17; // r8d
  bool v18; // bl
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v27; // edx
  int v28; // r8d
  char v29; // r15
  char v30; // r12
  __int64 v31; // rbx
  __int64 v32; // rax
  CTouchProcessor *v33; // rcx
  int v34; // edx
  int v35; // r8d
  bool v36; // r14
  __int64 UserSessionState; // rax
  int v38; // r8d
  int v39; // edx
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v44; // [rsp+68h] [rbp-98h] BYREF
  __int64 v45; // [rsp+78h] [rbp-88h]
  _QWORD v46[18]; // [rsp+80h] [rbp-80h] BYREF
  char v47; // [rsp+110h] [rbp+10h] BYREF

  v45 = a9;
  Handle = 0LL;
  v44.Buffer = (PWSTR)&v47;
  *(_QWORD *)&v44.Length = 0x1000000LL;
  memset(v46, 0, 0x88uLL);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    McTemplateK0_EtwWriteTransfer(v13, &PseudoDevCreationStart, &W32kControlGuid);
  ReferencedRimObj = RIMIDECreateDeviceInstancePath(2, a1, a2, &v44);
  if ( ReferencedRimObj < 0 )
  {
    HidP_FreeCollectionDescription(DeviceDescription);
  }
  else
  {
    Object = 0LL;
    v15 = rimInputTypeFromDeviceTypeAndUsages(2, a1, a2);
    v18 = 0;
    ReferencedRimObj = rimFindReferencedRimObj(v15, v16, v17, &Object);
    if ( ReferencedRimObj < 0 )
    {
      HidP_FreeCollectionDescription(DeviceDescription);
      v33 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
      {
        v18 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      }
      v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v34, v35);
        LOBYTE(v38) = v36;
        LOBYTE(v39) = v18;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(UserSessionState + 19368),
          2,
          1,
          20,
          (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
      }
    }
    else
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
      if ( ReferencedRimObj >= 0 )
      {
        v21 = *(_OWORD *)&DeviceDescription->ReportIDs;
        *(_OWORD *)&v46[3] = *(_OWORD *)&DeviceDescription->CollectionDesc;
        v46[11] = a5;
        v22 = *(_OWORD *)&DeviceDescription->Dbg.ErrorCode;
        *(_OWORD *)&v46[5] = v21;
        LODWORD(v46[12]) = a3;
        v23 = *(_OWORD *)&DeviceDescription->Dbg.Args[3];
        *(_OWORD *)&v46[7] = v22;
        *(_OWORD *)&v46[9] = v23;
        v24 = *((_QWORD *)PtiCurrent(v20, v19) + 57);
        *(_QWORD *)((char *)&v46[12] + 4) = *(_QWORD *)(v24 + 864);
        HIDWORD(v46[13]) = *(_DWORD *)(v24 + 872);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
        if ( CurrentProcessWin32Process )
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        LODWORD(v46[14]) = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80000000;
        HIDWORD(v46[14]) = a4;
        HIDWORD(v46[1]) = a7;
        LODWORD(v46[16]) = 1;
        LODWORD(v46[2]) = a8 & 1 | v46[2] & 0xFFFFFFFE;
        v46[15] = v45;
        ReferencedRimObj = RIMAddInjectionDeviceOfType((char *)Handle, &v44, 2, (__int64)v46, 0, a10);
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v29 = 0;
        }
        v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v31 = *a10;
          v32 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v27, v28);
          WPP_RECORDER_AND_TRACE_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v29,
            v30,
            *(_QWORD *)(v32 + 19368),
            4u,
            1u,
            0x13u,
            (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
            v31,
            ReferencedRimObj);
        }
        if ( LODWORD(v46[16]) == 1 )
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
