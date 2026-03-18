/*
 * XREFs of ?DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1400861A0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1403D4AF0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140060B8C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiSetVirtualGpuVmBus @ 0x140218380 (DxgkDdiSetVirtualGpuVmBus.c)
 *     DpiFdoGetVirtualGpuType @ 0x14042FBE8 (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiSetPartitionFlexIovVmbus(struct _DEVICE_OBJECT *a1, struct _IRP *a2, void *a3, unsigned int a4)
{
  __int64 result; // rax
  void **DeviceExtension; // rdi
  unsigned int v7; // ebx
  _BYTE v8[32]; // [rsp+40h] [rbp-38h] BYREF
  int v9; // [rsp+60h] [rbp-18h]

  if ( a2->RequestorMode )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225506LL;
    WdLogGlobalForLineNumber = 3406;
  }
  else
  {
    DeviceExtension = (void **)a1->DeviceExtension;
    if ( a4 >= 0x10 && a3 )
    {
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v8, a1, a2, 0LL, 0, 0);
      v7 = v9;
      if ( v9 >= 0 )
      {
        if ( *((_DWORD *)DeviceExtension + 1030) == 1 || *((_DWORD *)DeviceExtension + 71) != 1 )
        {
          v7 = -1073741661;
        }
        else
        {
          DpiFdoGetVirtualGpuType(a2);
          v7 = DxgkDdiSetVirtualGpuVmBus(DeviceExtension[504]);
        }
      }
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v8);
    }
    else
    {
      v7 = -1073741789;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3418;
    }
    return v7;
  }
  return result;
}
