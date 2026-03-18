/*
 * XREFs of UsbhPdoQueryWmiDataBlock @ 0x1400557E0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhRefPdoDeviceHandle @ 0x1400118A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x140011B50 (UsbhDerefPdoDeviceHandle.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhGetPerformanceInfo @ 0x140035950 (UsbhGetPerformanceInfo.c)
 *     UsbhGetDeviceNodeInfo @ 0x1400552E0 (UsbhGetDeviceNodeInfo.c)
 */

__int64 __fastcall UsbhPdoQueryWmiDataBlock(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        int a3,
        __int64 a4,
        int a5,
        ULONG *a6,
        unsigned int a7,
        _DWORD *a8)
{
  ULONG v9; // edi
  _DWORD *v12; // rax
  _DWORD *v13; // rsi
  int v14; // ebx
  NTSTATUS v15; // ebx
  __int64 v16; // rax
  __int64 v17; // r15
  int DeviceNodeInfo; // eax
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r8
  int PerformanceInfo; // eax
  _WORD *v23; // r9
  unsigned __int16 v24; // cx
  ULONG *v25; // rax
  NTSTATUS v26; // eax
  unsigned int v27; // r10d
  ULONG v29; // [rsp+70h] [rbp+18h] BYREF

  v9 = 0;
  v29 = 0;
  v12 = PdoExt((__int64)DeviceObject);
  v13 = v12;
  if ( a3 )
  {
    v14 = a3 - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        Log(*((_QWORD *)v12 + 148), 8, 2003659060, 0LL, 0LL);
LABEL_5:
        v15 = -1073741163;
        goto LABEL_26;
      }
      if ( (v12[355] & 0x24) != 0 )
        goto LABEL_5;
      v16 = UsbhRefPdoDeviceHandle(*((_QWORD *)v12 + 148), (__int64)DeviceObject, (__int64)Irp, 1212441710LL);
      v17 = v16;
      if ( v16 )
      {
        DeviceNodeInfo = UsbhGetDeviceNodeInfo((__int64)DeviceObject, a8, a7, &v29, v16);
        v9 = v29;
        v15 = DeviceNodeInfo;
        if ( DeviceNodeInfo >= 0 && a5 == 1 && a6 )
          *a6 = v29;
        v19 = 1212441710LL;
LABEL_13:
        UsbhDerefPdoDeviceHandle(*((_QWORD *)v13 + 148), v17, (__int64)Irp, v19);
        goto LABEL_26;
      }
    }
    else
    {
      if ( a7 < 0xE4 )
      {
        v15 = -1073741789;
        v9 = 228;
        goto LABEL_26;
      }
      v20 = UsbhRefPdoDeviceHandle(*((_QWORD *)v12 + 148), (__int64)DeviceObject, (__int64)Irp, 1212444774LL);
      v17 = v20;
      if ( v20 )
      {
        PerformanceInfo = UsbhGetPerformanceInfo((__int64)DeviceObject, a8, v21, &v29, v20);
        v9 = v29;
        v15 = PerformanceInfo;
        if ( PerformanceInfo >= 0 && a5 == 1 && a6 )
          *a6 = v29;
        v19 = 1212444774LL;
        goto LABEL_13;
      }
    }
    v15 = -1073741810;
    goto LABEL_26;
  }
  Log(*((_QWORD *)v12 + 148), 8, 2003659059, (__int64)a8, a7);
  v9 = 16;
  if ( a7 >= 0x10 )
  {
    v24 = *((_WORD *)v13 + 706);
    v23[3] = 46;
    v15 = 0;
    v23[6] = 0;
    v23[1] = (v24 >> 12) + 48;
    *v23 = 12;
    v23[2] = (HIBYTE(v24) & 0xF) + 48;
    v23[4] = ((unsigned __int8)v24 >> 4) + 48;
    v25 = a6;
    v23[5] = (v24 & 0xF) + 48;
    *v25 = 16;
  }
  else
  {
    v15 = -1073741789;
  }
LABEL_26:
  Log(*((_QWORD *)v13 + 148), 8, 2003659075, (__int64)Irp, v9);
  v26 = WmiCompleteRequest(DeviceObject, Irp, v15, v9, 0);
  Log(*((_QWORD *)v13 + 148), 8, 2003659088, 0LL, v26);
  return v27;
}
