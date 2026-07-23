/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x140A8F9E8
 * Callers:
 *     MiValidateExistingImage @ 0x140A64508 (MiValidateExistingImage.c)
 *     MiReleaseImageSection @ 0x140A64F24 (MiReleaseImageSection.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x1404C8000 (RtlIsUntrustedObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SeCompareSigningLevels @ 0x140A8FB90 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(__int64 Object, __int64 a2, char a3, char a4, char *a5)
{
  unsigned int v5; // esi
  PVOID v7; // rbp
  char Affinity; // di
  _KPROCESS *Process; // rcx
  char v11; // cl
  char v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+31h] [rbp-17h]
  BOOLEAN IsUntrustedObject[22]; // [rsp+32h] [rbp-16h] BYREF

  v5 = 0;
  v7 = (PVOID)Object;
  v12 = 0;
  v13 = 0;
  IsUntrustedObject[0] = 0;
  if ( SepRmCapTableLock.UserWaitTime )
    return (unsigned int)guard_dispatch_icall_no_overrides(Object, a2);
  Affinity = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    Affinity = (char)RtlpBootStatHandleLock.Affinity;
  if ( Affinity == 2 && !a3 )
  {
    *a5 = 2;
    return v5;
  }
  if ( a3 == 2 )
  {
    if ( !Affinity )
    {
      *a5 = 0;
      return v5;
    }
  }
  else if ( !a3 )
  {
LABEL_7:
    *a5 = a3;
    return v5;
  }
  if ( (a2 & 0x10) != 0 )
    goto LABEL_7;
  LOBYTE(a2) = a3;
  LOBYTE(Object) = a4;
  if ( (unsigned int)SeCompareSigningLevels(Object, a2) )
    goto LABEL_7;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x70000) != 0 || a3 != 6 )
    goto LABEL_7;
  if ( ((__int64)Process[4].ThreadListHead.Flink & 0x800000) != 0 )
    goto LABEL_27;
  if ( !SepRmCapTableLock.QueuedScb )
    return (unsigned int)-1073741823;
  v5 = guard_dispatch_icall_no_overrides((__int64)v7, (__int64)&v12);
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( !v13 && !v12 )
    {
      v5 = RtlIsUntrustedObject(0LL, v7, IsUntrustedObject);
      if ( (v5 & 0x80000000) != 0 )
        return v5;
      if ( !IsUntrustedObject[0] )
      {
        if ( (unsigned __int8)Affinity >= 2u )
        {
          v11 = 9;
          if ( Affinity != 2 )
            v11 = 6;
          *a5 = v11;
        }
        else
        {
          *a5 = 0;
        }
        return v5;
      }
    }
LABEL_27:
    *a5 = 6;
  }
  return v5;
}
