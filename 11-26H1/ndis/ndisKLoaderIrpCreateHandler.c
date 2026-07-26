/*
 * XREFs of ndisKLoaderIrpCreateHandler @ 0x1400DF28C
 * Callers:
 *     ?ndisKLoaderDispatch@@YAJPEAU_IRP@@@Z @ 0x14008C490 (-ndisKLoaderDispatch@@YAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?KLoaderReferenceModuleForCreateIrp@@YAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1400DEEA8 (-KLoaderReferenceModuleForCreateIrp@@YAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUK.c)
 *     ??$invoke@P6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@Z @ 0x1400DF1B4 (--$invoke@P6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@.c)
 *     ?ParseModuleID@@YAJAEBU_UNICODE_STRING@@AEAU_GUID@@AEAU1@@Z @ 0x1400DF584 (-ParseModuleID@@YAJAEBU_UNICODE_STRING@@AEAU_GUID@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ??_GProxyFileObject@@QEAAPEAXI@Z @ 0x140147FF8 (--_GProxyFileObject@@QEAAPEAXI@Z.c)
 *     ?GetDeviceObject@DriverService@@QEBAPEAU_DEVICE_OBJECT@@XZ @ 0x1401489E4 (-GetDeviceObject@DriverService@@QEBAPEAU_DEVICE_OBJECT@@XZ.c)
 */

__int64 __fastcall ndisKLoaderIrpCreateHandler(struct _IRP *a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  struct _UNICODE_STRING *v8; // r12
  unsigned int v9; // edx
  unsigned int v10; // edi
  __int64 *v11; // rdi
  unsigned int v12; // edx
  unsigned int Irp; // esi
  __int64 v14; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v16; // [rsp+20h] [rbp-60h] BYREF
  void (__fastcall *v17)(struct KLOADER_MODULE_REFERENCE__ *); // [rsp+28h] [rbp-58h] BYREF
  struct _UNICODE_STRING v18; // [rsp+30h] [rbp-50h] BYREF
  struct _GUID v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h] BYREF
  struct _GUID v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+68h] [rbp-18h]

  v2 = *(_QWORD *)(a2 + 48);
  if ( !v2 )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x62694C4Eu);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 183160574LL;
  v8 = (struct _UNICODE_STRING *)(v2 + 88);
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = 0LL;
  PoolWithTag[4] = 0LL;
  PoolWithTag[1] = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v10 = ParseModuleID((const struct _UNICODE_STRING *)(v2 + 88), &v19, &v18);
  if ( v10 )
  {
LABEL_5:
    ProxyFileObject::`scalar deleting destructor'(v7, v9);
    return v10;
  }
  v11 = v7 + 1;
  v22 = 0LL;
  v20 = 32LL;
  v21 = v19;
  if ( v7[1] )
  {
    v16 = v7[1];
    v17 = KLoaderDereferenceModule;
    wistd::invoke<__int64 (*)(void *),_DRIVER_OBJECT * &>((__int64 (__fastcall **)(_QWORD))&v17, &v16);
  }
  *v11 = 0LL;
  Irp = KLoaderReferenceModuleForCreateIrp(
          (const struct _KLOADER_REFERENCE_MODULE_CONFIG *)&v20,
          a1,
          (struct KLOADER_MODULE_REFERENCE__ **)v7 + 1);
  if ( Irp )
  {
    ProxyFileObject::`scalar deleting destructor'(v7, v12);
    return Irp;
  }
  else
  {
    v14 = *v11;
    *(struct _UNICODE_STRING *)(v7 + 3) = *v8;
    *v8 = v18;
    v7[2] = DriverService::GetDeviceObject((DriverService *)(*(_QWORD *)v14 + 48LL));
    CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v10 = IoSynchronousCallDriver(v7[2], a1);
    *v8 = *(struct _UNICODE_STRING *)(v7 + 3);
    if ( v10 )
      goto LABEL_5;
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 24LL) = v7;
    return 0LL;
  }
}
