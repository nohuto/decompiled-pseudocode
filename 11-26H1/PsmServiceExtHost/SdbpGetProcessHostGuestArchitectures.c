/*
 * XREFs of SdbpGetProcessHostGuestArchitectures @ 0x180091EE0
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x1800917B0 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathAppraiser @ 0x180091940 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x180091B90 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathSystem @ 0x180091E20 (SdbpGetPathSystem.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A15D0 (AslEnvGetProcessWowInfo.c)
 *     AslImageFileToArchitecture @ 0x1800A1B10 (AslImageFileToArchitecture.c)
 */

__int64 __fastcall SdbpGetProcessHostGuestArchitectures(__int16 *a1, __int16 *a2, unsigned __int16 *a3)
{
  int ProcessWowInfo; // eax
  unsigned int v7; // ebx
  __int16 v8; // cx
  __int16 v10[20]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = -1;
  v10[0] = -1;
  ProcessWowInfo = AslEnvGetProcessWowInfo(v10, &v11);
  v7 = ProcessWowInfo;
  if ( ProcessWowInfo >= 0 )
  {
    if ( !a3 || (v8 = AslImageFileToArchitecture(*a3), v8 == -1) )
      v8 = v11;
    v7 = 0;
    *a1 = v10[0];
    *a2 = v8;
  }
  else
  {
    AslLogCallPrintf(
      1LL,
      "SdbpGetProcessHostGuestArchitectures",
      887LL,
      "AslEnvGetProcessWowInfo failed [%x]",
      ProcessWowInfo);
  }
  return v7;
}
