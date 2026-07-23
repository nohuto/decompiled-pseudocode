/*
 * XREFs of CmpBlockTwoHiveWrites @ 0x1408B86EC
 * Callers:
 *     CmpVirtualPathPresent @ 0x1407764E0 (CmpVirtualPathPresent.c)
 *     CmSaveMergedKeys @ 0x140853684 (CmSaveMergedKeys.c)
 *     CmpVirtualBranchIsReplicated @ 0x1408B7C80 (CmpVirtualBranchIsReplicated.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 *     CmpReferenceHive @ 0x1408CECF0 (CmpReferenceHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpBlockTwoHiveWrites(struct _EX_RUNDOWN_REF *a1, struct _EX_RUNDOWN_REF *a2, char a3)
{
  char v3; // r14
  char v4; // bp
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  struct _EX_RUNDOWN_REF *v12; // rcx

  v3 = 0;
  v4 = 0;
  for ( i = 0LL; ; i = v10 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v10 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( a1 == (struct _EX_RUNDOWN_REF *)NextActiveHive || a2 == (struct _EX_RUNDOWN_REF *)NextActiveHive )
    {
      if ( a3 )
        CmpReferenceHive(NextActiveHive);
      HvLockHiveFlusherExclusive(v10);
      if ( a1 == v10 )
        v3 = 1;
      else
        v4 = 1;
      if ( (!a1 || v3 == 1) && (!a2 || v4 == 1) )
      {
        ExReleaseRundownProtection_0(v10 + 205);
        break;
      }
    }
  }
  if ( a1 && !v3 )
  {
    if ( v4 != 1 )
      return 3221225524LL;
    HvUnlockHiveFlusherExclusive(a2);
    if ( !a3 )
      return 3221225524LL;
    v12 = a2;
    goto LABEL_27;
  }
  if ( !a2 || v4 )
    return 0LL;
  if ( v3 == 1 )
  {
    HvUnlockHiveFlusherExclusive(a1);
    if ( a3 )
    {
      v12 = a1;
LABEL_27:
      CmpDereferenceHive(v12);
    }
  }
  return 3221225524LL;
}
