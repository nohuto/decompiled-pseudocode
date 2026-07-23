/*
 * XREFs of IoVolumeDeviceToGuid @ 0x140A2FC90
 * Callers:
 *     CmpVolumeContextStart @ 0x140A2E678 (CmpVolumeContextStart.c)
 *     CcGetDeviceGuid @ 0x140A2EB0C (CcGetDeviceGuid.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x140A2EDB0 (FsRtlVolumeDeviceToCorrelationId.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140A2FA8C (CmpVolumeManagerGetContextForFile.c)
 *     IopMountVolume @ 0x140B208FC (IopMountVolume.c)
 * Callees:
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     IoVolumeDeviceToGuidPath @ 0x140A2FD20 (IoVolumeDeviceToGuidPath.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoVolumeDeviceToGuid(struct _DEVICE_OBJECT *a1, GUID *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  result = IoVolumeDeviceToGuidPath(a1);
  if ( (int)result >= 0 )
  {
    GuidString.Length = -20;
    GuidString.MaximumLength = -20;
    GuidString.Buffer = (wchar_t *)20;
    v4 = RtlGUIDFromString(&GuidString, a2);
    ExFreePoolWithTag(0LL, 0);
    return v4;
  }
  return result;
}
