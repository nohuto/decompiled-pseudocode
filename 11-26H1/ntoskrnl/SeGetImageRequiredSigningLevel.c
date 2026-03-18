/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x140A8876C
 * Callers:
 *     MiValidateExistingImage @ 0x140A56F88 (MiValidateExistingImage.c)
 *     MiReleaseImageSection @ 0x140A579A4 (MiReleaseImageSection.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x1404CE5D0 (RtlIsUntrustedObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     SeCompareSigningLevels @ 0x140A88910 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(__int64 a1, __int64 a2, char a3, char a4, char *a5)
{
  unsigned int IsUntrustedObject; // esi
  __int64 v7; // rbp
  char AffinityVersion; // di
  _KPROCESS *Process; // rcx
  char v11; // cl
  char v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+31h] [rbp-17h]
  char v14[22]; // [rsp+32h] [rbp-16h] BYREF

  IsUntrustedObject = 0;
  v7 = a1;
  v12 = 0;
  v13 = 0;
  v14[0] = 0;
  if ( SepRmCapTableLock.SchedulerAssist )
    return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
  AffinityVersion = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    AffinityVersion = RtlpBootStatHandleLock.AffinityVersion;
  if ( AffinityVersion == 2 && !a3 )
  {
    *a5 = 2;
    return IsUntrustedObject;
  }
  if ( a3 == 2 )
  {
    if ( !AffinityVersion )
    {
      *a5 = 0;
      return IsUntrustedObject;
    }
  }
  else if ( !a3 )
  {
LABEL_7:
    *a5 = a3;
    return IsUntrustedObject;
  }
  if ( (a2 & 0x10) != 0 )
    goto LABEL_7;
  LOBYTE(a2) = a3;
  LOBYTE(a1) = a4;
  if ( (unsigned int)SeCompareSigningLevels(a1, a2) )
    goto LABEL_7;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x70000) != 0 || a3 != 6 )
    goto LABEL_7;
  if ( ((__int64)Process[4].ThreadListHead.Flink & 0x800000) != 0 )
    goto LABEL_27;
  if ( !SepRmCapTableLock.OtherOperationCount )
    return (unsigned int)-1073741823;
  IsUntrustedObject = guard_dispatch_icall_no_overrides(v7, (__int64)&v12);
  if ( (IsUntrustedObject & 0x80000000) == 0 )
  {
    if ( !v13 && !v12 )
    {
      IsUntrustedObject = RtlIsUntrustedObject(0LL, v7, v14);
      if ( (IsUntrustedObject & 0x80000000) != 0 )
        return IsUntrustedObject;
      if ( !v14[0] )
      {
        if ( (unsigned __int8)AffinityVersion >= 2u )
        {
          v11 = 9;
          if ( AffinityVersion != 2 )
            v11 = 6;
          *a5 = v11;
        }
        else
        {
          *a5 = 0;
        }
        return IsUntrustedObject;
      }
    }
LABEL_27:
    *a5 = 6;
  }
  return IsUntrustedObject;
}
