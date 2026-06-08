/*
 * XREFs of AmdPctDiscoverPlatformCtrs @ 0x140023A10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     AmdPctCheckCounterDependency @ 0x1400237B0 (AmdPctCheckCounterDependency.c)
 *     AmdPctDiscoverCounters @ 0x1400238CC (AmdPctDiscoverCounters.c)
 */

unsigned __int64 __fastcall AmdPctDiscoverPlatformCtrs(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // si
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v3 = 0;
  }
  else
  {
    KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v3 = 1;
  }
  if ( byte_140015880 )
  {
    v4 = *(_QWORD *)(a1 + 1240);
    if ( v4 )
    {
      if ( !*(_QWORD *)(v4 + 32) )
        v1 = AmdPctDiscoverCounters(a1, (volatile signed __int64 *)(v4 + 32), 2u, 3u);
    }
  }
  v5 = *(_QWORD *)(a1 + 1080);
  if ( v5 && !*(_QWORD *)(v5 + 312) && (!byte_140015880 || v1) )
  {
    v1 |= AmdPctDiscoverCounters(a1, (volatile signed __int64 *)(v5 + 312), 0, 2u);
    if ( v1 )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 1080) + 336LL) = 1;
      if ( byte_140015880 )
        *(_DWORD *)(a1 + 1252) = 3;
    }
  }
  v6 = AmdPctCheckCounterDependency(a1, v1);
  if ( v3 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v6;
}
