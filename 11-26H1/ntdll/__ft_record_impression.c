/*
 * XREFs of __ft_record_impression @ 0x18014814C
 * Callers:
 *     RtlNotifyFeatureToggleUsage @ 0x180147B70 (RtlNotifyFeatureToggleUsage.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     __ft_marker_array_record_impression @ 0x180147F80 (__ft_marker_array_record_impression.c)
 */

__int64 __fastcall _ft_record_impression(unsigned int a1, __int64 a2, int a3)
{
  unsigned int v6; // ebx

  RtlAcquireSRWLockExclusive(&qword_1801CCDD0, a2);
  v6 = _ft_marker_array_record_impression(&_ft_g_api_info, a1, a2, a3);
  RtlReleaseSRWLockExclusive(&qword_1801CCDD0);
  return v6;
}
