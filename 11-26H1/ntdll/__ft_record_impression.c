/*
 * XREFs of __ft_record_impression @ 0x180147FFC
 * Callers:
 *     RtlNotifyFeatureToggleUsage @ 0x180147A20 (RtlNotifyFeatureToggleUsage.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     __ft_marker_array_record_impression @ 0x180147E30 (__ft_marker_array_record_impression.c)
 */

__int64 __fastcall _ft_record_impression(unsigned int a1, __int64 a2, int a3)
{
  unsigned int v6; // ebx

  RtlAcquireSRWLockExclusive(&stru_1801CBE10);
  v6 = _ft_marker_array_record_impression(&_ft_g_api_info, a1, a2, a3);
  RtlReleaseSRWLockExclusive(&stru_1801CBE10);
  return v6;
}
