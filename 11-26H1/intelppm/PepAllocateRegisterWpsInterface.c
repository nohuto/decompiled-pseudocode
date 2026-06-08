/*
 * XREFs of PepAllocateRegisterWpsInterface @ 0x14003BFB8
 * Callers:
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     PepRegisterWpsUpdateInterface @ 0x14003C414 (PepRegisterWpsUpdateInterface.c)
 */

__int64 __fastcall PepAllocateRegisterWpsInterface(PDEVICE_OBJECT *a1)
{
  int v2; // edx
  unsigned int v3; // ebx
  int v4; // ebx
  int *Pool2; // rax
  int *v6; // rdi
  void *v7; // rsi
  __int64 v8; // rax

  qword_140019BB0 = IoAllocateWorkItem(*a1);
  if ( !qword_140019BB0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        4,
        13,
        (__int64)&WPP_8e2bd501024a3f356a388249f760a2d5_Traceguids);
    }
    return (unsigned int)-1073741670;
  }
  v4 = dword_1400191A4;
  Pool2 = (int *)ExAllocatePool2(64LL, (unsigned int)(24 * dword_1400191A4 + 8), 1919119952LL);
  v6 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *Pool2 = v4;
  v7 = (void *)ExAllocatePool2(64LL, (unsigned int)(2 * v4), 1919119952LL);
  if ( v7 )
  {
    v8 = ExAllocatePool2(64LL, (unsigned int)(12 * v4), 1919119952LL);
    if ( v8 )
    {
      qword_140019B98 = v6;
      qword_140019BA0 = (__int64)v7;
      qword_140019BA8 = v8;
      return (unsigned int)PepRegisterWpsUpdateInterface(a1);
    }
    v3 = -1073741670;
    ExFreePoolWithTag(v7, (ULONG)1919119952);
  }
  else
  {
    v3 = -1073741670;
  }
  ExFreePoolWithTag(v6, (ULONG)1919119952);
  return v3;
}
