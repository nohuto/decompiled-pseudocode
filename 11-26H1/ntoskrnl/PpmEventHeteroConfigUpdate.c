/*
 * XREFs of PpmEventHeteroConfigUpdate @ 0x140AED8B0
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char PpmEventHeteroConfigUpdate()
{
  _UNKNOWN **v0; // rax
  unsigned __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned __int64 v3; // rdx
  unsigned __int8 *Prcb; // rax
  __int16 v5; // cx
  unsigned __int8 v7; // [rsp+38h] [rbp-19h] BYREF
  unsigned __int8 v8; // [rsp+39h] [rbp-18h] BYREF
  unsigned __int8 v9; // [rsp+3Ah] [rbp-17h] BYREF
  __int16 v10; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  unsigned __int8 *v12; // [rsp+58h] [rbp+7h]
  __int64 v13; // [rsp+60h] [rbp+Fh]
  unsigned __int8 *v14; // [rsp+68h] [rbp+17h]
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  unsigned __int8 *v16; // [rsp+78h] [rbp+27h]
  __int64 v17; // [rsp+80h] [rbp+2Fh]
  unsigned __int8 *v18; // [rsp+88h] [rbp+37h]
  __int64 v19; // [rsp+90h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  v0 = &retaddr;
  v7 = 0;
  v9 = 0;
  v10 = 0;
  v8 = 0;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v0) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE);
    if ( (_BYTE)v0 )
    {
      v1 = PpmCheckRegistered.Bitmap[0];
      LOWORD(v2) = 0;
      while ( 1 )
      {
        while ( v1 )
        {
          _BitScanForward64(&v3, v1);
          v1 &= ~(1LL << v3);
          Prcb = (unsigned __int8 *)KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v2].Flink
                                              + (unsigned int)(unsigned __int8)v3));
          v7 = Prcb[35352];
          v5 = Prcb[208];
          UserData.Ptr = (ULONGLONG)&v10;
          v14 = &v7;
          v10 = v5;
          v12 = Prcb + 209;
          *(_QWORD *)&UserData.Size = 2LL;
          v13 = 1LL;
          v15 = 1LL;
          v8 = Prcb[35353];
          v16 = &v8;
          v17 = 1LL;
          v9 = Prcb[35354];
          v18 = &v9;
          v19 = 1LL;
          LOBYTE(v0) = EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE, 0LL, 5u, &UserData);
        }
        v2 = (unsigned __int16)(v2 + 1);
        if ( (unsigned int)v2 >= PpmCheckRegistered.Count )
          break;
        v1 = PpmCheckRegistered.Bitmap[v2];
      }
    }
  }
  return (char)v0;
}
