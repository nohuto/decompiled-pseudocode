/*
 * XREFs of CmpGetVirtualizationID @ 0x1408B7880
 * Callers:
 *     CmpGetVirtualStoreRoot @ 0x140860160 (CmpGetVirtualStoreRoot.c)
 *     CmRealKCBToVirtualPath @ 0x1408B7A24 (CmRealKCBToVirtualPath.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlConvertSidToUnicodeString @ 0x140901480 (RtlConvertSidToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall CmpGetVirtualizationID(PUNICODE_STRING Destination, int *a2)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 *v6; // rdx
  unsigned int v7; // eax
  NTSTATUS v8; // ebx
  wchar_t *Pool2; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-78h] BYREF
  _BYTE Sid[80]; // [rsp+30h] [rbp-68h] BYREF

  UnicodeString = 0LL;
  memset_0(Sid, 0, 0x44uLL);
  v4 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 || a2[2] < 2 )
    v4 = *((_QWORD *)a2 + 2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 48), 1u);
  v6 = **(unsigned __int8 ***)(v4 + 152);
  v7 = 4 * v6[1] + 8;
  if ( v7 <= 0x44 )
    memmove(Sid, v6, v7);
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 48));
  KeLeaveCriticalRegion();
  v8 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( v8 >= 0 )
  {
    Destination->MaximumLength = UnicodeString.Length + 20;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    Destination->Buffer = Pool2;
    if ( Pool2 )
    {
      RtlCopyUnicodeString(Destination, &UnicodeString);
      RtlAppendUnicodeToString(Destination, L"_Classes");
    }
    else
    {
      v8 = -1073741670;
    }
  }
  if ( UnicodeString.Buffer )
    ExFreePool(UnicodeString.Buffer);
  return (unsigned int)v8;
}
