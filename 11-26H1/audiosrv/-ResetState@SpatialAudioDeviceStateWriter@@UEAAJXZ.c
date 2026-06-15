/*
 * XREFs of ?ResetState@SpatialAudioDeviceStateWriter@@UEAAJXZ @ 0x18015FEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Store@SpatialAudioStateIO@@IEAAJXZ @ 0x180130D74 (-Store@SpatialAudioStateIO@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioDeviceStateWriter::ResetState(SpatialAudioDeviceStateWriter *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  char *v3; // rcx
  unsigned int v4; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v3 = (char *)this - 568;
  *((_OWORD *)v3 + 34) = 0LL;
  *((_QWORD *)v3 + 70) = 0LL;
  v4 = SpatialAudioStateIO::Store((SpatialAudioDeviceStateWriter *)((char *)this - 568));
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
