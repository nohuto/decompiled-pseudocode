/*
 * XREFs of RtlpFcInsertChangeRegistration @ 0x18006EB64
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18006E9E0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     RtlpFtInitialize @ 0x18011D868 (RtlpFtInitialize.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlpFcInsertChangeRegistration(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  RtlAcquireSRWLockExclusive(&qword_1801CCD40, (__int64)a2);
  v3 = (_QWORD *)qword_1801CCD50;
  if ( *(__int64 **)qword_1801CCD50 != &qword_1801CCD48 )
    __fastfail(3u);
  *a2 = &qword_1801CCD48;
  a2[1] = v3;
  *v3 = a2;
  qword_1801CCD50 = (__int64)a2;
  return RtlReleaseSRWLockExclusive(&qword_1801CCD40);
}
