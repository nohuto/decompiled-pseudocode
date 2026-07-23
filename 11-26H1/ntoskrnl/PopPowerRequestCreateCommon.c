/*
 * XREFs of PopPowerRequestCreateCommon @ 0x140425F6C
 * Callers:
 *     PoRegisterSystemState @ 0x140425810 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x140425ADC (PopPowerRequestCreateUserModeRequest.c)
 *     PoCreatePowerRequest @ 0x140425BE0 (PoCreatePowerRequest.c)
 *     NtSetThreadExecutionState @ 0x1407D51F0 (NtSetThreadExecutionState.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140CD5E40 (PopInitializeHighPerfPowerRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140D11CE4 (PopPowerAggregatorInitialize.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     PsGetCurrentProcessSessionId @ 0x1404261F0 (PsGetCurrentProcessSessionId.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1404262F8 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     SessionIsInteractive @ 0x14042683C (SessionIsInteractive.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObject @ 0x14090EB60 (ObCreateObject.c)
 *     PsQueryProcessAttributes @ 0x1409DD970 (PsQueryProcessAttributes.c)
 *     PopPowerRequestStatsCreate @ 0x140A90038 (PopPowerRequestStatsCreate.c)
 *     PopDiagTracePowerRequestCreate @ 0x140AC2C4C (PopDiagTracePowerRequestCreate.c)
 *     PopPowerRequestTableDeleteEntry @ 0x140AD31FC (PopPowerRequestTableDeleteEntry.c)
 *     PopUmpoSendPowerRequestCreate @ 0x140ADAD84 (PopUmpoSendPowerRequestCreate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AEFCB4 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x140AF9FD4 (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestTableInsertEntry @ 0x140B03840 (PopPowerRequestTableInsertEntry.c)
 */

__int64 __fastcall PopPowerRequestCreateCommon(_DWORD *a1, char a2, _QWORD *a3)
{
  _DWORD *v4; // rsi
  char v5; // bl
  LONG *p_LockNV; // rdi
  LONG v7; // r12d
  int Next; // r13d
  __int64 Next_low; // rcx
  __int64 inserted; // r15
  int v11; // eax
  int v12; // r9d
  __int64 v13; // rcx
  int Object; // ebx
  _DWORD *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int SessionId; // eax
  _DWORD v21[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+68h] [rbp-18h]
  int v25; // [rsp+6Ch] [rbp-14h]
  __int128 v26; // [rsp+70h] [rbp-10h]
  char v27; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD *v28; // [rsp+D0h] [rbp+50h]
  void *v29; // [rsp+D8h] [rbp+58h] BYREF

  v28 = a3;
  v4 = a1;
  v21[1] = 0;
  v25 = 0;
  v29 = 0LL;
  v27 = 0;
  if ( *a1 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 1;
    p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
    v7 = p_LockNV[116];
    if ( a2 )
    {
      PsQueryProcessAttributes(CurrentThread->ApcState.Process, &v27, 0LL);
      if ( v27 )
        return (unsigned int)-1073741637;
    }
  }
  else
  {
    v5 = 0;
    p_LockNV = 0LL;
    v7 = 0;
  }
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  Next = (int)stru_140F12EA0.SystemAffinityTokenListHead.Next;
  Next_low = LODWORD(stru_140F12EA0.SystemAffinityTokenListHead.Next);
  ++LODWORD(stru_140F12EA0.SystemAffinityTokenListHead.Next);
  inserted = PopPowerRequestTableInsertEntry(Next_low);
  PopReleasePowerRequestPushLock();
  v11 = v4[10] + 48;
  v22 = 0LL;
  v23 = 0LL;
  LOBYTE(v12) = v5;
  v21[0] = 48;
  v24 = 32;
  v26 = 0LL;
  Object = ObCreateObject(0, PopPowerRequestObjectType, (unsigned int)v21, v12, 0, 168, v11, 0, (__int64)&v29);
  if ( Object < 0 )
  {
    if ( inserted )
    {
      LOBYTE(v13) = 1;
      PopAcquirePowerRequestPushLock(v13);
      PopPowerRequestTableDeleteEntry(*(unsigned int *)(inserted + 8));
      PopReleasePowerRequestPushLock();
    }
  }
  else
  {
    v15 = v29;
    memset_0(v29, 0, 0xA8uLL);
    v15[4] = PsGetCurrentProcessSessionId();
    v15[26] = v7;
    if ( *v4 && !a2 )
    {
      ObfReferenceObjectWithTag(p_LockNV, 0x72506F50u);
      *((_QWORD *)v15 + 17) = p_LockNV;
    }
    *((_BYTE *)v15 + 152) = a2;
    *((_QWORD *)v15 + 12) = v4;
    v15[9] = Next;
    *((_QWORD *)v15 + 9) = v15 + 16;
    *((_QWORD *)v15 + 8) = v15 + 16;
    if ( *v4 )
    {
      SessionId = PsGetSessionIdEx((__int64)p_LockNV);
      if ( a2 )
        v15[5] = 8;
      else
        v15[5] = (unsigned __int8)SessionIsInteractive(SessionId) != 0 ? 63 : 30;
    }
    else
    {
      v15[5] = 18;
    }
    PopPowerRequestStatsCreate(v15);
    LOBYTE(v16) = 1;
    PopAcquirePowerRequestPushLock(v16);
    v17 = (_QWORD *)stru_140F12EA0.Spare35[0];
    if ( *(struct _KTHREAD **)stru_140F12EA0.Spare35[0] != (struct _KTHREAD *)&stru_140F12EA0.WpsFeedback )
      __fastfail(3u);
    ++LODWORD(stru_140F12EA0.KernelShadowStackLimit.AllFields);
    *(_QWORD *)v15 = &stru_140F12EA0.WpsFeedback;
    *((_QWORD *)v15 + 1) = v17;
    *v17 = v15;
    stru_140F12EA0.Spare35[0] = (unsigned __int64)v15;
    *(_QWORD *)inserted = v15;
    if ( !a2 )
      PopUmpoSendPowerRequestOverrideQuery(v15);
    if ( *v4 )
      PopUmpoSendPowerRequestCreate((unsigned int)v15[9]);
    PopDiagTracePowerRequestCreate(0LL, v15);
    PopReleasePowerRequestPushLock();
    *v28 = v15;
    return 0;
  }
  return (unsigned int)Object;
}
