/*
 * XREFs of IopFreeBandwidthContract @ 0x140B71E1C
 * Callers:
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IopAllocateIrpMustSucceed @ 0x14026BB50 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     IopResetEvent @ 0x14044DD70 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall IopFreeBandwidthContract(PFILE_OBJECT FileObject, _QWORD *a2)
{
  __int64 result; // rax
  ULONG v4; // edi
  __int64 v5; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  __int64 v7; // rdx
  __int64 MustSucceed; // rax
  IRP *v9; // rbx
  struct _KEVENT *p_Event; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  KEVENT *v13; // rcx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-48h] BYREF
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF
  __int128 v17; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+70h] [rbp-10h]

  result = 0LL;
  memset(&Event, 0, sizeof(Event));
  v16 = 0LL;
  v18 = 0;
  v17 = 0LL;
  if ( (_QWORD *)*a2 != a2 )
  {
    v4 = FileObject->Flags & 2;
    while ( 1 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      IopResetEvent((__int64)FileObject, v5);
      v18 = 0;
      v17 = 0LL;
      RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
      LOBYTE(v7) = RelatedDeviceObject->StackSize;
      MustSucceed = IopAllocateIrpMustSucceed((__int64)RelatedDeviceObject, v7);
      v9 = (IRP *)MustSucceed;
      *(_QWORD *)(MustSucceed + 192) = FileObject;
      *(_QWORD *)(MustSucceed + 152) = KeGetCurrentThread();
      *(_BYTE *)(MustSucceed + 64) = 0;
      if ( v4 )
      {
        p_Event = 0LL;
      }
      else
      {
        *(_DWORD *)(MustSucceed + 16) = 4;
        p_Event = &Event;
      }
      *(_QWORD *)(MustSucceed + 80) = p_Event;
      *(_QWORD *)(MustSucceed + 72) = &v16;
      v11 = *(_QWORD *)(MustSucceed + 184);
      v9->Overlay.AllocationSize.QuadPart = 0LL;
      *(_BYTE *)(v11 - 72) = 6;
      *(_QWORD *)(v11 - 24) = FileObject;
      *(_DWORD *)(v11 - 64) = 20;
      *(_DWORD *)(v11 - 56) = 44;
      v9->AssociatedIrp.MasterIrp = (struct _IRP *)&v17;
      v9->UserBuffer = 0LL;
      v9->MdlAddress = 0LL;
      PsReferenceSiloContext(FileObject);
      IopQueueThreadIrp((__int64)v9, v12);
      if ( IofCallDriver(RelatedDeviceObject, v9) == 259 )
      {
        v13 = &FileObject->Event;
        if ( !v4 )
          v13 = &Event;
        KeWaitForSingleObject(v13, Executive, 0, 0, 0LL);
      }
      result = (unsigned int)v16;
      if ( (_DWORD)v16 != -1073741670 && (_DWORD)v16 != -1073741801 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  return result;
}
