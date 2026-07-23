/*
 * XREFs of PipGenerateContainerID @ 0x140B10C0C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     ExUuidCreate @ 0x140A7F880 (ExUuidCreate.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall PipGenerateContainerID(__int64 a1, __int64 a2, char a3, const WCHAR *a4, _QWORD *a5)
{
  __int64 v6; // rdi
  GUID *p_Guid; // rcx
  NTSTATUS v8; // ebx
  wchar_t *Buffer; // rdi
  unsigned int MaximumLength; // esi
  void *Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  int DeviceRegProp; // ebx
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-61h] BYREF
  int v17; // [rsp+50h] [rbp-51h] BYREF
  int v18; // [rsp+54h] [rbp-4Dh] BYREF
  GUID Guid; // [rsp+58h] [rbp-49h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-31h] BYREF

  v17 = 0;
  v18 = 0;
  *(_QWORD *)&GuidString.Length = 0LL;
  v6 = a1;
  *a5 = 0LL;
  GuidString.Buffer = 0LL;
  Guid = 0LL;
  if ( !a3 )
  {
    p_Guid = (GUID *)(*(_QWORD *)(a1 + 16) + 664LL);
LABEL_3:
    v8 = RtlStringFromGUIDEx(p_Guid, &GuidString, 1u);
    goto LABEL_4;
  }
  if ( a4 )
  {
    v8 = RtlCreateUnicodeString(&GuidString, a4) == 0 ? 0xC000009A : 0;
    goto LABEL_4;
  }
  if ( !a2 )
    goto LABEL_21;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v14 = *(_QWORD *)(v6 + 48);
  v17 = 78;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v14,
                    a2,
                    0x25u,
                    (__int64)&v18,
                    (__int64)SourceString,
                    (__int64)&v17,
                    0);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( DeviceRegProp < 0 || v18 != 1 || !RtlCreateUnicodeString(&GuidString, SourceString) )
  {
LABEL_21:
    v8 = ExUuidCreate(&Guid);
    if ( v8 >= 0 )
    {
      p_Guid = &Guid;
      goto LABEL_3;
    }
LABEL_4:
    if ( v8 < 0 )
      return (unsigned int)v8;
    goto LABEL_5;
  }
  v8 = RtlGUIDFromString(&GuidString, &Guid);
  if ( v8 < 0 )
  {
LABEL_20:
    RtlFreeAnsiString(&GuidString);
    goto LABEL_21;
  }
  while ( 1 )
  {
    v6 = *(_QWORD *)(v6 + 16);
    if ( !v6 )
      break;
    if ( (GUID *)(v6 + 664) == &Guid || RtlCompareMemory((const void *)(v6 + 664), &Guid, 0x10uLL) == 16 )
      goto LABEL_20;
  }
LABEL_5:
  Buffer = GuidString.Buffer;
  if ( GuidString.Buffer )
  {
    MaximumLength = GuidString.MaximumLength;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    *a5 = Pool2;
    if ( Pool2 )
      memmove(Pool2, Buffer, MaximumLength);
    else
      v8 = -1073741670;
    ExFreePool(GuidString.Buffer);
  }
  return (unsigned int)v8;
}
