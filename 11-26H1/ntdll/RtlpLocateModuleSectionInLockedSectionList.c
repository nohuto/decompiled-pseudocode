/*
 * XREFs of RtlpLocateModuleSectionInLockedSectionList @ 0x1800DF470
 * Callers:
 *     RtlUnlockModuleSection @ 0x1800DF290 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x1800DF340 (RtlLockModuleSection.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall RtlpLocateModuleSectionInLockedSectionList(char *a1)
{
  _UNKNOWN **i; // rdx
  char *v3; // rcx

  for ( i = (_UNKNOWN **)RtlpLockedSectionList; i != &RtlpLockedSectionList; i = (_UNKNOWN **)*i )
  {
    v3 = (char *)i[2];
    if ( a1 >= v3 && a1 < &v3[(_QWORD)i[3]] )
      return i;
  }
  return 0LL;
}
