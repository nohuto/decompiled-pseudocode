/*
 * XREFs of IoVolumeDeviceToGuid @ 0x140907B30
 * Callers:
 *     CmpVolumeContextStart @ 0x140906340 (CmpVolumeContextStart.c)
 *     CcGetDeviceGuid @ 0x1409067DC (CcGetDeviceGuid.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x140906B50 (FsRtlVolumeDeviceToCorrelationId.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14090792C (CmpVolumeManagerGetContextForFile.c)
 *     IopMountVolume @ 0x140B1E87C (IopMountVolume.c)
 * Callees:
 *     IoVolumeDeviceToGuidPath @ 0x140907BC0 (IoVolumeDeviceToGuidPath.c)
 *     RtlGUIDFromString @ 0x1409A1880 (RtlGUIDFromString.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
