/*
 * XREFs of TlgRegisterAggregateProvider @ 0x140094C2C
 * Callers:
 *     DriverEntry @ 0x14009603C (DriverEntry.c)
 * Callees:
 *     FinishHash @ 0x140045FA0 (FinishHash.c)
 *     RunningHash @ 0x140046518 (RunningHash.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140093DA8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CreateTlgAggregateSession @ 0x1400943CC (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x140094524 (DestroyAggregateSession.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(__int64 a1)
{
  unsigned __int64 TlgAggregateSession; // rax
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int128 v4; // xmm0
  __int64 v5; // rdx
  int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v12 = a1;
  TlgAggregateSession = (unsigned __int64)CreateTlgAggregateSession(0, 1);
  v2 = 0;
  v3 = TlgAggregateSession;
  if ( TlgAggregateSession )
  {
    *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
    *(_QWORD *)(TlgAggregateSession + 344) = &dword_14006D2D0;
    *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
    *(_BYTE *)(TlgAggregateSession + 373) = 0;
    LODWORD(v12) = 0;
    v4 = *((_OWORD *)off_14006D2D8 - 1);
    v13 = TlgAggregateSession >> 4;
    v11 = v4;
    RunningHash((int *)&v12, (__int64)&v11, 0x10uLL);
    RunningHash((int *)&v12, (__int64)&v13, 8uLL);
    FinishHash(&v12);
    *(_DWORD *)(v3 + 368) = (unsigned int)v12 % 0x927C0 + 600000;
    v6 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
           (char *)&dword_14006D2D0,
           (__int64)TlgAggregateInternalRegisteredProviderEtwCallback,
           v3);
    if ( v6 < 0 )
    {
      qword_14006D2F8 = 0LL;
      DestroyAggregateSession((_QWORD *)v3, v5, v7);
      return (unsigned int)v6;
    }
    else
    {
      ExAcquirePushLockExclusiveEx(&unk_140070CF8, 0LL);
      v8 = qword_140070D00;
      if ( !qword_140070D00 )
      {
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
          (char *)&dword_140070850,
          (__int64)TlgAggregateInternalProviderCallback,
          0LL);
        v8 = qword_140070D00;
      }
      v9 = &qword_140070D00;
      while ( v8 )
      {
        if ( *(int **)(v8 + 344) == &dword_14006D2D0 )
          goto LABEL_11;
        v9 = (__int64 *)(v8 + 352);
        v8 = *(_QWORD *)(v8 + 352);
      }
      *v9 = v3;
LABEL_11:
      ExReleasePushLockExclusiveEx(&unk_140070CF8, 0LL);
    }
  }
  else
  {
    return (unsigned int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_14006D2D0, 0LL, 0LL);
  }
  return v2;
}
