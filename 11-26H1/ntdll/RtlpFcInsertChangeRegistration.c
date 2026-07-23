/*
 * XREFs of RtlpFcInsertChangeRegistration @ 0x18008EFB4
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18008EE30 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     RtlpFtInitialize @ 0x18011D618 (RtlpFtInitialize.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpFcInsertChangeRegistration(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  RtlAcquireSRWLockExclusive(&stru_1801CBD80);
  v3 = (_QWORD *)qword_1801CBD90;
  if ( *(__int64 **)qword_1801CBD90 != &qword_1801CBD88 )
    __fastfail(3u);
  *a2 = &qword_1801CBD88;
  a2[1] = v3;
  *v3 = a2;
  qword_1801CBD90 = (__int64)a2;
  RtlReleaseSRWLockExclusive(&stru_1801CBD80);
}
