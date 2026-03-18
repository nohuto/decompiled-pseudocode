/*
 * XREFs of PpmEventVetoReasonRundown @ 0x1404EB9C4
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407DCAD0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void PpmEventVetoReasonRundown()
{
  _QWORD *IptSaveArea; // rdx
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v4; // ecx
  unsigned int v5; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  __int64 v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v5 = 0;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(
           (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
           &PPM_ETW_VETO_NAME_RUNDOWN) )
    {
      IptSaveArea = stru_140E66FF0.IptSaveArea;
      if ( stru_140E66FF0.IptSaveArea )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v5;
        v1 = 0LL;
        if ( *((_DWORD *)stru_140E66FF0.IptSaveArea + 1) )
        {
          do
          {
            v2 = v1 + 1;
            v3 = 3 * v1;
            v5 = v2;
            v4 = WORD1(IptSaveArea[v3 + 2]);
            v7 = IptSaveArea[v3 + 3];
            v8 = v4;
            v9 = 0;
            EtwWriteEx(
              (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
              &PPM_ETW_VETO_NAME_RUNDOWN,
              0LL,
              0,
              0LL,
              0LL,
              2u,
              &UserData);
            IptSaveArea = stru_140E66FF0.IptSaveArea;
            v1 = v2;
          }
          while ( v2 < *((_DWORD *)stru_140E66FF0.IptSaveArea + 1) );
        }
      }
    }
  }
}
