/*
 * XREFs of CcGetDeviceGuid @ 0x140A2EB0C
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x14038713C (CcInitializeVolumeCacheMap.c)
 *     CcGetDeviceGuidAsync @ 0x1405B5910 (CcGetDeviceGuidAsync.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     IoVolumeDeviceToGuid @ 0x140A2FC90 (IoVolumeDeviceToGuid.c)
 */

__int64 __fastcall CcGetDeviceGuid(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( KeAreAllApcsDisabled() )
    return 3221225473LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = v4 ? *(_QWORD *)(v4 + 16) : *(_QWORD *)(a1 + 8);
  if ( !v5 )
    return 3221225473LL;
  else
    return IoVolumeDeviceToGuid(v5, a2);
}
