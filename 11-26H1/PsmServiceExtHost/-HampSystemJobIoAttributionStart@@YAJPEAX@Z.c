/*
 * XREFs of ?HampSystemJobIoAttributionStart@@YAJPEAX@Z @ 0x18006428C
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180012138 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HampSystemJobIoAttributionStart(HANDLE JobHandle)
{
  _DWORD JobInformation[20]; // [rsp+20h] [rbp-68h] BYREF

  memset_0(JobInformation, 0, 0x48uLL);
  JobInformation[0] = 1;
  return NtSetInformationJobObject(JobHandle, JobObjectJobSetInformation|0x20, JobInformation, 0x48u);
}
