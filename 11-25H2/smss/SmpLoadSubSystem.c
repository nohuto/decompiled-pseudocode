/*
 * XREFs of SmpLoadSubSystem @ 0x140016D30
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140002580 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpExecuteInitialCommand @ 0x140003B40 (SmscpExecuteInitialCommand.c)
 *     SmpExecuteCommand @ 0x140003F30 (SmpExecuteCommand.c)
 *     SmpStartCsr @ 0x140004120 (SmpStartCsr.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmpExecuteImage @ 0x140003090 (SmpExecuteImage.c)
 *     SmpDereferenceKnownSubSys @ 0x140006A10 (SmpDereferenceKnownSubSys.c)
 *     SmpWaitForSingleSubSys @ 0x140006EC0 (SmpWaitForSingleSubSys.c)
 *     SmpSbCreateSession @ 0x140007470 (SmpSbCreateSession.c)
 *     SmpUnlockKnownSubSysList @ 0x1400079F0 (SmpUnlockKnownSubSysList.c)
 *     SmpCreateKnownSubSys @ 0x140007FB0 (SmpCreateKnownSubSys.c)
 *     SmLogFailureInt @ 0x140008078 (SmLogFailureInt.c)
 *     SmpWaitForSubSysStartup @ 0x140008D90 (SmpWaitForSubSysStartup.c)
 *     SmpAddKnownSubSys @ 0x140009AB0 (SmpAddKnownSubSys.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpDeleteSubSys @ 0x140019398 (SmpDeleteSubSys.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 */

__int64 __fastcall SmpLoadSubSystem(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  __int64 v7; // r14
  __int64 v10; // rbx
  NTSTATUS v11; // edi
  unsigned int v12; // edx
  _DWORD *KnownSubSys; // rax
  __int64 v14; // rsi
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r9
  NTSTATUS v18; // eax
  int v20; // eax
  __int64 v21; // [rsp+48h] [rbp-59h] BYREF
  int v22; // [rsp+50h] [rbp-51h]
  __int128 v23; // [rsp+58h] [rbp-49h] BYREF
  HANDLE ThreadHandle; // [rsp+68h] [rbp-39h]
  __int128 v25; // [rsp+70h] [rbp-31h]
  int v26; // [rsp+A0h] [rbp-1h]

  v7 = a4;
  memset_0(&v23, 0, 0x68uLL);
  v22 = 0;
  v21 = 0LL;
  if ( (a6 & 0x10) == 0 )
  {
    KnownSubSys = SmpCreateKnownSubSys(0);
    v10 = 0LL;
    v14 = (__int64)KnownSubSys;
    if ( !KnownSubSys )
    {
      if ( a1 )
        v10 = *(_QWORD *)(a1 + 8);
      v11 = -1073741801;
      v12 = 10467;
      goto LABEL_5;
    }
    KnownSubSys[16] = v7;
    SmpWaitForSubSysStartup(v7, 0LL, 0LL, (__int64)&v21);
    SmpAddKnownSubSys((__int64)&v21, (_DWORD *)v14);
    SmpUnlockKnownSubSysList((__int64)&v21);
    v16 = SmpExecuteImage((unsigned __int16 *)a1, a2, a3, v15, 0LL, a6 | 0x20u, &v23);
    v11 = v16;
    if ( v16 >= 0 )
    {
      *(_QWORD *)(v14 + 32) = *((_QWORD *)&v23 + 1);
      *(_OWORD *)(v14 + 48) = v25;
      if ( v26 == 1 || (v11 = SmpSbCreateSession(v7, (void *)0xFFFFFFFFFFFFFFFFLL, &v23, v17, 0LL), v11 >= 0) )
      {
        v18 = NtResumeThread(ThreadHandle, 0LL);
        v11 = v18;
        if ( v18 >= 0 )
        {
          NtClose(ThreadHandle);
          v20 = SmpWaitForSingleSubSys(v14);
          v11 = v20;
          if ( v20 < 0 )
          {
            SmLogFailureInt((__int64)"SmpLoadSubSystem", 10559, v7, 0LL, v20);
            goto LABEL_17;
          }
        }
        else
        {
          SmpLogFailure((__int64)"SmpLoadSubSystem", 10538, v18);
        }
      }
      NtTerminateProcess(*((HANDLE *)&v23 + 1), v11);
      NtClose(ThreadHandle);
    }
    else
    {
      SmpLogFailure((__int64)"SmpLoadSubSystem", 10507, v16);
    }
LABEL_17:
    SmpDeleteSubSys((PVOID)v14);
    SmpDereferenceKnownSubSys((_BYTE *)v14);
    return (unsigned int)v11;
  }
  v10 = 0LL;
  if ( a1 )
    v10 = *(_QWORD *)(a1 + 8);
  v11 = -1073741772;
  v12 = 10451;
LABEL_5:
  SmpLogFailureString((__int64)"SmpLoadSubSystem", v12, v10, v11);
  return (unsigned int)v11;
}
