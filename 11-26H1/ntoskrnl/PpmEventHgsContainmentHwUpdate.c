/*
 * XREFs of PpmEventHgsContainmentHwUpdate @ 0x140500B2C
 * Callers:
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14025D3AC (PpmHeteroHgsUpdateContainmentConfiguration.c)
 *     PpmEventTraceControlCallback @ 0x1407DCAD0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall PpmEventHgsContainmentHwUpdate(__int64 a1, __int64 a2, char a3)
{
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v6; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-20h]

  LOBYTE(v3) = PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
  {
    v3 = &PPM_ETW_WPS_CONTAINMENT_HW_UPDATE;
    v6 = (const EVENT_DESCRIPTOR *)PPM_ETW_WPS_CONTAINMENT_HW_RUNDOWN;
    if ( !a3 )
      v6 = &PPM_ETW_WPS_CONTAINMENT_HW_UPDATE;
    if ( PpmEtwRegistered )
    {
      LOBYTE(v3) = EtwEventEnabled((REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink, v6);
      if ( (_BYTE)v3 )
      {
        UserData.Ptr = a1 + 8;
        *(_QWORD *)&UserData.Size = 8LL;
        v9 = a2;
        v10 = 4LL;
        LOBYTE(v3) = EtwWriteEx(
                       (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
                       v6,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       2u,
                       &UserData);
      }
    }
  }
  return (char)v3;
}
