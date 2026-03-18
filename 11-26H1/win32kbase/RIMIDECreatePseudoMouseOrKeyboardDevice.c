/*
 * XREFs of RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1402087A4
 * Callers:
 *     NtUserInjectMouseInput @ 0x14018E9E0 (NtUserInjectMouseInput.c)
 *     NtUserInjectKeyboardInput @ 0x1401E6330 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1401184A0 (RawInputManagerObjectCreateKernelHandle.c)
 *     RIMIDECreateDeviceInstancePath @ 0x14018F42C (RIMIDECreateDeviceInstancePath.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimFindReferencedRimObj @ 0x1401FE4CC (rimFindReferencedRimObj.c)
 *     rimInputTypeFromDeviceTypeAndUsages @ 0x1401FE638 (rimInputTypeFromDeviceTypeAndUsages.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401FFA30 (RIMAddInjectionDeviceOfType.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMIDECreatePseudoMouseOrKeyboardDevice(unsigned int a1, __int64 *a2)
{
  int ReferencedRimObj; // ebx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v15; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v16[18]; // [rsp+60h] [rbp-A0h] BYREF
  char v17; // [rsp+F0h] [rbp-10h] BYREF

  if ( a1 >= 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 901);
  *(_QWORD *)&v15.Length = 0x1000000LL;
  v15.Buffer = (PWSTR)&v17;
  Handle = (HANDLE)-1LL;
  v14 = -1LL;
  memset(v16, 0, 0x88uLL);
  Object = 0LL;
  ReferencedRimObj = RIMIDECreateDeviceInstancePath(a1, 0, 0, &v15);
  if ( ReferencedRimObj >= 0 )
  {
    v5 = rimInputTypeFromDeviceTypeAndUsages(a1, 0, 0);
    v6 = v5;
    if ( v5 != 1 && v5 != 2 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 915);
    ReferencedRimObj = rimFindReferencedRimObj(v6, 0, 0, &Object);
    if ( ReferencedRimObj >= 0 )
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
      if ( ReferencedRimObj >= 0 )
      {
        LODWORD(v16[2]) &= ~1u;
        v16[11] = 0LL;
        LODWORD(v16[12]) = 0;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
        if ( CurrentProcessWin32Process )
        {
          v9 = -*(_QWORD *)CurrentProcessWin32Process;
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        }
        *(_QWORD *)((char *)&v16[12] + 4) = *(_QWORD *)(CurrentProcessWin32Process + 864);
        HIDWORD(v16[13]) = *(_DWORD *)(CurrentProcessWin32Process + 872);
        v10 = PsGetCurrentProcessWin32Process(v9);
        if ( v10 )
          v10 &= -(__int64)(*(_QWORD *)v10 != 0LL);
        LODWORD(v16[14]) = *(_DWORD *)(v10 + 12) & 0x80000000;
        ReferencedRimObj = RIMAddInjectionDeviceOfType((char *)Handle, &v15, a1, (__int64)v16, 0, &v14);
        if ( ReferencedRimObj >= 0 )
          *a2 = v14;
        ZwClose(Handle);
      }
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)ReferencedRimObj;
}
