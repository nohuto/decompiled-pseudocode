/*
 * XREFs of ?ndisDummyIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14000E450
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisDummyIrpHandler(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  _BYTE *DeviceExtension; // rbx
  struct _IRP *v3; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 (__fastcall *v6)(struct _DEVICE_OBJECT *, struct _IRP *); // rax
  int v7; // edx
  unsigned int v8; // ebx
  char v10; // [rsp+30h] [rbp-18h]

  DeviceExtension = a1->DeviceExtension;
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      32,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      (char)a1,
      v10);
  }
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  if ( *DeviceExtension == 17 )
  {
    v8 = 0;
    if ( CurrentStackLocation->MajorFunction != 18 )
      v8 = -1073741637;
  }
  else
  {
    if ( *DeviceExtension == 9 )
    {
      v6 = *(__int64 (__fastcall **)(struct _DEVICE_OBJECT *, struct _IRP *))&DeviceExtension[8
                                                                                            * CurrentStackLocation->MajorFunction
                                                                                            + 48];
      if ( v6 )
      {
        v8 = v6(a1, v3);
        goto LABEL_7;
      }
    }
    v8 = -1073741637;
  }
  v3->IoStatus.Status = v8;
  IofCompleteRequest(v3, 2);
LABEL_7:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      11,
      33,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      (char)a1,
      (char)v3);
  }
  return v8;
}
