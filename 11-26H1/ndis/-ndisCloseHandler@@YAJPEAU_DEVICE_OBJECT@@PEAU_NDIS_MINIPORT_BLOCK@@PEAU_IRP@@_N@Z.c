/*
 * XREFs of ?ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@_N@Z @ 0x14009E7B4
 * Callers:
 *     ?ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14005A470 (-ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisWdfCloseIrpHandler @ 0x1400644D0 (NdisWdfCloseIrpHandler.c)
 * Callees:
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x14000E580 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x14007E130 (-ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140094BEC (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ndisCloseHandler(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        char a4)
{
  unsigned __int16 v8; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // r12
  KSPIN_LOCK *FsContext; // r13
  KIRQL v12; // al
  char v13; // bl
  int v14; // edx
  unsigned __int16 v15; // r9
  _IO_STACK_LOCATION *v16; // rdi
  _FILE_OBJECT *FileObject; // rax
  char *v18; // rdx

  if ( (unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !a4 && a2->Header.Type != 17 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return ndisDummyHandler(a1, &a2->Header, a3);
      v8 = 24;
LABEL_6:
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        v8,
        (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
        (char)a2,
        a3);
      return ndisDummyHandler(a1, &a2->Header, a3);
    }
    CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
    FsContext = (KSPIN_LOCK *)CurrentStackLocation->FileObject->FsContext;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x19u,
        (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
        (char)a2,
        a3);
    v12 = KeAcquireSpinLockRaiseToDpc(FsContext + 4);
    v13 = *((_BYTE *)FsContext + 40);
    *((_BYTE *)FsContext + 41) = 1;
    KeReleaseSpinLock(FsContext + 4, v12);
    if ( v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          13,
          26,
          (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
          (char)FsContext);
      }
      KeWaitForSingleObject(FsContext + 6, Executive, 0, 0, 0LL);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          13,
          27,
          (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
          (char)FsContext);
      }
      ndisCleanupUserOpenContext(a2, (char *)FsContext);
    }
    ExFreePoolWithTag(FsContext, 0);
    CurrentStackLocation->FileObject->FsContext = 0LL;
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 28;
LABEL_26:
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        v15,
        (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
        (char)a2,
        a3);
    }
  }
  else
  {
    v16 = a3->Tail.Overlay.CurrentStackLocation;
    if ( a2->Header.Type != 17 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return ndisDummyHandler(a1, &a2->Header, a3);
      v8 = 29;
      goto LABEL_6;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x1Eu,
        (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
        (char)a2,
        a3);
    FileObject = v16->FileObject;
    v18 = (char *)FileObject->FsContext;
    FileObject->FsContext = 0LL;
    ndisCleanupUserOpenContext(a2, v18);
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 31;
      goto LABEL_26;
    }
  }
  return 0LL;
}
