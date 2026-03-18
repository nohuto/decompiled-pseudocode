/*
 * XREFs of KGetAppModelStateSeparatedRegKeyPath @ 0x140A12C50
 * Callers:
 *     KIsSideloadingEnabled @ 0x14084ACFC (KIsSideloadingEnabled.c)
 *     KIsUnlockSettingEnabled @ 0x140AF39E4 (KIsUnlockSettingEnabled.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     RtlGetPersistedStateLocation @ 0x140A10D20 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KGetAppModelStateSeparatedRegKeyPath(PCWSTR SourceString, _WORD *a2, UNICODE_STRING *a3)
{
  int PersistedStateLocation; // eax
  int inited; // ebx
  unsigned int v8; // ebx
  PVOID PoolWithTag; // rdi
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(NumberOfBytes) = 0;
  if ( a3 )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               SourceString,
                               L"TargetNtPath",
                               a2,
                               0,
                               0LL,
                               0,
                               (unsigned int *)&NumberOfBytes);
    inited = PersistedStateLocation;
    if ( PersistedStateLocation >= 0 )
    {
      return (unsigned int)-1073741823;
    }
    else if ( PersistedStateLocation == -2147483643 )
    {
      v8 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4D707041u);
      if ( PoolWithTag )
      {
        inited = RtlGetPersistedStateLocation(
                   SourceString,
                   L"TargetNtPath",
                   a2,
                   0,
                   PoolWithTag,
                   v8,
                   (unsigned int *)&NumberOfBytes);
        if ( inited < 0 || (inited = RtlInitUnicodeStringEx(a3, (PCWSTR)PoolWithTag), inited < 0) )
          ExFreePoolWithTag(PoolWithTag, 0x4D707041u);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)inited;
}
