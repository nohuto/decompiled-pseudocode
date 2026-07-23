/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1409791B0
 * Callers:
 *     DifRtlDuplicateUnicodeStringWrapper @ 0x140699720 (DifRtlDuplicateUnicodeStringWrapper.c)
 *     PipAddBindingId @ 0x1407A2680 (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x1407A2704 (PipAddRequestToEdge.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1407B978C (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbRegisterNode @ 0x1407B9BF0 (PiDrvDbRegisterNode.c)
 *     PpmRegisterProvSocIdentifier @ 0x1407D9490 (PpmRegisterProvSocIdentifier.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetObjectDatabaseNode @ 0x14097932C (DrvDbGetObjectDatabaseNode.c)
 *     PiGetServiceNameInfo @ 0x140A10FA4 (PiGetServiceNameInfo.c)
 *     EtwpCovSampModuleGetName @ 0x140A35658 (EtwpCovSampModuleGetName.c)
 *     IopMountBlockIoLayerCallback @ 0x140CC3BA0 (IopMountBlockIoLayerCallback.c)
 *     IopMountBootLayerCallout @ 0x140CC3D20 (IopMountBootLayerCallout.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140CC9F70 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     IopMountCimfsLayer @ 0x140D0970C (IopMountCimfsLayer.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x140475B10 (RtlValidateUnicodeString.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlDuplicateUnicodeString(ULONG Flags, PCUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  unsigned __int16 Length; // r14
  wchar_t *v6; // r13
  ULONG v7; // ebx
  ULONG v8; // edi
  NTSTATUS result; // eax
  unsigned __int16 v10; // r12
  wchar_t *Pool2; // rax

  Length = 0;
  v6 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( !StringOut )
    return -1073741811;
  v7 = Flags & 1;
  v8 = Flags & 2;
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
    return -1073741811;
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  if ( v7 )
  {
    if ( Length == 0xFFFE )
      return -1073741562;
    v10 = Length + 2;
  }
  else
  {
    v10 = Length;
  }
  if ( v8 || Length )
  {
    if ( !v10 )
    {
LABEL_18:
      StringOut->MaximumLength = v10;
      StringOut->Length = Length;
      StringOut->Buffer = v6;
      return 0;
    }
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v6 = Pool2;
    if ( Pool2 )
    {
      if ( Length )
        memmove(Pool2, StringIn->Buffer, Length);
      if ( v7 )
        v6[(unsigned __int64)Length >> 1] = 0;
      goto LABEL_18;
    }
    return -1073741801;
  }
  else
  {
    StringOut->MaximumLength = 0;
    StringOut->Length = 0;
    StringOut->Buffer = 0LL;
    return 0;
  }
}
