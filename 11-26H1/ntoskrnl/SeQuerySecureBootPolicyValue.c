/*
 * XREFs of SeQuerySecureBootPolicyValue @ 0x14081C0D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     SepSecureBootFindMatchingRegistryRule @ 0x14081C240 (SepSecureBootFindMatchingRegistryRule.c)
 */

__int64 __fastcall SeQuerySecureBootPolicyValue(
        __int64 a1,
        __int64 a2,
        int a3,
        void *a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int v8; // ebx
  __int64 MatchingRegistryRule; // rax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char *v16; // r9
  unsigned int v17; // ecx

  if ( !RtlpBootStatHandleLock.SchedulerApc.Reserved[1] )
    return (unsigned int)-2143092730;
  MatchingRegistryRule = SepSecureBootFindMatchingRegistryRule(a1, a1, a2);
  if ( !MatchingRegistryRule )
    return (unsigned int)-1073741772;
  v10 = *(unsigned int *)(MatchingRegistryRule + 12);
  v11 = *(unsigned __int16 *)((char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + v10);
  if ( a3 != v11 )
    return (unsigned int)-1073741772;
  v12 = v11 & 0x1F;
  if ( v12 )
  {
    v13 = v12 - 2;
    if ( !v13 )
    {
      v16 = (char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + v10 + 2;
      v17 = 4;
      goto LABEL_16;
    }
    v14 = v13 - 2;
    if ( !v14 )
    {
      v16 = (char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + v10 + 8;
      v17 = 4 * *(unsigned __int16 *)((char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + v10 + 6);
      goto LABEL_16;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v16 = (char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + v10 + 2;
      v17 = 8;
      goto LABEL_16;
    }
    if ( v15 != 5 )
      return (unsigned int)-1073741822;
  }
  v16 = (char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + v10 + 4;
  v17 = *(unsigned __int16 *)((char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + v10 + 2);
LABEL_16:
  v8 = 0;
  *a6 = v17;
  if ( a4 )
  {
    if ( a5 >= v17 )
      memmove(a4, v16, v17);
    else
      return (unsigned int)-1073741789;
  }
  return v8;
}
