/*
 * XREFs of RtlpFcRemoveChangeRegistration @ 0x1800ED500
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x1800ED4D0 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlpFcRemoveChangeRegistration(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rax

  RtlAcquireSRWLockExclusive(&qword_1801CCD40, (__int64)a2);
  v3 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v4 = (_QWORD *)a2[1], (_QWORD *)*v4 != a2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  return RtlReleaseSRWLockExclusive(&qword_1801CCD40);
}
