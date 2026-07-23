/*
 * XREFs of PpmEventEnergyEstimationRundown @ 0x140B4BFAC
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PpmEventEnergyEstimationRundown()
{
  char *IptSaveArea; // rdx
  unsigned __int8 v1; // al
  __int64 v2; // rcx
  unsigned __int8 v3; // [rsp+30h] [rbp-9h] BYREF
  char v4; // [rsp+31h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  char *v6; // [rsp+50h] [rbp+17h]
  __int64 v7; // [rsp+58h] [rbp+1Fh]
  char *v8; // [rsp+60h] [rbp+27h]
  __int64 v9; // [rsp+68h] [rbp+2Fh]
  char *v10; // [rsp+70h] [rbp+37h]
  __int64 v11; // [rsp+78h] [rbp+3Fh]

  IptSaveArea = (char *)stru_140F12EA0.IptSaveArea;
  if ( stru_140F12EA0.IptSaveArea )
  {
    v4 = 4;
    v3 = 0;
    if ( *(_BYTE *)stru_140F12EA0.IptSaveArea )
    {
      v1 = 0;
      do
      {
        v2 = 56LL * v1;
        *(_QWORD *)&UserData.Size = 1LL;
        UserData.Ptr = (ULONGLONG)&v3;
        v7 = 1LL;
        v6 = &v4;
        v9 = 16LL;
        v8 = &IptSaveArea[v2 + 32];
        v11 = 16LL;
        v10 = &IptSaveArea[v2 + 48];
        EtwWrite(PpmEtwHandle, &PPM_ETW_ENERGY_ESTIMATION_FREQ_RUNDOWN, 0LL, 4u, &UserData);
        IptSaveArea = (char *)stru_140F12EA0.IptSaveArea;
        v1 = v3 + 1;
        v3 = v1;
      }
      while ( v1 < *(_BYTE *)stru_140F12EA0.IptSaveArea );
    }
  }
}
