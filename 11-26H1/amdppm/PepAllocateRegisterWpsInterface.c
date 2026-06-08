/*
 * XREFs of PepAllocateRegisterWpsInterface @ 0x14003ACF4
 * Callers:
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     PepRegisterWpsUpdateInterface @ 0x14003B150 (PepRegisterWpsUpdateInterface.c)
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

  qword_140015FE0 = IoAllocateWorkItem(*a1);
  if ( !qword_140015FE0 )
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
  v4 = dword_1400155D4;
  Pool2 = (int *)ExAllocatePool2(64LL, (unsigned int)(24 * dword_1400155D4 + 8), 1919119952LL);
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
      qword_140015FC8 = v6;
      qword_140015FD0 = (__int64)v7;
      qword_140015FD8 = v8;
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
