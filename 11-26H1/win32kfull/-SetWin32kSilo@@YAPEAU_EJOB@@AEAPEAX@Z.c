/*
 * XREFs of ?SetWin32kSilo@@YAPEAU_EJOB@@AEAPEAX@Z @ 0x1402654DC
 * Callers:
 *     CreatePerSessionWin32kCall @ 0x140265400 (CreatePerSessionWin32kCall.c)
 * Callees:
 *     <none>
 */

struct _EJOB *__fastcall SetWin32kSilo(void **a1)
{
  __int64 v2; // rbx
  __int64 HostSilo; // rax
  __int128 JobInformation; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  v2 = 0LL;
  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
  {
    v7 = 0LL;
    JobInformation = 0LL;
    v6 = 0LL;
    if ( ZwQueryInformationJobObject(0LL, JobObjectEndOfJobTimeInformation|0x20, &JobInformation, 0x28u, 0LL) >= 0
      && (unsigned int)v7 < HIDWORD(v7) )
    {
      HostSilo = PsGetHostSilo();
      v2 = PsAttachSiloToCurrentThread(HostSilo);
      *a1 = (void *)*((_QWORD *)&v6 + 1);
    }
  }
  return (struct _EJOB *)v2;
}
