/*
 * XREFs of PiCMRegisterDeviceInterface @ 0x14094D1B4
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x14094D350 (PiCMCaptureRegisterInterfaceInputData.c)
 *     _CmValidateDeviceName @ 0x14094D660 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBufferResultData @ 0x140959E10 (PiCMReturnBufferResultData.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMRegisterDeviceInterface(void *a1, __int64 a2, __int64 a3, unsigned int a4, int a5, _DWORD *a6)
{
  void *v8; // rbx
  int v9; // esi
  int v10; // edi
  __int64 v11; // rcx
  int v12; // r10d
  __int64 v13; // rdx
  int v14; // eax
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // bl
  int v18; // r9d
  int v19; // r11d
  int v20; // eax
  __int64 v21; // rax
  void *v22; // [rsp+50h] [rbp-49h] BYREF
  __int128 v23; // [rsp+58h] [rbp-41h] BYREF
  __int128 v24; // [rsp+68h] [rbp-31h]
  __int128 v25; // [rsp+78h] [rbp-21h]
  __int64 v26; // [rsp+88h] [rbp-11h]

  v8 = 0LL;
  *a6 = 0;
  v23 = 0LL;
  v26 = 0LL;
  v9 = 0;
  v24 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v10 = PiCMCaptureRegisterInterfaceInputData(a1);
  if ( v10 < 0 )
    goto LABEL_8;
  if ( !(unsigned __int8)PiAuDoesClientHaveAccess(2u) )
  {
    v12 = -1073741790;
LABEL_4:
    v13 = 0LL;
    goto LABEL_14;
  }
  if ( !*((_QWORD *)&v24 + 1) || DWORD1(v23) || *((_QWORD *)&v25 + 1) || !a3 || a4 < 0x14 || a4 - 20 < 2 )
  {
    v12 = -1073741811;
    goto LABEL_4;
  }
  v12 = CmValidateDeviceName(v11, *((_QWORD *)&v24 + 1));
  if ( v12 < 0 )
    goto LABEL_13;
  LOBYTE(v18) = 1;
  v20 = IopRegisterDeviceInterface(v19, (unsigned int)&v23 + 8, DWORD2(v25), v18, (__int64)&v22, 0LL);
  v8 = v22;
  v12 = v20;
  if ( v20 < 0 )
    goto LABEL_13;
  v21 = -1LL;
  do
    ++v21;
  while ( *((_WORD *)v22 + v21) );
  v9 = v21 + 1;
  if ( 2 * (unsigned __int64)(unsigned int)(v21 + 1) <= a4 - 20 )
  {
LABEL_13:
    v13 = (unsigned int)(2 * v9);
    if ( v12 >= 0 )
    {
      v14 = PiCMReturnBufferResultData((unsigned int)v12, v13, 0LL, v8, v13, HIDWORD(v26), a3, a4, a6);
      goto LABEL_6;
    }
  }
  else
  {
    v12 = -1073741789;
    v13 = (unsigned int)(2 * v9);
  }
LABEL_14:
  v14 = PiCMReturnBufferResultData((unsigned int)v12, v13, 0LL, 0LL, 0, HIDWORD(v26), a3, a4, a6);
LABEL_6:
  v10 = v14;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_8:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( *((_QWORD *)&v24 + 1) )
    PiControlFreeUserModeCallersBuffer(CurrentThread->PreviousMode, *((void **)&v24 + 1));
  if ( *((_QWORD *)&v25 + 1) )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)&v25 + 1));
  return (unsigned int)v10;
}
