/*
 * XREFs of ACPIBuildRegOnRequest @ 0x14002B700
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildRegRequest @ 0x14002B4CC (ACPIBuildRegRequest.c)
 */

__int64 __fastcall ACPIBuildRegOnRequest(ULONG_PTR a1, __int64 a2, void (__fastcall *a3)(__int64, __int64, _QWORD))
{
  ACPIBuildRegRequest(a1, a2, a3);
  return 3221225494LL;
}
