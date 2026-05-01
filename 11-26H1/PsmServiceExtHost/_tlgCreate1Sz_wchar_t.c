/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x18001CCD0
 * Callers:
 *     CrmLogSrvActivityStopStop @ 0x18001C010 (CrmLogSrvActivityStopStop.c)
 *     CrmLogActivityCoordinatorTelemetry @ 0x18001DFA0 (CrmLogActivityCoordinatorTelemetry.c)
 *     CrmLogSrvActivityStartStop @ 0x180022140 (CrmLogSrvActivityStartStop.c)
 *     CrmLogSrvRegisterStop @ 0x180031A90 (CrmLogSrvRegisterStop.c)
 *     CrmSrvActivityAllocate @ 0x180034360 (CrmSrvActivityAllocate.c)
 *     CrmRpcSrvActivityAllocate @ 0x180034760 (CrmRpcSrvActivityAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgCreate1Sz_wchar_t(__int64 a1, const wchar_t *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    while ( a2[++v2] != 0 )
      ;
    result = (unsigned int)(2 * v2 + 2);
  }
  else
  {
    a2 = &word_1800BBB1C;
    result = 2LL;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
